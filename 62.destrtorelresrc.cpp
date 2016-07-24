#include<iostream>
#include<string>

using namespace std;

class Human{
private:
	string *name;
	int *age;
public:
	Human(string iname,int iage){
		name = new string;
		age = new int;
		*name = iname;
		*age = iage;
	}
	void display(){
		cout<<"hi i am "<<*name<<" and i am "<<*age<<" years old"<<endl;
	}
	~Human(){
		delete name;
		delete age;
		cout<<"all memories are released"<<endl;
	}
};

int main(){
	Human *pratap = new Human("pratap d",32);
	pratap->display();
	delete pratap;

	return 0;
}
