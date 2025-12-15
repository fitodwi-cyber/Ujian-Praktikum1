#include <iostream>
using namespace std;

int main() {
    int bil;

    cout << "Masukkan bilangan: ";
    cin >> bil;


    if (bil % 2 == 0) {
        cout << "Genap" << endl;
    }
    else {
        cout << "Ganjil" << endl;
    }

    if (bil > 10) {
        cout << "Di atas 10" << endl;
    }
    else if (bil < 10) {
        cout << "Di bawah 10" << endl;
    }
    else {
        cout << "Sama dengan 10" << endl;
    }

    return 0;
}