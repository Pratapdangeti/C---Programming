#include<iostream>
#include<string>

using namespace std;

class Person{
public:
	void introduce(){
		cout<<"hey from person"<<endl;
	}
};

class Student: public Person{
public:
	void introduce(){
		cout<<"hey from student"<<endl;
	}
};

void whosthis(Person &p){
	p.introduce();
}

int main(){
	Student pratap;
	pratap.introduce();
	whosthis(pratap);

	return 0;
}