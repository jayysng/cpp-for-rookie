#include <iostream>
using namespace std;

main()
{
    double var1, var2;

    beginning:

    cout << "Masukkan angka (pertama): " << endl;
    cin >> var1;

    cout << "Masukkan angka (kedua): " << endl;
    cin >> var2;

    cout << "Tentukan aksi/eksekusi!" << endl;
    cout << "+ - add" << endl;
    cout << "- - substract" << endl;
    cout << "* - multiply" << endl;
    cout << "/ - divide" << endl;

    char decision;

    cin >> decision;



    switch(decision)
    {
        case '+':
            cout << var1 << " + " << var2 << " = " << (var1 + var2) << endl;
            break;
        case '-':
            cout << var1 << " - " << var2 << " = " << (var1 - var2) << endl;
            break;
        case '*':
            cout << var1 << " * " << var2 << " = " << (var1 * var2) << endl;
            break;
        case '/':
            if (var2) //var2 != 0
                cout << var1 << " / " << var2 << " = " << (var1 / var2) << endl;
            else
                cout << "Nda boleh membagi dengan angka 0" << endl;
            break;
        default:
            cout << "Kesalahan. Ulangi lagi :) ";

    }

    char decision2;

    cout << "Masih ingin melanjutkan mas?" << endl;
    cin >> decision2;

    if (decision2 == 'y' || decision2 == 'Y')
        goto beginning;
}
