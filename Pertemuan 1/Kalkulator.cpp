#include <iostream>
#include <math.h>
using namespace std;

int tambah(int x,int y)
{
	int U =x + y;
	return U;
}
int kurang(int x,int y)
{
	int U =x - y;
	return U;
}
int kali(int x,int y)
{
	int U =x * y;
	return U;
}
float bagi(float x,float y)
{
	float U =x / y;
	return U;
}
int pangkat(int x,int y)
{
	int U =pow(x,y);
	return U;
}
float akar(float x)
{
	float U =sqrt(x);
	return U;
}
int main()
{
	int a,b,ta,ku,ka;
	float pa,ak,ba;
	string p;
	cout << "Baharudin Alvin D" << endl;
	cout << "2100018226" << endl;
	cout << "Reza Muchamad Hafis" << endl;
	cout << "2100018227" << endl;
	cout << "Andri Pangistu" << endl;
	cout << "2100018256" << endl;
	cout << "========================="<< endl;
	cout << "PROGRAM KALKULATOR" << endl;
	cout << "========================="<< endl;
	cout << "||\tMenu Operasi :\t||" << endl;
	cout << "||\t1. Penajumlahan\t||" << endl;
	cout << "||\t2. Pengurangan\t||" << endl;
	cout << "||\t3. Perkalian\t||" << endl;
	cout << "||\t4. Pembagian\t||" << endl;
	cout << "||\t5. Perpangkatan\t||" << endl;
	cout << "||\t6. Perakran\t||" << endl;
	cout << "========================="<< endl;
	cout << "Pilih Menu No: "; cin >> p;
	cout << "\nBilangan Pertama: "; cin >> a;
	
	ak = akar (a);
	if(p =="6")
	{
		cout << "\nhasil akar " << ak << endl;
	}
	else
	{
		cout << "\nBilangan Kedua: "; cin >> b;
	}
	
	ta = tambah(a,b);
	ku = kurang(a,b);
	ka= kali(a,b);
	ba= bagi(a,b);
	pa= pangkat(a,b);
	
	if(p == "1")
	{
		cout << "\nHasil " << a << " + " << b << " = " << ta << endl;
	}
	else if(p == "2")
	{
	cout << "\nHasil " << a << " - " << b << " = " << ku << endl;
	}
	else if(p == "3")
	{
	cout << "\nHasil " << a << " x " << b << " = " << ka << endl;
	}
	else if(p == "4")
	{
	cout << "\nHasil " << a << " : " << b << " = " << ba << endl;
	}
	else if(p == "5")
	{
	cout << "\nHasil " << a << " ^ " << b << " = " << pa << endl;
	}
	return 0;
}
