#include<iostream>
#include<string>

using namespace std;

class Human{
public:
	string name;
	void introduce ();

};

void Human::introduce(){
	cout<<Human::name<<endl;
}


int main(){
	Human pratap;
	pratap.name = "Pratap Dangeti";
	pratap.introduce();

	return 0;
}