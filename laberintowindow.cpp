#include "laberintowindow.h"
#include "ui_laberintowindow.h"

laberintowindow::laberintowindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::laberintowindow)
{
    ui->setupUi(this);
    connect(ui->pushbutton_load, SIGNAL(clicked()), this, SLOT(takefile()));
    connect(ui->pushbutton_next, SIGNAL(clicked()),this,SLOT(move()));
    labView = new LabView(this);
    labView->setGeometry(10, 70, 601, 601);
    labView->show();
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
    int filas,columnas;
    QString fileName =QFileDialog::getOpenFileName(this, tr("Open File"),"/path/to/file/",tr("Laberintos (*.txt)"));
    QFile* nfile = new QFile(fileName);
    if(!nfile->exists()){
    }else{

        if (!nfile->open( QIODevice :: ReadOnly | QIODevice :: Text))
            return ;

        QString line;
        QTextStream in(nfile);
        in>>filas>>columnas;
        int f=-1,c=0;
        char** matriz = createMatrix(filas,columnas);
        while (!in.atEnd()) {
            c=0;
            line = in.readLine();
            for(int i=0; i<line.size(); i++){
                if(line[i]=='0'){
                    matriz[f][c] = '0';
                }else if(line[i]=='1'){
                    matriz[f][c] = '1';
                }
                c++;
            }
            f++;
        }
        simulation(matriz,filas,columnas);
  }
}

/* Función que crea una matriz donde se contendra el laberinto
*/
char** laberintowindow::createMatrix(int filas, int columnas){
     char** matriz = new char*[filas];
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
    bool pasa,termina=true;
    linkedstack<LaberintoData*>* Stack  = new linkedstack<LaberintoData*>();
    for(int i=0; i<filas; i++){
        if(matrix[i][0]=='1'){ // Validando entrada en primera columna
            x = 0;
            y = i;
        }
    }
    qDebug()<<"x anterior: "<<x;
    qDebug()<<"y anterior: "<<y;
    int cont =0;
    //while(cont<2){
        pasa = false;
        matrix[y][x] = '#';
        if(y>0 && y<filas && pasa==false){ // Arriba
            if(matrix[y-1][x]=='1'){
                y = y-1;
                pasa = true;
                Stack->pop(new LaberintoData(x,y));
                printMatrix(matrix,filas,columnas);
            }
        }
        if(y+1<filas && pasa==false){ // Abajo=";
            if(matrix[y+1][x]=='1'){
                y = y+1;
                pasa = true;
                Stack->pop(new LaberintoData(x,y));
                printMatrix(matrix,filas,columnas);
            }
        }
        if(x>0 && x<columnas && pasa==false){ // Izquierda
            if(matrix[y][x-1]=='1'){
                x = x-1;
                pasa = true;
                Stack->pop(new LaberintoData(x,y));
                printMatrix(matrix,filas,columnas);
            }
        }
        if(x+1<columnas && pasa==false){ // Derecha
            if(matrix[y][x+1]=='1'){
                x = x+1;
                pasa = true;
                Stack->pop(new LaberintoData(x,y));
                printMatrix(matrix,filas,columnas);
            }
        }
        qDebug()<<"x nuevo: "<<x;
        qDebug()<<"y nuevo: "<<y;
        /*if(pasa==false){
            Stack->top(); // Se elimina el X y Y donde no hay salida
            x = Stack->get(Stack->Size())->getX(); // Se obtiene la posicion X de la posicion anterior
            y = Stack->get(Stack->Size())->getY(); // Se obtiene la posicion Y de la posicion anterior
        }
        if(x>=columnas||y>=filas){
            termina = false;
        }*/
        cont++;
   // }
        //clearMatrix(matrix,filas);
}

void laberintowindow::printMatrix(char** m, int filas, int columnas){
    for(int i=0; i<filas; i++){
        qDebug()<<"Salto de linea. ";
        for(int j=0; j<columnas; j++){
            if(m[i][j]=='0'){
                qDebug()<<"0";
            }
            if(m[i][j]=='1'){
                qDebug()<<"1";
            }
            if(m[i][j]=='#'){
                qDebug()<<"#";
            }
        }
    }
}
