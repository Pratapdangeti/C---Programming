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

class Student: private Person{
public:
	void display(){
		cout<<name<<endl;
	}
	void studentSetName(string iname){
		setName(iname);

	}
};

class GStudent: public Student{
public:
	void setGstudentName(string iname){
		// name = iname;
		studentSetName(iname);
	}

};

int main(){
	GStudent pratap;
	pratap.setGstudentName("pratap d");
	pratap.display();

	return 0;
}