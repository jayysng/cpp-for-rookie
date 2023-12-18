#include<iostream>
using namespace std;

struct personalData {
    string nama;
    string alamat;
    string telpon;
    short usia;
};

void modify(dataDiri *);

int main() {

    dataDiri data[5];

    data[0].nama = "Ananda Jaya";
    data[0].alamat = "Yogyakarta";
    data[0].telpon = "08101010100";
    data[0].usia = 24;

    data[1].nama = "Ananda Jaya";

    cout<<data[0].nama<<endl;
    cout<<data[0].alamat<<endl;
    cout<<data[0].telpon<<endl;
    cout<<data[0].usia<<endl;

    cout<<endl;

    //mengambil caluenya dengan pointer

    cout<<(*data).nama<<endl;
    cout<<(*(data+1)).nama<<endl;
    cout<<(*&data[0]).nama<<endl;
    cout<<(data+1)->nama<<endl;

    dataDiri *p = data;
    cout<<p->nama<<endl;

    cout<<endl;

    modify(p);
    cout<<(p+1)->nama<<endl;

    return 0;
}

void modify(dataDiri *data) {
    (person+1)->nama="Thomas";
}

