#include<iostream>

using namespace std;


struct student {
	int rollno;
	char sex;
}ajay,rahul;

int main(){
	student pratap,anil={1111,'m'};
	pratap.rollno = 3333;
	pratap.sex = 'M';
	cout<<pratap.rollno<<endl<<pratap.sex<<endl;
	return 0;
}