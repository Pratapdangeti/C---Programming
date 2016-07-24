#include<iostream>
#include<string>

using namespace std;

class Human{
private:
	string name;
	int age;
public:
	Human(){
		name = "no name";
		age = 0;
		cout<<"Constructor is called when u cret n obj of human"<<endl;
	}
	void display(){
		cout<<name<<endl<<age<<endl;
	}

};

int main(){
	Human pratap;

	pratap.display();

	return 0;
}