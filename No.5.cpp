#include <iostream>

using namespace std;

int main() 

{
  int matriks1[5][5], matriks2[5][5], hasil[5][5];
  int a, b, i, j, k, p, q, jumlah = 0;
  
  cout << "Jumlah baris matriks pertama: ";
  cin >> a;
  cout << "Jumlah kolom matriks pertama: ";
  cin >> b;
  cout << "Jumlah baris matriks kedua: ";
  cin >> p;
  cout << "Jumlah kolom matriks kedua: ";
  cin >> q;
  
    cout << "Masukkan elemen matriks pertama: \n";
    for(i = 0; i < a; i++){
      for(j = 0; j < b; j++){
        cin >> matriks1[i][j];
      }
    }
    cout << "Masukkan elemen matriks kedua: \n";
    for(i = 0; i < p; i++){
      for(j = 0; j < q; j++){
        cin >> matriks2[i][j];
      }
    }
    for(i = 0; i < a; i++){
      for(j = 0; j < q; j++){
        for(k = 0; k < p; k++){
          jumlah = jumlah + matriks1[i][k] * matriks2[k][j];
        }
        hasil[i][j] = jumlah;
        jumlah = 0;
      }
    }
    cout << "Hasil perkalian matriks: \n";
    for(i = 0; i < a; i++){
      for(j = 0; j < b; j++){
        cout << hasil[i][j] << "\t";
      }
      cout << endl;
    }
  }
