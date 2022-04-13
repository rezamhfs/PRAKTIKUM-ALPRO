#include <iostream>

using namespace std;
class urut{
	private:
	int i;
public:
	urut(){
		i =1;
}
void output();
};
void urut::output(){
	while(i<=4){
		cout << i <<endl;
		i++;
	}
}
int main()
{
	urut t;
	t.output();
	return 0;
}
