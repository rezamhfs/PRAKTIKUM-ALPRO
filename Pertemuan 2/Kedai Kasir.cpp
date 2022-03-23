// KELOMPOK 08 E
// 1.BAHARUDIN ALVIN D- 2100018226
// 2.REZA MUCHAMAD HAFIS- 2100018227
// 3.ANDRI PANGISTU - 2100018256

#include<iostream>
#include<fstream>

using namespace std;

int main (){
	
	int menu;
	int jumlah;
	int harga;
	int bayar;
	
	cout<<"PROGRAM KASIR KEDAI AYAM SUII"<<endl;
	cout<<"PILIHAN MENU"<<endl;
	cout<<"1. Ayam Goreng		Rp.17.000"<<endl;
	cout<<"2. Ayam Bakar		Rp.21.000"<<endl<<endl;
	cout<<"Pilih Menu: ";
	cin>>menu;
	switch (menu){
	case 1:
	
	int hargaGoreng;
	hargaGoreng=17000;
	
	cout<<"Masukkan jumlah Ayam Goreng Yang diinginkan: ";
	cin>>jumlah;
	harga=jumlah*hargaGoreng;
	cout<<"Harga Total			:Rp."<<harga<<endl;
	break;
		
	case 2 :
	int hargaBakar;
	hargaBakar=21000;
	
	cout<<"Masukkan jumlah Ayam Bakar Yang diinginkan: ";
	cin>>jumlah;
	harga=jumlah*hargaBakar;
	cout<<"Harga Total			:Rp."<<harga<<endl;
	break;
}
	int diskon;
	int hargaTot;
	int kembalian;
	
	
	if(harga >= 45000){
	diskon=0.1* harga;
}
	else {
		diskon=0;
	}
	
	cout<<"Diskon				:Rp."<<diskon<<endl;
	hargaTot=harga-diskon;
	cout<<"Jumlah Bayar			:Rp."<<hargaTot<<endl;
	cout<<"Masukkan Uang Bayar		:Rp.";
	cin>>bayar;
	kembalian= bayar-hargaTot;
	cout<<"Jumlah Kembalian		:Rp."<<kembalian;

	
return 0;
}


