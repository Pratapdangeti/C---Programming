#include<iostream>

using namespace std;


class Person{
public:
	void introduce(){
		cout<<"hi i am a person"<<endl;
	}
};

class Student: public Person{
public:
	void introduce(){
		cout<<"hi i am a student i am awesome"<<endl;
		Person::introduce();
	}

};

int main(){
	Student pratap;
	pratap.introduce();
	// pratap.Person::introduce();

	return 0;
}