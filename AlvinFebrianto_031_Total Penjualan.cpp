#include <iostream>
#include <conio.h>

using namespace std;

int main() {
	int i, n, total, harga=0, hrg;
	float diskon;
	
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
	
	getch();
}
