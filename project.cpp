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
			case 3:
				system("cls");
				int nilai;
				cout<<"Masukkan Nilai	: ";
				cin>>nilai;
				if(nilai>0)
				cout<<"Nilai Positif";
				else if(nilai<0)
				cout<<"Nilai Negatif";
				else
				cout<<"Nilai 0";
				break;
			case 4:
				system("cls");
				char bidang;
				double panjang,luas,alas,Tinggi,lebar;
				
				cout<<"Pilih Jenis Bidang (P/S): ";
				cin >> bidang;
				
				if(bidang=='P'||bidang=='p'){
					cout<<"+++++Menghitung Luas Persegi Panjang+++++\n";
					cout<<"Masukkan Panjang	: ";
					cin>>panjang;
					cout<<"Masukkan Lebar		: ";
					cin>>lebar;
					luas=panjang*lebar;
					cout<<"Hasil			: "<<luas<<endl;
				}
				else if(bidang=='S'||bidang=='s'){
					cout<<"+++++Menghitung Luas Segitiga+++++\n";
					cout<<"Masukkan Alas	: ";
					cin>>alas;
					cout<<"Masukkan Tinggi	: ";
					cin>>Tinggi;
					luas=0.5*alas*Tinggi;
					cout<<"Hasil		: "<<luas<<endl;
				}
				else{
					cout<<"Harap Pilih Jenis Bidang yang Benar!!!";
				}
				break;
			case 5:
				system("cls");
				int LuasRumah;
	
				double LuasParket = 193*1215;
				
				double Box = LuasParket*8/1000000;
				
				double JumlahBox, Parket, Pasang, Total;
				cout<<"Luas Rumah        :  ";
				cin>>LuasRumah;
				cout<<"-------------------------------- \n";
				
				cout<<"Luas Rumah        : "<<LuasRumah<<" m2"<<endl;
				cout<<"Luas 1 Box Parket : "<<Box<<" m2"<<endl;
				
				JumlahBox = LuasRumah/Box;
				cout<<"Jumlah Box Parket : "<<JumlahBox<<endl;
				
				Parket = JumlahBox * 500;
				cout<<"Biaya Parket(Rp)  : "<<Parket<<endl;
				
				Pasang = LuasRumah * 20;
				cout<<"Biaya Pasang(Rp)  : " <<Pasang<<endl;
				
				Total = Parket + Pasang;
				cout<<"Total Biaya(Rp)   : " <<Total<<endl;
				break;
		}
	}
	
	while(pilih=='Y'||pilih=='y');
	system("cls");
	cout<<"Terima Kasih Telah Mencoba Program Saya, Silahkan Kembali Lain Waktu :)";
	getch();
	return 0;
}
