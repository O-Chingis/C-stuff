#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::string;

class Puparia {
    int age;  
public:
    void set_e(int Age);
    int get_e() { 
        return age; 
    }
};

void Puparia::set_e(int Age) {
    age = Age;
}

int main() {
    Puparia obj1;
    obj1.set_e(18);

    cout << "Возраст: " << obj1.get_e() << endl;

    cin.get();
    return 0;
}
