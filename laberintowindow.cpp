#include "laberintowindow.h"
#include "ui_laberintowindow.h"
#include <iostream>

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
  laberinto = 0;
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
    laberinto = createMatrix(filas,columnas);
    while (!in.atEnd()) {
      c=0;
      line = in.readLine();
      for(int i=0; i<line.size(); i++){
        if(line[i]=='0'){
          laberinto[f][c] = '0';
        }else if(line[i]=='1'){
          laberinto[f][c] = '1';
        }
        c++;
      }
      f++;
    }

    List<List<char>> lab;

    for (int j = 0; j < columnas; j++){
      List<char> columna;

      for (int i = 0; i < filas; i++){
        columna.insert(laberinto[i][j]);
      }

      lab.insert(columna);
    }

    labView->setLabyrinth(lab);
    labView->refresh();
    fil = filas;
    col = columnas;
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
void laberintowindow::clearMatrix(char** matriz, int f){
  for(int i=0; i<f; i++){
    matriz[i] = NULL;
    delete matriz[i];
  }
  delete matriz;
}


bool laberintowindow::move(){
  return true;
}

void laberintowindow::simulation(int filas, int columnas){
<<<<<<< HEAD
    int x =0, y=0;
    bool pasa,termina=true;
    vector<LaberintoData*> stack;
    linkedstack<LaberintoData*>* Stack  = new linkedstack<LaberintoData*>();
    for(int i=0; i<filas; i++){
        if(laberinto[i][0]=='1'){ // Validando entrada en primera columna
            x = 0;
            y = i;
            stack.push_back(new LaberintoData(x,y));
        }
    }
    while(termina){
        pasa = false;
        laberinto[y][x] = '#';
        if(y>0 && y<filas && pasa==false){ // Arriba
            if(laberinto[y-1][x]=='1'){
                y = y-1;
                pasa = true;
                stack.push_back(new LaberintoData(x,y));
                //Stack->pop(new LaberintoData(x,y));
            }
        }
        if(y+1<filas && pasa==false){ // Abajo=";
            if(laberinto[y+1][x]=='1'){
                y = y+1;
                pasa = true;
                stack.push_back(new LaberintoData(x,y));
                //Stack->pop(new LaberintoData(x,y));
            }
        }
        if(x>0 && x<columnas && pasa==false){ // Izquierda
            if(laberinto[y][x-1]=='1'){
                x = x-1;
                pasa = true;
                stack.push_back(new LaberintoData(x,y));
                //Stack->pop(new LaberintoData(x,y));
            }
        }
        if(x+1<columnas && pasa==false){ // Derecha
            if(laberinto[y][x+1]=='1'){
                x = x+1;
                pasa = true;
                stack.push_back(new LaberintoData(x,y));
                //Stack->pop(new LaberintoData(x,y));
            }
        }
        if(pasa==false){
            if(stack.size()>0){
                stack.pop_back();
                x = stack.back()->getX();
                y = stack.back()->getY();
                std::cout<<stack.size()<<std::endl;
            }
        }
        if(x==columnas-1||y==filas-1){
            termina = false;
        }
    }

    for(int i=0; i<stack.size(); i++){
        x = stack[i]->getX();
        y = stack[i]->getY();
        laberinto[y][x] = 'x';
    }
    for(int i=0; i<filas; i++){
        for(int j=0; j<columnas; j++){
             std::cout << laberinto[i][j]<<" ";
        }
        std::cout << std::endl;
    }

    delete Stack;
=======
  int x =0, y=0;
  bool pasa,termina=true;
  vector<LaberintoData*>* stack = new vector<LaberintoData*>();
  linkedstack<LaberintoData*>* Stack  = new linkedstack<LaberintoData*>();
  for(int i=0; i<filas; i++){
    if(laberinto[i][0]=='1'){ // Validando entrada en primera columna
      x = 0;
      y = i;
    }
  }
  while(termina){
    pasa = false;
    laberinto[y][x] = '#';
    if(y>0 && y<filas && pasa==false){ // Arriba
      if(laberinto[y-1][x]=='1'){
        qDebug()<<" arriba ";
        y = y-1;
        pasa = true;
        stack->push_back(new LaberintoData(x,y));
        //Stack->pop(new LaberintoData(x,y));
      }
    }
    if(y+1<filas && pasa==false){ // Abajo=";
    if(laberinto[y+1][x]=='1'){
      qDebug()<<" abajo ";
      y = y+1;
      pasa = true;
      stack->push_back(new LaberintoData(x,y));
      //Stack->pop(new LaberintoData(x,y));
    }
  }
  if(x>0 && x<columnas && pasa==false){ // Izquierda
    if(laberinto[y][x-1]=='1'){
      qDebug()<<" izquierda ";
      x = x-1;
      pasa = true;
      stack->push_back(new LaberintoData(x,y));
      //Stack->pop(new LaberintoData(x,y));
    }
  }
  if(x+1<columnas && pasa==false){ // Derecha
    if(laberinto[y][x+1]=='1'){
      qDebug()<<" derecha ";
      x = x+1;
      pasa = true;
      stack->push_back(new LaberintoData(x,y));
      //Stack->pop(new LaberintoData(x,y));
    }
  }
  qDebug()<<"laberinto["<<y<<"]["<<x<<"]"<<laberinto[y][x];
  if(pasa==false){
    qDebug()<<" Se elimina y: "<<y<<" | x: "<<x<<" | laberinto["<<y<<"]["<<x<<"]"<<laberinto[y][x];
    if(stack->size()>0){
      stack->pop_back();
      x = stack->back()->getX();
      y = stack->back()->getY();
    }
  }
  if(x==columnas-1||y==filas-1){
    termina = false;
  }
}

for(size_t i=0; i<stack->size(); i++){
  x = stack->back()->getX();
  y = stack->back()->getY();
  stack->pop_back();
  laberinto[y][x] = 'x';
}
delete Stack;
>>>>>>> c7ebd3788abaae32b9705f488afb90bf94944e58
}


void laberintowindow::on_pushbutton_next_clicked()
{
  if (laberinto == 0)
  return;

  int filas = fil;
  int columnas = col;

  simulation(filas,columnas);

  List<List<char>> lab;

  for(int j = 0 ;j < columnas; j++){
    List<char> columna;

    for(int i = 0; i < filas; i++){
      if (laberinto[i] != 0){
        columna.insert(laberinto[i][j]);
      }else{
        columna.insert('#');
      }
      qDebug() << laberinto[i][j];
    }
    qDebug() << "----";

    lab.insert(columna);
  }

  labView->setLabyrinth(lab);
  labView->refresh();
}
