#include<iostream>
using namespace std;

int main(){
	
	int menu;
	int jumlah;
	int hargaTot;
	char jarak;
	int ongkir;
	int diskon;
	int disOng;
	int jumlahBayar;
	int bayar;
	int kembalian;
	
	cout<<"\t\t==========MENU RUMAH MAKAN BEJO==========";
	
	cout<<"\n1. Ayam Geprek"<<endl;
	cout<<"2. Ayam Goreng"<<endl;
	cout<<"3. Udang Goreng"<<endl;
	cout<<"4. Cumi Goreng"<<endl;
	cout<<"5. Ayam Bakar"<<endl;
	cout<<"Masukkan Pilihan Menu: ";
	cin>>menu;
	cout<<endl;
	
	
	switch (menu){
		case 1:
			cout<<"AYAM GEPREK"<<endl;
			cout<<"Masukkan Jumlah Pesanan: ";
			cin>>jumlah;
			hargaTot=21000 *jumlah;
			break;
		
		case 2:
			cout<<"AYAM GORENG"<<endl;
			cout<<"Masukkan Jumlah Pesanan: ";
			cin>>jumlah;
			hargaTot=17000 *jumlah;
			break;
			
		case 3:
			cout<<"UDANG GORENG"<<endl;
			cout<<"Masukkan Jumlah Pesanan: ";
			cin>>jumlah;
			hargaTot=19000 *jumlah;
			break;
		
		case 4:
			cout<<"CUMI GORENG"<<endl;
			cout<<"Masukkan Jumlah Pesanan: ";
			cin>>jumlah;
			hargaTot=20000 *jumlah;
			break;
		
		case 5:
			cout<<"AYAM BAKAR"<<endl;
			cout<<"Masukkan Jumlah Pesanan: ";
			cin>>jumlah;
			hargaTot=25000 *jumlah;
			break;
	}
	
	cout<<"Apakah Jarak Rumah Anda kurang dari 3 KM? (Y/N): ";
	cin>>jarak;
	
	cout<<endl;
	
	cout<<"Total Harga: Rp."<<hargaTot<<endl;

	if(jarak=='Y'&& 'y'){
		ongkir=15000;
		cout<<"Biaya Ongkir: Rp."<<ongkir<<endl;
	}
	else {
		ongkir=25000;
		cout<<"Biaya Ongkir: Rp."<<ongkir<<endl;
	}	

	if(hargaTot>=25000 && hargaTot <=50000){
		cout<<"Mendapat Potongan Biaya Ongkir 3000"<<endl;
		disOng=3000;
	}
	
	else if(hargaTot>50000 && hargaTot<=150000){
		cout<<"Mendapatkan Potongan Ongkir 5000 dan Diskon 15%" <<endl;
		disOng=5000;
		diskon=0.15 * hargaTot;
	}
	else if(hargaTot>150000){
		cout<<"Mendapatkab Potongan Ongkir 8000 dan Diskon 35%"<<endl;
		disOng=8000;
		diskon=0.35*hargaTot;
	}
	cout<<"Diskon Pesanan: Rp."<<diskon<<endl;
	cout<<"Diskon Ongkir: Rp."<<disOng<<endl<<endl;
	jumlahBayar=hargaTot+ ongkir -diskon-disOng;
	cout<<"Jumlah Yang Harus Dibayar: Rp."<<jumlahBayar<<endl;
	cout<<"Masukkan Jumlah Bayar: Rp.";
	cin>>bayar;
	
	kembalian=bayar-jumlahBayar;
	cout<<"Kembalian: Rp."<<kembalian<<endl;
	

	
	return 0;
}

