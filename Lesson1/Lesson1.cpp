#include <iostream>

using std::cout;
using std::cin;
using std::endl;

class CountPlus1 {
	int num; //private part
public: 
	void set_num(int p);
	int get_num();
};

void CountPlus1::set_num(int p){
	num=p+10; 
}
int CountPlus1::get_num(){
	return num;
}

int main(){
	CountPlus1 a, b;
	a.set_num(1);
	b.set_num(91);

	cout<<a.get_num()<<endl;
	cout<<b.get_num()<<endl;

	system("pause");
return 0;
}