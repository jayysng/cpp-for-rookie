#include<iostream>
using namespace std;

int main() {

    string text = "Horas"; 

    char ch = text[0];

    char characters[]="Konnichiwa";

    cout<<characters<<endl;

    cout<<characters[0]<<endl;
    cout<<*(characters)<<endl;
    cout<<characters[1]<<endl;
    cout<<*(characters+1)<<endl;

    cout<<endl<<endl;

    char *p = characters;

    cout<<p[0]<<endl;
    cout<<*p<<endl;

    cout<<p[1]<<endl;
    cout<<*(p+1)<<endl;

    cout<<endl<<endl;

    string text1="Punten";

    const char * text2 = text1.c_str();
    cout<<text2<<endl;

    char array[]="Sontohhh";
    string test = array;
    cout<<test<<endl;

    const char * a = "Tes";
    cout<<a<<endl;

    char * const dynamic_array = new char[50];
    dynamic_array[0]='k';
    dynamic_array[1]='\0';
    cout<<dynamic_array<<endl;
    delete [] dynamic_array;

    cout<<endl<<endl;

    string array_of_strings[5]="qwerty";

    array_of_strings[0]="abc";
    array_of_strings[1]="def";

    cout<<array_of_strings[0]<<endl;
    cout<<array_of_strings[1]<<endl;
    cout<<array_of_strings[2]<<endl;
    //...

    return 0;
}
