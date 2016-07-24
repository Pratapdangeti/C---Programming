#include<iostream>

using namespace std;

class Animal{
public:
	Animal(){
		cout<<"animal constructor"<<endl;
	}
	int age;
	void walk(){
		cout<<"animal walks"<<endl;
	}
};


class Tiger: virtual public Animal{
public:
	Tiger(){
		cout<<"constructor of tiger"<<endl;
	}

};


class Lion: virtual public Animal{
public:

	Lion(){
		cout<<"constructor of lion"<<endl;
	}
	
};

class Liger: public Tiger,public Lion{
public:

	Liger(){
		cout<<"constructor of liger"<<endl;
	}

};


int main(){
	Liger pratap;
	pratap.walk();
	

	return 0;
}