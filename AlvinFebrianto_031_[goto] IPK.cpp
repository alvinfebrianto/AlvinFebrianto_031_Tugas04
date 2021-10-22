#include <iostream>
#include <conio.h>

using namespace std;

int main() {
	string namaMK;
	char nilai, ulang;
	int i, j, MK, SKS, jmlhsmt, smt, nilaiMK;
	float IPK, IP, tSKS, tn;
	
	menu:
	cout << " Program Menghitung IPK Mahasiswa\n\n";
	cout << " Jumlah Semester: "; cin >> jmlhsmt;
	
	if (jmlhsmt<2) {
    	cout << " Input Salah!";
    	return 0;
    }	
	for (i=1; i<=jmlhsmt; i++) {
		cout << "\n-------------------------------------------------";
		cout << "\n Jumlah Mata Kuliah Semester " << i << ": "; cin >> MK;
		for (j=1; j<=MK; j++) {
			cout << "\n Nama Mata Kuliah ke-" << j << ": "; cin >> namaMK;
			cout << " Jumlah SKS Mata Kuliah ke-" << j << ": "; cin >> SKS;
			cout << " Nilai Mata Kuliah ke-" << j << " (A/B/C/D/E): "; cin >> nilai;
			
			if (nilai == 'A'){
				nilaiMK = 4*SKS;
			}
			else if (nilai == 'B') {
            	nilaiMK = 3*SKS;
          	}
          	else if (nilai == 'C') {
            	nilaiMK = 2*SKS;
          	}
          	else if (nilai == 'D') {
            	nilaiMK = 1*SKS;
          	}
          	else if (nilai == 'E') {
            	nilaiMK = 0*SKS;
          	}
          	else {
            	cout << "Input Salah!\n";
          	}
          	tn = tn + nilaiMK;
          	tSKS = tSKS + SKS;         
		}
			IP = tn/tSKS;
			cout << "\n Total IP: " << IP << endl;
	}
	if (jmlhsmt >= 1 && jmlhsmt <= 14) {
		IP = IP+tn;
		IPK = IP/tSKS;
		cout << "\n-------------------------------------------------";
		cout << "\n Total IPK = " << IPK;
	}
	
	cout << "\n\n Apakah Anda ingin Menghitung IPK lagi [y/n]? "; cin >> ulang;
	if (ulang == 'y' || ulang == 'Y'){
		system ("cls");
		goto menu;
	}
	else if (ulang == 'n' || ulang == 'N'){
		cout << "Terima kasih telah menggunakan program ini\n";
	}
	
	getch();
}
