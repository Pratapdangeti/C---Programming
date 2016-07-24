#include<iostream>
#include<string>

using namespace std;

class Person{
public:
	virtual void introduce(){
		cout<<"hey from person"<<endl;
	}
};

class Student: public Person{
public:
	void introduce(){
		cout<<"hey from student"<<endl;
	}
};

class Farmer: public Person{
	// 	void introduce(){
	// 	cout<<"hey from farmer"<<endl;
	// }

};


void whosthis(Person &p){
	p.introduce();
}

int main(){
	Farmer ramrao;
	Student pratap;
	whosthis(ramrao);
	whosthis(pratap);

	return 0;
}