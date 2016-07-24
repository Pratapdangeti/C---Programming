#include<iostream>
#include<string>

using namespace std;

struct address{
	int house_no;
	string street_name;
};

struct student{
	string name;
	int rollno;
	address addr;
};

int main(){
	student pratap;
	student *pratapptr;
	pratapptr = &pratap;

	pratapptr -> name = "pratap";
	pratapptr -> rollno = 111;

	// address adr = {65,"neeladri nagar"};
	// pratapptr -> addr = &adr;
	pratapptr -> addr.house_no = 16;
	pratapptr -> addr.street_name = "12th cross";

	cout << pratapptr-> name<<endl;
	cout << pratapptr-> rollno<<endl;
	cout << pratapptr-> addr.house_no<<endl;
	cout << pratapptr-> addr.street_name<<endl;


	return 0;
}