
#include<iostream>
using namespace std;

int main() {

    double val=5.5;

    cout<<val<<endl;
    cout<<(int)val<<endl; //Casting secara eksplisit

    int a=5,b=7;
    cout<<a/b<<endl;
    cout<<(double)a/b<<endl; //Casting secara eksplisit

    int x = 444;
    short y=x; //Casting secara implisit
    cout<<y<<endl;

    cout<< static_cast<int>(val)<<endl; //C++

    char ch='t';
    cout<<(int)ch<<endl; //Pengecekan nilai ASCII dari karakternya
    cout<<static_cast<int>(ch)<<endl;

    return 0;
}


