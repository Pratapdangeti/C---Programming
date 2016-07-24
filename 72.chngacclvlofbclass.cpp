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
	using Person :: name;
	using Person :: setName;

	void display(){
		cout<<name<<endl;
	}
	void studentSetName(string iname){
		setName(iname);
	}
};


int main(){
	Student pratap;
	// pratap.name = "pratap";
	pratap.setName("pratap dd");
	// pratap.setGStudentName("pratap d");
	pratap.display();

	return 0;
}