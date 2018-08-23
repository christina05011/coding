#include <iostream>

using namespace std;

int main()
{
    int a= 2147483646;
    int b= a + 1;
    cout << b <<endl;
    b+=1;
    cout << b << endl;
    return 0;
}
