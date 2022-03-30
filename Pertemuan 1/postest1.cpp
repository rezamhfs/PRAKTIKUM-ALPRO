#include<iostream>
#include<math.h>
using namespace std;

int main (){
	int x1,y1;
	int x2,y2;
	int X,Y;
	float hasil;
	cout<<"-----PROGRAM MENGHITUNG JARAK ANTARA DUA TITIK------"<<endl;
	cout<<"Koordinat A"<<endl;
	cout<<"Masukkan x1: ";
	cin>>x1;
	cout<<"Masukkan y1: ";
	cin>>y1;
	
	cout<<"\nKoordinat B"<<endl;
	cout<<"Masukkan x2: ";
	cin>>x2;
	cout<<"Masukkan y2: ";
	cin>>y2;
	
	X=(x2-x1)*(x2-x1);
	Y=(y2-y1)*(y2-y1);
	hasil=sqrt(X+Y);

	cout<<"\nTitik Koordinat A("<<x1<<" , "<<y1<<")"<<endl;
	cout<<"Titik Koordinat B("<<x2<<" , "<<y2<<")"<<endl;
	cout<<"Jarak Antara Kedua Titik Diatas adalah " <<hasil;
	return 0;
}
