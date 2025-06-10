#include <iostream>
using namespace std;

int main()
{
    try {
        cout << "Selamat Belajar di Prodi TI UMY" << endl;
        throw 0.5; // Melempar sebuah integer maka
        cout << "Pernyataan tidak akan di eksekusi" << endl;
    }
}