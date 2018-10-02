#include <iostream>

using namespace std;

int suma(int *arr,int tam){// no llamas a toda la lista solo al puntero
    int res=0;
    for(int i=0; i<tam; i++){
        res+=*arr++;//res+=arr[i];// o res+=*(arr+i)
    }
    return res;
}

// Invertir:
void invertir(int *arr, int tam){//se usan dos punteros para comparar el último con el primero
    int *fin=arr+tam-1;// es como arr+4//apunta al final
    while(fin > arr){
        int temp=*arr;
        *arr++=*fin;//1°asigna, 2°aumenta
        *fin--=temp;
//los quitamos: para abreviar arriba
        //arr++;
        //fin--;
    }
}

void print(int *arr, int tam){// para imprimir al revés, cuando es void no retorna NADA, por eso se crea una función a parte
    for (int i=0; i<tam ; i++)
        cout << arr[i] << " " ;
}
// también puede ser
void imprimir(int *arr, int tam){
    if (tam==0)
        return;
    cout << *arr++ << " ";
    imprimir(arr, --tam);
}

bool palindrome(int *arr,int tam){
    int *b=arr+tam-1;
    bool c=1;
    while((arr<b) && c){
        c= (c && (*arr==*b));// le asig a "c" el valor
        arr++;
        b--;
    }
    return c;
}

//otro palíndrome
bool isPali(int *arr, int tam){
    int *b=arr+tam-1;
    while(b>arr){
        if(*b--==*arr++)
            return true;
    }
    return false;//si no cumple con todo el bucle es palíndrome
}
int str_len(char *cad){//hallar tamaño del array
    int res=0;
    while(*cad++ != '\0')
        res++;
    return res;
}
void str_copy(char *cad1, char *cad2){//copiar todo el contenidode cadena1 a cadna2
    int c=0;
    while(cad1[c]!='\0'){
        cad2[c]=cad1[c];
        c++;
    }
}


int main()
{
    //int arr[]={4,2,10,2,4};
    //int *ptr=arr;
    //cout << suma(arr,5) << endl;
    //invertir(arr,5);
    //print(arr,5);
    //imprimir(arr,5);
    //cout << palindrome(arr,5)<<endl;
    //cout << isPali(arr,5)<<endl;

    char cadena[]="ciencia";
    char cadena2[20];
    //cout << str_len(cadena) << endl;
    str_copy(cadena,cadena2);
    cout << cadena2 << endl;

    return 0;
}


