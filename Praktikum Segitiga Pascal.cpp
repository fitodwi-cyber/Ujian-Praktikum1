#include <iostream>
using namespace std;

int main() {
    int p;
    cout << "Masukan Tinggi Segitiga : ";
    cin >> p;

    for (int i = p; i >= 1; i--) {
        
        for (int j = i; j < p; j++) {
            cout << " ";
        }
        
        for (int k = 1; k <= (2 * i - 1); k++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}