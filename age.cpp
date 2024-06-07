#include<iostream>
using namespace std;

class Person {
   private:
    int age;
   public:
    Person() {
        cout<<"enter the age=";
	cin>>age;
    }

    Person(int a) {
        age = a;
    }
    int getAge() {
        return age;
    }
};
int main() {
    Person p1, p2(45);
    cout << "Person1 Age = " << p1.getAge() << endl;
    cout << "Person2 Age = " << p2.getAge() << endl;
return 0;
}
