#include<iostream>

using namespace std;

struct student{
	int rollno;
	char sex;
	int age;
};

void display(student s);
void show(student *s);

int main(){
	student pratap = {123,'M',32};	
	show(&pratap);
	cout<<endl;
	display(pratap);
	return 0;
}

void display(student s){
	cout<<s.rollno<<endl;
	cout<<s.sex<<endl;
	cout<<s.age<<endl;
	// s.rollno = 0000;
}

void show(student *s){
	cout<<s->rollno<<endl;
	cout<<s->sex<<endl;
	cout<<s->age<<endl;
	s->rollno= 0000; 
}