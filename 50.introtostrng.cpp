#include<iostream>
#include<string>


using namespace std;

int main(){
	string name = "pratap";
	string lastname = "dangeti";
	string fullname;
	fullname = name + " "+lastname;

	if (name == "pratap")
		cout<< "name matched"<<endl;
	else
		cout<<"name mismatched"<<endl;

	// cout<< name<<" "<<lastname<<endl<<fullname<<endl;

	return 0;
}