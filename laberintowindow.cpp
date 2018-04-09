#include "laberintowindow.h"
#include "ui_laberintowindow.h"
#include <QFile>
#include <QString>
#include <QFileDialog>
#include <QTextStream>

laberintowindow::laberintowindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::laberintowindow)
{
    ui->setupUi(this);
    connect(ui->pushbutton_load, SIGNAL(clicked()), this, SLOT(takefile()));
    connect(ui->pushbutton_next, SIGNAL(clicked()),this,SLOT(move()));
}

laberintowindow::~laberintowindow()
{
    delete ui;
}

/* Slot que obtiene un archivo de texto con un formato especifico donde contiene
 * el laberinto para su realización
*/
void laberintowindow::takefile()
{
    int filas,columnas,contF=0,contC;
    QString fileName =QFileDialog::getOpenFileName(this, tr("Open File"),"/path/to/file/",tr("Laberintos (*.txt)"));
    QFile* nfile = new QFile(fileName);
    if(!nfile->exists()){
    }else{

        if (!nfile->open( QIODevice :: ReadOnly | QIODevice :: Text))
            return ;

        QString line;
        QTextStream in(nfile);
        in>>filas>>columnas;
        char** matriz = createMatrix(filas+1,columnas);
        while (!in.atEnd()) {
            contC = 0;
            line = in.readLine();
            for(int i=0; i<columnas; i++){
                if(line[i]=='0'){
                    matriz[contF][contC] = '0';
                }else{
                    matriz[contF][contC] = '1';
                }
                contC++;
            }
            contF++;
        }
        simulation(matriz,filas,columnas);
  }
}

/* Función que crea una matriz donde se contendra el laberinto
*/
char** laberintowindow::createMatrix(int filas, int columnas){
    char** matriz = new char*[columnas];
        for(int i=0 ; i<filas; i++){
            matriz[i] = new char[columnas];
        }
        return matriz;
}

/* Funcion que limpia una matriz
*/
void laberintowindow::clearMatrix(char** m, int filas){
    for(int i=0; i<filas ; i++){
            delete[] m[i];
            m[i] = NULL;
        }
        delete[]m;
}


bool laberintowindow::move(){
    return true;
}

void laberintowindow::simulation(char** matrix, int filas, int columnas){
    int x =0, y=0;
    bool pasa;
    linkedstack<LaberintoData*>* Stack  = new linkedstack<LaberintoData*>();
    for(int i=0; i<filas; i++){
        if(matrix[i][0]=='0'){ // Validando entrada en primera columna
            x = 0;
            y = i;
        }
    }
    while(true){
        pasa = false;
        matrix[y][x] = '#';
        if(y>0 && y<filas){ // Arriba
            if(matrix[y-1][x]=='1'){
                y = y-1;
                pasa = true;
                Stack->pop(new LaberintoData(x,y));
            }
        }
        if(y+1<filas){ // Abajo
            if(matrix[y+1][x]=='1'){
                y = y+1;
                pasa = true;
                Stack->pop(new LaberintoData(x,y));
            }
        }
        if(x>0 && x<columnas){ // Izquierda
            if(matrix[y][x-1]=='1'){
                x = x-1;
                pasa = true;
                Stack->pop(new LaberintoData(x,y));
            }
        }
        if(x+1<columnas){ // Derecha
            if(matrix[y][x+1]=='1'){
                x = x+1;
                pasa = true;
                Stack->pop(new LaberintoData(x,y));
            }
        }
        if(pasa==false){

        }
        if(x==columnas){
            //Añadir al stack
        }
    }
}

bool laberintowindow::checkPosition(int y, int x, char** matrix){
    if(matrix[y][x]=='0'){
        return false;
    }
    return true;
}

