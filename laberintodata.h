#ifndef LABERINTODATA_H
#define LABERINTODATA_H

class LaberintoData{
private:
    int x;
    int y;
    bool check;
public:
    int getX(){
        return x;
    }

    int getY(){
        return y;
    }

    void setX(int nX){
        x = nX;
    }

    void setY(int nY){
        y = nY;
    }

    bool isCheck(){
        return check;
    }

    void setCheck(bool nCheck){
        check = nCheck;
    }

};

#endif // LABERINTODATA_H
