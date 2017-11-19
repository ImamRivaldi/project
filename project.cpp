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
		switch(pilihan){
			case 1:
				system("cls");
				float berat;
				int tinggi;
				cout<<"Masukkan Tinggi Badan (cm)	: ";
				cin>>tinggi;
				cout<<"Masukkan Beran Badan (kg)	: ";
				cin>>berat;
				if(berat<tinggi/2.5){
					cout<<"Hasil	: Kurus"<<endl;
				}
				else if(tinggi/2.5<=berat&&berat<=tinggi/2.3){
					cout<<"Hasil	: Normal"<<endl;
				}
				else if(tinggi/2.3<berat){
					cout<<"Hasil	: Gemuk"<<endl;
				}
				break;
			case 2:
				system("cls");
				int x,y,z;
				cout<<"Masukkan Nilai X = ";
				cin>>x;
				
				cout<<"Masukkan Nilai Y = ";
				cin>>y;
				
				if(x>y){
					z=y-x;
					cout<<abs(z)<<endl;
					cout<<"Hasil Positif";
				}
				else if(y>x){
					z=x-y;
					cout<<abs(z)<<endl;
					cout<<"Hasil Positif";
				}
				else if(z==0){
					z=z*(-1);
					cout<<abs(x-y)<<endl;
					cout<<"Hasil = 0 (Nilai Mutlak)";
				}
				break;
		}
	}
	
	while(pilih=='Y'||pilih=='y');
	system("cls");
	cout<<"Terima Kasih Telah Mencoba Program Saya, Silahkan Kembali Lain Waktu :)";
	getch();
	return 0;
}
