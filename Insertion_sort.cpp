#include <iostream>
using namespace std;

int arr[20];            //membuat array dengan panjang data 20
int n;                  //membuat variabel inputan n

void input(){   //procedure input
    while (true){
        cout << "Masukkan Jumlah Data Pada Array : ";
        cin >> n;

        if (n <= 20){
            break;
        } 
        else {
            cout << "\nArray Tidak Boleh Lebih Dari 20\n" << endl;
        }
    }
    cout << endl;
    cout << "============================================";
    cout << "===========Masukkan Elemen Array============";
    cout << "============================================" << endl;

    for(int i = 0; i < n; i++){
        cout << "Data ke-" << (i+1) << ": ";
        cin >> arr[i];
    }
}

