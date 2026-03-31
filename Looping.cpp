#include <iostream>
using namespace std;

//variabel global
int angka;
int pilihan;

//fungsi untuk cek bilangan prima
bool cekPrima(int n) {
    if (n <= 1) return false;
    int i = 2;
    while (i <= n / 2) {
        if (n % i == 0) return false;
        i++;
    }
}

