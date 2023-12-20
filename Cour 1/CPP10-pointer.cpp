#include<iostream>
using namespace std;

int main() {

    int var = 5;
    cout<<&var<<endl; //Melakukan print address
    cout<<*&var<<endl; //Melakukan print value 

    int *p; //*p - declare p itu merupakan variabel tipe pointer yang menunjuk ke alamat variabel lain
    p=&var;

    cout<<p<<endl; //Prints the address of var
    cout<<*p<<endl; //Prints the value stored at the indicated address in the memory

    int a=20;
    cout<<"a : "<<a<<endl;
    int *p1=&a;
    *p1=60;
    cout<<"a : "<<a<<endl;
    cout<<"*p1 : "<<*p1<<endl;

    int * const p_const = &a; //Tidak dapat mengubah address setelahnya
    const int *p2 = &a; //Tak bisa mengubah VALUE
    const int * const p3 = &a; //Tidak dapat mengubah nilai maupun address nya

    int my_var=10;
    int *my_p=&my_var;

    cout<<endl<<endl;
    cout<<"my_var : "<<my_var<<endl; //Integer value
    cout<<"my_p : "<<my_p<<endl; //Address
    cout<<"*my_p : "<<*my_p<<endl; //Integer value from pointed variable (my_var)
    cout<<"&my_p : "<<&my_p<<endl; //Address of pointer itself

    int **pp=&my_p; //Pointer pointing to address of another pointer
    cout<<"pp : "<<pp<<endl;
    cout<<"&pp : "<<&pp<<endl;
    cout<<"*pp : "<<*pp<<endl;
    cout<<"**pp : "<<**pp<<endl;

    return 0;
}


// trial
// int a=20;
//     cout<<"a : "<<a<<endl;
//     int *p1=&a;
//     *p1=60;
//     cout<<"a : "<<a<<endl;
//     cout<<"*p1 : "<<*p1<<endl;
