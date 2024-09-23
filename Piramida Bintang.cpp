#include <iostream>
using namespace std;

void BuatPiramida (int tinggi){
    for (int i = 1; i <= tinggi; ++i){
        for (int j = 1; j <= tinggi -i; ++j){
                cout << " ";
    }
    for (int k = 1; k <= 2 * i - 1; ++k){
            cout << "*";
    }
    cout << endl;
    }
}

int main () {
    int tinggi;
    cout << "Masukan Tinggi Piramida: ";
    cin >> tinggi;

    BuatPiramida(tinggi);

    return 0;

}
