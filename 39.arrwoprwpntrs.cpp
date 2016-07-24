#include<iostream>

using namespace std;

struct student{
	int rollno;
	char sex;
};

int main(){
	student pratap;
	student *pratapptr;

	pratapptr = &pratap;

	pratap.rollno = 123;
	pratapptr->sex = 'M';
	cout << pratapptr -> rollno << endl;
	cout<< pratap.sex <<endl;

	return 0;
}