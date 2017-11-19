#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
#include <conio.h>
using namespace std;

int main(){
	int pilihan;
	char pilih;
	ulang:
	do {
		system("cls");
		cout<<"Silahkan Pilih Proses Program : \n";
		cout<<"+++++++++++++++++++++++++++++++ \n";
		cout<<"1. Berat Ideal \n";
		cout<<"2. Nilai Absolute \n";
		cout<<"3. Menentukan Nilai \n";
		cout<<"4. Menghitung Luas \n";
		cout<<"5. Menghitung Pemasangan Parket \n";
		cout<<"=============================== \n";
		cout<<"Masukkan Pilihan : ";
		cin>>pilihan;
	}
	
	while(pilih=='Y'||pilih=='y');
	system("cls");
	cout<<"Terima Kasih Telah Mencoba Program Saya, Silahkan Kembali Lain Waktu :)";
	getch();
	return 0;
}
