#include <iostream>

using namespace std;

class Kasus{
private :
int jum_bulan,Jajan[50],kuliah[50],sub_tot[50],sisa;
	float tot;
int saku=200000;

  public :
  void aplikasi(){
  saku=2000000;
	cout<<"Masukan Jumlah Bulan : ";
	cin>>jum_bulan; 
	
	for (int i=0; i<jum_bulan;i++){
		cout<<endl;
		cout<<"Bulan Ke-"<<i+1<<endl;
		cout<<endl;
		
		cout<<"Pengeluaran Uang Jajan: ";
		cin>>Jajan[i];
    
		cout<<"Pengeluaran Uang Kuliah: ";
		cin>>kuliah[i];

    sub_tot[i]=Jajan[i]+kuliah[i];
    sisa=saku-sub_tot[i];
    
    cout<<"Sisa="<<sisa;
	}
    }
};
// 	cout<<"Uang saku = "<<saku<<endl;
// 	cout<<"Jumlah Pengeluaran = "<<tot<<endl;
// 	cout<<"Sisa tabungan saat ini = "<<saku-tot <<endl;


