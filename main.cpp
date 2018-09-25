#include <iostream>

using namespace std;

/*
// PROJECT EULER
//PROBLEMA 1. MÚLTIPLOS DE 3 Y 5: If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
//Find the sum of all the multiples of 3 or 5 below 1000.
int multiplos(){
    int a, sum=0;
    for(a=1 ; a< 1000 ; a++){
        if(a%3==0 || a%5==0)
            sum+=a;
    }
    cout << "la suma de estos multiplos es " << sum;
}
//PROBLEMA 2.FIBONACCI:
int fibonacci(){
    int x = 1, y = 2, fib = 0, res = 2;
    while (x+y < 4000000){
            fib = x+y;
            if (fib % 2 == 0)
                {res += fib;}
                x = y;
                y = fib;
    }
   cout << endl << "la suma de fibonacci es:  " << res << endl;
}
//PROBLEMA 3: Los factores primos de 13195 son 5, 7, 13 y 29.
//¿Cuál es el mayor factor primo de 600851475143?
int main(){
    long long primo= 600851475143;
    long long fac=2;
    while(primo>1){
        if(!(primo%fac)){
            primo/=fac;
        }
        else
            fac++;
    }
    cout << fac << endl;
}*/
/*//EJERCICIO 4
int palindrome() {
    int n1,n2,n3,n4,n5,n6,num6cifras,v2=999;
    for(int v1=999;v1>=v2;v1--){
        num6cifras=v1*v2;
        n1=num6cifras/100000;
        n2=(num6cifras%100000/10000);
        n3=(num6cifras%10000/1000);
        n4=(num6cifras%1000/100);
        n5=(num6cifras%100/10);
        n6=num6cifras%10;
    if (n1==n6 && n2==n5 && n3==n4){
        cout<<num6cifras<<" es un palindrome de 6 cifras formado por "<<v1<<" y "<<v2 ;
            }
    else
        v2--;
        }
    return 0;
}
int main(){
    cout << palindrome() << endl;
}
*/
//  EJERCICIO 5 //múltiplo más pequeño
/*int mulMasPeque(){
    int arr[10];
    for(int i=0;i<10;i++){ //creamos el array desde 1 hasta 20
        arr[i]=i+1;
    }
    for(int i=0;i<10;i++){
        for(int j=0;j<i;j++){ //va a comparar i[0] con todos los valores hasta 20
            if(arr[i]%arr[j]==0) //compara todos los valores, busca multiplos
                arr[i]=arr[i]/arr[j]; //agrega a una lista los minimos valores
        }
    }
    int divis=1;
    for(int i=0;i<20;i++)
        divis*=arr[i]; //multiplica los minimos valores de la lista
    cout<<divis<<endl;
    }
int main(){
    cout << mulMasPeque() << endl;
}*/
//EJERCICIO 6 SUMA DE DIFERENCIA CUADRADA
/*int difCuadrada(){
    int rest,sum=0,produ=0;
    for(int i=1;i<=100;++i){
        sum+=i; //SUMA EL ARRAY
        produ+=(i*i); //ELEVA AL CUADRADO
    }
    sum*=sum; //ELEVA AL CUADRADO
    rest=sum-produ; //resultado
    cout<<rest;
    }
int main(){
    cout << difCuadrada() << endl;
}
*/

//PROBLEMA 7: Imprimir todos los numeros primos menores a N.
int main(){
    int cont,t=1,pr;
    for(int x=1; ; x++){
        cont=0;
        for(int y=1; y<=x ; y++){
            if(x%y==0)
                cont++;
        }
        if(cont==2){
            pr=x;
            t++;
            if(t>10001)
                break;
        }
    }

    cout << pr << endl;



}
// EJERCICIO 8: No entiendo.

//PROBLEMA 9:
/*int main(){
    for(int a; a<1000 ; a++){
        for(int b=a+1; b< 1000 ; b++){
            for(int c=b+1; c<1000 ; c++){
                if((a+b+c)== 1000){
                    if((a*a + b*b)== c*c){
                            cout << "el valor de a: " << a << "b es: " << b << "c es: " << c << endl;
                            cout << "el resultado de a*b*c es:" <<a*b*c << endl;
                    break;
                    }
            }
        }
    }
}
}
*/
//  EJERCICIO 10
/*int sumPrimos(){
    int primo, cont=0,j=2;
    long long SUMA=0;
    while(j<2000000){ //hasta los primos menores a 2000000
        for(int i=1;i<(j+1);i=i+1){ //desde 1 hasta 2000000
            if ((j%i)==0){ //va a encontrar multiplos
                cont=cont+1; //suma 1 al contador
    		}
    		primo=i; //sino almacena ese i en primo
		}
		if(cont==2){ //si cont==2, significa que tiene solo 2 divisores, entonces es primo
                SUMA+=primo;  //sumanos los primos
                cout<<SUMA<<endl;
		}
		j++;
		cont=0;
    }
    cout<<"la suma es: "<<SUMA<<endl;
}*/
