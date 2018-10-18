#include <iostream>
#include <cmath>
using namespace std;

class Punto{
    public:
        int x, y;
};

class Vector{//vectores geométricos
    public:
        Punto inicio, fin;
};

void printf(Vector v){// lo pase por Valor, porque solo es copia.
    cout << "(" << v.inicio.x << "," << v.inicio.y << ") -> (" << v.fin.x << "," << v.fin.y << ")" ;
    //v.inicio.x=100;// eso no cambiaría el valor original, porque no tiene nada que ver.
}
void printf(Vector *v){//por Punteros
    //cout << "(" << (*v).inicio.x << "," << (*v).inicio.y << ") -> (" << (*v).fin.x << "," << (*v).fin.y << ")" ;
    cout << "(" << v->inicio.x << "," << v->inicio.y << ") -> (" << v->fin.x << "," << v->fin.y << ")" ;//OPERADOR FLECHITA
}

float moduloV(const Vector &v){// que retorne el módulo del vector//REFERENCIA
    //int m= (v.fin.x - v.inicio.x)*(v.fin.x - v.inicio.x) + (v.fin.y - v.inicio.y)*(v.fin.y - v.inicio.y);
    //cout << sqrt(m); OTRA FORMA

    int x_= v.fin.x - v.inicio.x;
    int y_=v.fin.y - v.inicio.y;
    return sqrt(x_*x_ +  y_*y_);
}
float moduloV(const Vector *v){//CON PUNTEROS Y OPERADOR FLECHITA
    int x_= v->fin.x - v->inicio.x;
    int y_=v->fin.y - v->inicio.y;
    return sqrt(x_*x_ +  y_*y_);
}

//CREAR UN ARREGLO DE VECTORES, IMPRIMIR EL MODULO DE CADA ELEMENTO

/*float arrMood(const Vector &v,int len){
    for(int j=0; j<len; j++){
        int x_= v[j].fin.x - v[j].inicio.x;
        int y_= v[j].fin.y - v[j].inicio.y;
        return sqrt(x_*x_ +  y_*y_);
    }
}*/

int main()
{
    Vector v;
    v.fin.x=1;
    v.fin.y=2;
    v.inicio.x=3;
    v.inicio.y=4;
    //cout << v.fin.x << endl; // imprime valor indefinido porque no le he asignado un valor.
    //printf(v);
    //cout <<moduloV(v);

    Vector arr[3];//posición cero es un vector -> arr[0].inicio.x=1;
    /*arr[0].inicio.x=1;
     arr[0].inicio.y=2;
     arr[0].fin.x=3;
     arr[0].fin.y=4;

     arr[1].inicio.x=6;
     arr[1].inicio.y=4;
     arr[1].fin.x=5;
     arr[1].fin.y=4;

     arr[2].inicio.x=2;
     arr[2].inicio.y=2;
     arr[2].fin.x=1;
     arr[2].fin.y=4;*///OTRA FORMA

    for (int i=0 ; i<3; i++){
        arr[i].inicio.x=5+i;
        arr[i].inicio.y=6-i;
        arr[i].fin.x=2+i*i;
        arr[i].fin.y=i*i;
    }
    for (int i=0; i<3; i++){
        cout << moduloV(arr[i])<< endl;
    }
    cout << endl;
    Vector *ptrV= &v;
    printf(&v);
    cout << endl;
    cout <<moduloV(&v);
    return 0;
}
