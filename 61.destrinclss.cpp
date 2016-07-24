#include<iostream>

using namespace std;


class Human{
public:
	Human(){
		cout<<"constructor called"<<endl;
	}
	~Human(){
		cout<<"destructor called"<<endl;
	}
};

int main(){
	Human *pratap;
	pratap = new Human();
	delete pratap;


	return 0;
}