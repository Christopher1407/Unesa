#include <iostream>

using namespace std;

int main()
{
    int a,b,c,d, matriks[5][5], transpose [5][5];

    cout<<"Masukan jumlah baris : "; cin >> c;
    cout<<"Masukan jumlah kolom : "; cin >> d;

    cout<<"Masukan elemen \n";
    for (a = 0; a < c; a++) {
        for (b = 0; b < d; b++) {
            cin >> matriks [a][b];
        }
    }

    for (a = 0; a < c; a++) {
       for (b = 0; b < d; b++) {
           transpose[b][a] = matriks[a][b];
        }
    }

    cout<<"Hasil Transpose :"<<endl;
    for (a = 0; a < c; a++) {
       for (b = 0; b < d; b++) {
           cout << transpose[a][b] << "\t";
        }
        cout << endl;
    }
cout << endl;
}

