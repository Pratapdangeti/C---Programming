#include<iostream>

using namespace std;

class Person{
public:
	virtual void introduce(){
		cout<<"hi from person"<<endl;
	}

};

class Student : public Person{

public:
		void introduce(){
		cout<<"hi from student"<<endl;
	}

};

class GStudent: public Student{
	public:
	// 	void introduce(){
	// 	cout<<"hi from graduated student"<<endl;
	// }
};

void whoIsThis(Person &p){
	p.introduce();

}

int main(){
	Person ramrao;
	Student pratap;
	GStudent sandeep;

	whoIsThis(ramrao);
	whoIsThis(pratap);
	whoIsThis(sandeep);


	return 0;
}