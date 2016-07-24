
#include<iostream>

using namespace std;


class Person{
public:
	Person(){
		cout<<"constrctr of person class called"<<endl;
	}
	~Person(){
		cout<<"destrctr of person class called"<<endl;
	}

};


class Student : public Person{
public:
	Student(){
		cout<<"constrctr of student class called"<<endl;
 	}
	~Student(){
		cout<<"destructor of student class called"<<endl;
 	}


};


int main(){
	Student pratap;
	

	return 0;
}   