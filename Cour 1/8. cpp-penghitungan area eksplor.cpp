
#include<iostream>
#define PI 3.14
using namespace std;

void initMenu();
void menuDecision(int);
double areaLingkaran(double);
double areaPersegi(double);
double areaPPanjang(double,double);
double areaSegitiga(double,double);


int main() {

    int choice;
    char cont;

    do {
        //system("cls");
        initMenu();
        cin>>choice;

        menuDecision(choice);

        cout<<"Apakah kamu ingin melanjutkan? (Y/y)"<<endl;
        cin>>cont;
    } while(cont=='Y'||cont=='y');

    return 0;
}

void initMenu() {
    cout<<"Silahkan pilih opsi :"<<endl;
    cout<<"1.Lingkaran"<<endl;
    cout<<"2.Persegi"<<endl;
    cout<<"3.Persegi Panjang"<<endl;
    cout<<"4.Segitiga"<<endl;
}

void menuDecision(int ch) {
    double r,a,b,h;
    switch(ch) {
    case 1:
        cout<<"Radiusnya : "<<endl;
        cin>>r;
        areaCircle(r);
        break;
    case 2:
        cout<<"Sisi persegi : "<<endl;
        cin>>a;
        areaSquare(a);
        break;
    case 3:
        cout<<"Lebar dan panjang : "<<endl;
        cin>>a>>b;
        areaRectangle(a,b);
        break;
    case 4:
        cout<<"Alas dan tinggi segitiga : "<<endl;
        cin>>a>>h;
        areaTriangle(a,h);
        break;
    default:
        cout<<"Kesalahan. Tidak dapat diproses!"<<endl;
    }
}

double areaLingkaran(double r) {
    double result = PI *r *r;
    cout<<"Area dari lingkaran adalah : "<<result<<endl;
    return result;
}

double areaPersegi(double a) {
    double result = a* a;
    cout<<"Area dari persegi adalah : "<<result<<endl;
    return result;
}

double areaPPanjang(double a,double b) {
    double result = a* b;
    cout<<"Area dari persegi panjang adalah : "<<result<<endl;
    return result;
}

double areaSegitiga(double a,double h) {
    double result = (1/2.0)*a*h;
    cout<<"Area dari segitiga adalah : "<<result<<endl;
    return result;
}
