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
        clearMatrix(matriz,filas);
    }
}

char** laberintowindow::createMatrix(int filas, int columnas){
    char** matriz = new char*[columnas];
        for(int i=0 ; i<filas; i++){
            matriz[i] = new char[columnas];
        }
        return matriz;
}

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
