#include<iostream>
#include<string>

using namespace std;

class person{
public:
	string name;
	int age;
	void setName(string iname){name = iname;}
	void setAge(int iage){age = iage;}
};

class student : public person{
public:
	int id;
	void setId(int iid){id = iid;}
	void introduce(){
		cout<<"hi i am "<<name<<" and i am "<<age<<" years old "<<endl<<"and my student id is "<<id<<endl;
	}
};

int main(){
	student pratap;
	pratap.setName("pratap d");
	pratap.setAge(32);
	pratap.setId(123456);
	pratap.introduce();

	return 0;
}