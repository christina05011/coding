#include <iostream>

using namespace std;

void swap(int *xp,int *yp){
    int temp=*xp;
    *xp=*yp;
    *yp=temp;
}
bool compareAscending(int i,int j){
    return i>j;
}
bool compareDescending(int i,int j){
    return i<j;
}
void bubbleSort(int arr[],int n, bool(*fp)(int, int)){
    for (int i=0; i<n-1;i++)
        for(int j=0;j<n-i-1;j++)
            if((*fp)(arr[j],arr[j+1]))
                swap(&arr[j],&arr[j+1]);

}
void printArray(int arr[],int size){
    for (int i=0; i<size;i++)
        cout << arr[i] << " ";
    cout << endl;
}
int *funcion(){//no debería funcionar, debe ser ERROR
    int x=5;
    return &x;
}
int *fun(){
    int *ptr=new int;//reserva memoria
    *ptr=5;
    return ptr;
}
int main(){
    int n;
    cin>>n;
    int *pt=new int[n];
    for(int i=0; i<n;i++){
        cin>>pt[i];
    }
    bubbleSort(pt,n,compareAscending);
    printArray(pt,n);
    cout << endl;
    bubbleSort(pt,n,compareDescending);
    printArray(pt,n);
    delete[] pt;//eliminar memoria de arreglos
}

/*int main(){
    //int *ptr=funcion();
    int *pt;
    for(int i=0; i<10;i++){
        pt=fun();
        cout << *pt << endl;
        delete pt;//crea, elimina...
    }
    //delete pt;//elimina solo el último
}*/
//parte del int main:
    /*int arr[]= {64,67,78,323,554,45,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    bool(*fp)(int, int);
    fp=compareDescending;
    bool(*fq)(int,int);
    fq=compareAscending;
    bubbleSort(arr,n,fp);
    printArray(arr,n);
    cout << endl;
    bubbleSort(arr,n,fq);
    printArray(arr,n);
    cout << endl;
    bubbleSort(arr,n,compareAscending);//por fondo es un puntero a función
    printArray(arr,n);
    cout << endl;
    bubbleSort(arr,n,compareDescending);
    printArray(arr,n);
    return 0;*/
//sizeof=cantidad de bits que ocupa en la memoria
