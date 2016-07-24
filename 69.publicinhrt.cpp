#include<iostream>
#include<string>

using namespace std;


class Person{
protected:
	string name;
public:
	void setName(string iname){
		name = iname;
	}
};

class Student: public Person{
public:
	void display(){
		cout<<name<<endl;
	}
};

int main(){
	Student pratap;
	// pratap.name = "prat";
	pratap.setName("pratap d");
	pratap.display();
	return 0;
} 