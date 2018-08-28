#include <iostream>

using namespace std;

int main()
{

    int num1=0;
    int num2=0;
    int num3=0;

    cout << "ingrese tres números:\n";
    cin >> num1 >> num2 >> num3;

    if (num1==num2){
        if(num2==num3)
            cout << "son iguales" << endl;
    }
   if (num1==num2){
        if (num1>num3){
            cout << "son iguales: " << num1 << " y " << num2 << endl;
            cout << "el mayor es: " << num1 << endl;
            cout << "el menor es: " << num3 << endl;
        }
        else{
            cout << "son iguales: " << num1 << "y" << num2 << endl;
            cout << "el mayor es: " << num3 << endl;
            cout << "el menor es: " << num1 << endl;
        }
    }
    else if (num1==num3){
        if (num1>num2){
            cout << "son iguales: " << num1 << " y " << num3 << endl;
            cout << "el mayor es: " << num1 << endl;
            cout << "el menor es: " << num2 << endl;
        }
        else{
            cout << "son iguales: " << num1 << "y" << num3 << endl;
            cout << "el mayor es: " << num2 << endl;
            cout << "el menor es: " << num1 << endl;
        }
    }
    else if (num2==num3){
        if (num1>num2){
            cout << "son iguales: " << num2 << " y " << num3 << endl;
            cout << "el mayor es: " << num1 << endl;
            cout << "el menor es: " << num2 << endl;
        }
        else{
            cout << "son iguales: " << num2 << "y" << num3 << endl;
            cout << "el mayor es: " << num2 << endl;
            cout << "el menor es: " << num1 << endl;
        }
    }

    if (num1>num2){
        if (num2>num3){
        cout << "el mayor número es: " << num1 << endl;
        cout << "el menor número es: " << num3 << endl;
        }
    }
    else{
        if(num2<num3){
        cout << "el mayor número es: " << num3 << endl;
        cout << "el menor número es: " << num1 << endl;
        }
        if(num2>num3){
        cout << "el mayor número es: " << num2 << endl;
            if(num1<num3)
            cout << "el menor es: " << num1 << endl;
            else
            cout << "el menor es: " << num3 << endl;
        }
    }
    return 0;
}
