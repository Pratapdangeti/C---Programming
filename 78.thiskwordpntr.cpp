#include<iostream>

using namespace std;

class Person{
private:
	int age;
public:
	void setAge(int age){
		this->age = age;
	}
	void showAge(){
		cout<<"age is "<<this->age<<endl;
		// this->showAge();
	}
};

int main(){
	Person pratap;
	pratap.setAge(32);
	pratap.showAge();

	return 0;
}