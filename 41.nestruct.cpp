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
	pratap.name = "pratap";
	pratap.rollno = 111;
	pratap.addr.house_no = 13;
	pratap.addr.street_name = "12th cross";

	cout<<pratap.name<<endl;
	cout<<pratap.rollno<<endl;
	cout<<pratap.addr.house_no<<endl;
	cout<<pratap.addr.street_name<<endl;
	return 0;
}