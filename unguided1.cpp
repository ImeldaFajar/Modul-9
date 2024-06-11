#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main() {
    int jumlahSimpul_2311102004; // Tambahkan "_2311102004" di sini
    cout << "Silakan masukkan jumlah simpul: ";
    cin >> jumlahSimpul_2311102004;

    vector<string> simpul(jumlahSimpul_2311102004);
    for (int i = 0; i < jumlahSimpul_2311102004; i++) {
        cout << "Simpul " << i + 1 << ": ";
        cin >> simpul[i];
    }

    vector<vector<int>> bobot(jumlahSimpul_2311102004, vector<int>(jumlahSimpul_2311102004, 0));

    for (int i = 0; i < jumlahSimpul_2311102004; i++) {
        for (int j = 0; j < jumlahSimpul_2311102004; j++) {
            if (i != j) {
                cout << simpul[i] << " --> " << simpul[j] << " = ";
                cin >> bobot[i][j];
            }
        }
    }

    cout << "\n";
    cout << setw(10) << "";
    for (int i = 0; i < jumlahSimpul_2311102004; i++) {
        cout << setw(10) << simpul[i];
    }
    cout << "\n";

    for (int i = 0; i < jumlahSimpul_2311102004; i++) {
        cout << setw(10) << simpul[i];
        for (int j = 0; j < jumlahSimpul_2311102004; j++) {
            cout << setw(10) << bobot[i][j];
        }
        cout << "\n";
    }

    return 0;
}
