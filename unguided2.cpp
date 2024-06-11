#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

void printTree(const vector<string>& simpul, const vector<vector<int>>& bobot) {
    cout << "\n";
    cout << setw(10) << "";
    for (size_t i = 0; i < simpul.size(); i++) {
        cout << setw(10) << simpul[i];
    }
    cout << "\n";

    for (size_t i = 0; i < simpul.size(); i++) {
        cout << setw(10) << simpul[i];
        for (size_t j = 0; j < simpul.size(); j++) {
            cout << setw(10) << bobot[i][j];
        }
        cout << "\n";
    }
}

int main() {
    int jumlahSimpul_2311102004;
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

    int pilihan;
    do {
        cout << "\nMenu:\n";
        cout << "1. Tampilkan Tree\n";
        cout << "2. Keluar\n";
        cout << "Pilihan Anda: ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                printTree(simpul, bobot);
                break;
            case 2:
                cout << "Terima kasih!\n";
                break;
            default:
                cout << "Pilihan tidak valid. Silakan coba lagi.\n";
        }
    } while (pilihan != 2);

    return 0;
}
