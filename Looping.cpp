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

//fungsi untuk cek bilangan fibonacci
bool cekFibonacci(int n) {
    if (n < 0) return false;
    int a = 0, b = 1;
    while (a <= n) {
        if (a == n) return true;
        int next = a + b;
        a = b;
        b = next;
    }
    return false;
}

//prosedur input angka
void inputAngka() {
    cout << "Masukkan angka: ";
    cin >> angka;
}

//prosedur tampil hasil prima
void tampilPrima() {
inputAngka();
if (cekPrima(angka))
    cout << angka << "adalah bilangan prima. \n";
else
    cout << angka << " bukan bilangan prima. \n";    
}

// prosedur tampil hasil fibonacci
void tampilFibonacci() {
    inputAngka();
    if (cekFibonacci(angka))
        cout << angka << " termasuk dalam deret fibonacci.\n";
    else
        cout << angka << " tidak termasuk dalam deret Fibonacci.\n";
}

// fungsi menu
void menu() {
    cout << "\n=== MENU ===\n";
    cout << "1. Cek Bilangan Prima\n";
    cout << "2. Cek Bilangan Fibonacci\n";
    cout << "0. Keluar\n";
    cout << "pilihan: ";
    cin >> pilihan;
}

int main() {
    while (true) {
        menu();
        switch (pilihan) {
            case 1:
                tampilPrima();
                break;
            case 2:
                tampilFibonacci();
                break;
        }
    }
}