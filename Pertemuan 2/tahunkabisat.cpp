#include <iostream>
using namespace std;

void Kabisat(){
	
	int tahun;
	cout << "Masukkan Tahun: ";
	cin >> tahun;
	
	if(tahun % 400 == 0){
    	cout << tahun << " Merupakan Tahun Kabisat"<<endl;
	} 
	else if(tahun%100 == 0){
    	cout << tahun << " Bukan Tahun Kabisat"<<endl;
	}
	else if(tahun%4 == 0){
    cout << tahun << " Merupakan Tahun Kabisat"<<endl;
	}
	 else {
    cout << tahun << " Bukan Tahun kabisat"<<endl;
	}
}
int main(){
	Kabisat();

	return 0;
}
