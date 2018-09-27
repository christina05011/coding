#include <iostream>

using namespace std;

//problema 1
int sumaArrays(const int cadena[], const int len)
{
    long int suma=0;
    for(int i=0; i<len ; suma += cadena[i++]);
    return suma;

}

//problema 2
int menor(const int arr[], const int len){
    int men= arr[0];
    for(int i=0; i<len ; i++){
        if(arr[i]< men)
            men=arr[i];
    }
    return men;
}

//problema 3
bool perfecto(int a){
    int b;
    int c=0;
    for (b=1; b<a-1; b++) {
        if (a % b == 0)
        c += b;
    }

    if (a == c)
        return true;

    else
        return false;

}
int cantPerfArrays(const int array[], const int len) {
   int canperf = 0;
   for(int i = 0; i < len;  i++){
        if( perfecto(array[i]))
            canperf +=1;
    }
   return canperf;
}
//problema 4
void ordenDescen(int cadena[],int len){
    for(int i=0; i<len ; i++){
        for(int j=0; j<len ;j++){
            if(cadena[j]<cadena[i]) {
                int c=cadena[i];
                cadena[i]=cadena[j];
                cadena[j]=c;
            }
        }
    }
}
void ordenAscen(int cadena[],int len){
    for(int i=0; i<len ; i++){
        for(int j=0; j<len ;j++){
            if(cadena[j]>cadena[i]) {
                int c=cadena[j];
                cadena[j]=cadena[i];
                cadena[i]=c;
            }
        }
    }
}

//problema 5
void reversa(int cadena[],int len){
    for(int i=0; i<=(len/2) ; i++){
        int change=cadena[i];
        cadena[i]=cadena[len-1];
        cadena[len-1]=change;
        len-=1;
    }
}
//problema 6:Para hacer que un caracter aparezca en mayúscula:
bool isalpha(char a){
    int n=static_cast<int>(a);
    return ((n>=65 && n<=90) || (n>=97 && n<=122));
}
char isuper(char a){
    int n=static_cast<int>(a);
    return n-32;
}

//problema de PALÍNDROME
bool isPali(int cadena[],int len){
    int y=len;
    int cont=0;
    for(int i=0; i<=(y/2); i++){
        if(cadena[i]==cadena[y-2]){
            cont++;
            y--;
        }
    }
    if(cont==(len/2)){
        return true;
    }
    else
        return false;
}
//recursiva de palindrome
bool PalindromeRecursivo(int cadena[],int inicio,int x ){
    int y=x-1;
    if(cadena[inicio] != cadena[y]){
        return false;
    }

    if(cadena[inicio] == cadena[y-1]){
        PalindromeRecursivo(cadena, inicio+1, y-1);
    }
    else{
        return true;
    }
}

int main()
{
    int sumInt[]={6,1,2,3,6,6};
    //cout << "suma: " << sumaArrays(sumInt,10) << endl;
    //cout << " El menor es: " << menor(sumInt,10) << endl;int sumInt[]={6,1,2,3};
    //cout << "La cantidad de numeros perfectos es: " << cantPerfArrays(sumInt,6)<< endl;
    /*ordenDescen(sumInt,6);
    for(int i=0;i<6;i++)
        cout << sumInt[i];
    cout << endl;
    ordenAscen(sumInt,6);
    for(int i=0;i<6;i++)
        cout << sumInt[i];
    reversa(sumInt,6);
    for(int i=0;i<6;i++)
        cout << sumInt[i];*/
    /*int ver=isPali(sumInt,6);
    if(ver==1)
        cout<<"si es palindrome";
    else
        cout <<"no es palindrome";*/
    int ver2=PalindromeRecursivo(sumInt,0,6);
    if(ver2)
        cout <<"si es palindrome";
    else
        cout << "no es palindrome";

    /*char ch='n';
    //cout << isalpha(ch) << endl;
    cout << isuper(ch) <<endl;*/

    return 0;
}
