#include<iostream>
using namespace std;

class Operator{
//	friend ostream& operator<<(ostream&,Operator&);
//	friend istream& operator>>(istream&,Operator&);
	
	public:
		long faktorial();
		long Faktorial(int);
	private:
		int n;
		long hasil;
		

};
long Operator::faktorial(){
	long fak=1;
	for(int i=1;i<=n;i++)
	fak=fak*i;
	return fak;
}

long Operator::Faktorial(int n){
	if((n==0) || (n==1))
	return(1);
	
	else return (n*Faktorial(n-1));
}

int main(){
	Operator op;
	op.Faktorial(5);
}
