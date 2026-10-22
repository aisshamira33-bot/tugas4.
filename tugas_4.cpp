#include <iostream>
#include <string>
using namespace std;

int main() {
int nilai;
string nama;
string grade;

cout << "==================================" << endl;
cout << "   PROGRAM PENENTUAN NILAI SISWA  " << endl;
cout << "==================================" << endl;

cout << "Masukkan nama siswa: ";
getline(cin, nama);

cout << "Masukkan nilai (0-100): ";
cin >> nilai;

if (nilai < 0 || nilai > 100) {
    cout << "Nilai tidak valid!" << endl;
    return 1;
}

if (nilai > 90) {
    grade = "A";
} 
else if (nilai > 80) {
    grade = "B";
} 
else if (nilai > 70) {
    grade = "C";
} 
else {
    grade = "D";
}

cout << "\n========== HASIL NILAI ==========" << endl;
cout << "Nama siswa : " << nama << endl;
cout << "Nilai angka: " << nilai << endl;
cout << "Nilai huruf: " << grade << endl;
cout << "=================================" << endl;

return 0;

}
