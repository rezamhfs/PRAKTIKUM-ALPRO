#include<iostream>
using namespace std;

int main(){
    int a;
    int b;
	int menu;
	cout<<"PROGRAM KALKULATOR"<<endl;
	cout<<"Pilihan Menu\n";
	cout<<"1.Pertambahan\n";
	cout<<"2.Pengurangan\n";
	cout<<"3.Perkalian\n";
	cout<<"4.Pembagian\n"<<endl;
	cout<<"Masukkan Pilihan Menu: ";
	cin>>menu;
	cout<<"\nMasukkan Bilangan Pertama	: ";
	cin>>a;
	cout<<"Masukkan Bilangan Kedua		: ";
	cin>>b;
	
	switch(menu){
		case 1 :
			cout<<"Hasil "<<a<<" ditambah "<<b<<" adalah	:"<<a+b;
		break;
		case 2 :
			cout<<"Hasil "<<a<<" dikurang "<<b<<" adalah	:"<<a-b;
		break;
		case 3 :
			cout<<"Hasil "<<a<<" dikali "<<b<<" adalah		:"<<a*b;
		break;
		case 4 :
			cout<<"Hasil "<<a<<" dibagi "<<b<<" adalah		:"<<a/b;
		break;
	}
	return 0;
}
