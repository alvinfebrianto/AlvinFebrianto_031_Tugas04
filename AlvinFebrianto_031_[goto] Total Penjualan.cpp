#include <iostream>
#include <conio.h>

using namespace std;

int main() {
	int i, n, total, harga=0, hrg;
	float diskon;
	char ulang;
	
	menu:
	cout << " Program Menghitung Total Penjualan Barang\n\n";
	
	cout << " Jumlah Jenis Barang: "; cin >> n; cout << endl;
	for (i=1; i<=n; i++) {
		cout << " Harga Barang ke-" << i << ": "; cin >> hrg;
		harga = harga+hrg;
	}
		if (harga > 500) {
			diskon = harga - (harga*10/100);			
		}
		else if (harga >= 200 && harga <= 500) {
			diskon = harga - (harga*5/100);
		}
		else {
			diskon = harga;
		}
		
	cout << "\n Total Harga Asli = Rp." << harga;
	cout << "\n Total Harga Setelah Diskon = Rp." << diskon;
	
	cout << "\n\n Apakah Anda ingin Mengulang Penghitungan [y/n]? "; cin >> ulang;
	if (ulang == 'y' || ulang == 'Y') {
		system ("cls");
		goto menu;
	}
	else if (ulang == 'n' || ulang == 'N') {
		cout << "\n Terima kasih telah menggunakan program ini";
	}
	
	getch();
}
