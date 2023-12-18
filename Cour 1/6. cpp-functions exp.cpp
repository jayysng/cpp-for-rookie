#include<iostream>
using namespace std;

void welcome(); // Pendefinisian function
bool isNumber(string tmp);
void enterString();

//Inline Function
double add(double a,double b) {return a+b;}

void changeValueTO10(int x) { x=10; }
//main() is a function
int main() {

    welcome();

    char ch;
    cout<<"Do you want to end the program ? (Y/N)"<<endl;
    cin>>ch;
    if(ch=='Y'||ch=='y')
        return 0;

    cout<<add(4.5+2,4.0)<<endl;

    int a=5;

    changeValueTO10(a);
    cout<<a<<endl; //Nilai dari 'a' akan tetap menjadi 5.


    enterString();
    enterString();
    enterString();

    return 0;
}

void welcome() {
    cout<<"Selamat datang pada operasi function!"<<endl;
}

bool isNumber(string tmp) {
    if(tmp[0]=='0')
        return false; 
    for(int i=0;i<tmp.length();i++) {
        if(!(tmp[i] >= 48 && tmp[i] <= 57))
            return false; 
    }

    return true;
}

void enterString() {
    string tmp;
    cout<<"Enter the number : "<<endl;
    cin>>tmp;

    if(isNumber(tmp))
        cout<<"Number entered properly"<<endl;
    else
        cout<<"Number entered is incorrect"<<endl;
}
