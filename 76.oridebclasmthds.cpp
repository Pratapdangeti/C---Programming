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
	}

};

int main(){
	Student pratap;
	pratap.introduce();


	return 0;
}