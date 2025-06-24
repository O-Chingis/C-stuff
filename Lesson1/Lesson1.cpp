#include <iostream>
#include <conio.h>

using std::cout;
using std::cin;
using std::endl;
using std::string;

class puparia{
	int age;
public:
	void set_e(int ageOfObj);
	int get_e();
};
int puparia::get_e(){
	return age;
};
void puparia::set_e(int ageOfObj){
	age = ageOfObj;
};
int main(){
	puparia obj1;
	obj1.set_e(18);
	cout<<obj1.get_e()<<endl;
	system("pause");
return 0;
}