#include<iostream>
#include<string>

using namespace std;


class Human{
public:
	string name;

	void introduce(){
		cout<<"hi "<<name<<endl;
	}
};

int main(){
	Human pratap;
	Human *bunty = new Human();

	pratap.name = "pratap dangeti";
	pratap.introduce();


	bunty -> name = "bunty babu";
	bunty -> introduce();

	return 0;
}