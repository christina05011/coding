#include "src/Point.cpp"
#include "src/PointArray.cpp"
#include <iostream>

using namespace std;

int main()
{
    Point <int>a (1,2);
    Point <int>b (4,5);
    Point <int>c (6,3);
    Point <int>arr[]={a,b,c};
    int size=sizeof(arr)/sizeof(arr[0]);

    PointArray<int> pa2(arr,size);

    a.print();
    b.print();
    c.print();

    cout << "ahora con array" << endl;

    pa2.print();
    cout<<endl;
    pa2.push_back(b);
    pa2.print();
    cout<<endl;
    pa2.insert(2,c);
    pa2.print();
    cout<<endl;
    pa2.remove(1);
    pa2.print();
    cout<<endl;




    return 0;
}
