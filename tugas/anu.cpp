#include <iostream>
using namespace std;

int main(){
    double hargaAwal = 150000.0;
    double persentaseDiskon = 12.5;
    double diskon = (persentaseDiskon / 100) * hargaAwal;
    double hargaBersih = hargaAwal - diskon;

    cout << "Harga Awal: Rp " << hargaAwal << endl;
    cout << "Diskon " << persentaseDiskon << "%: Rp " << diskon << endl;
    cout << "Harga Bersih yang Harus Dibayar: Rp"<< hargaBersih << endl;
    return 0;

}