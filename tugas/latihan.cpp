#include<iostream>
using namespace std;

bool cekPrima(int n) {
    if (n <= 1)
        return false;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0)
            return false;
    return true;
}

int main() {
    int batas;
    cout << "Masukkan batas: ";
    cin >> batas;
    for (int n = 2; n <= batas; n++) {
        if (cekPrima(n) && n % 3 == 0) {
            cout << n << " ";
        }
    }
    return 0;
}
