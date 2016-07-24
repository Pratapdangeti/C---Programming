#include<iostream>
#include<string>

using namespace std;


class Person{
public:
	string name;

	class Address{
	public:
		string country;
		string stname;
		int hno;
	};
	Address addr;
	void AddressPlease(){
		cout<<name<<endl<<addr.country<<endl<<addr.stname<<endl<<addr.hno<<endl;

	}
};

int main(){
	Person pratap;
	pratap.name = "pratap d";
	pratap.addr.country = "india";
	pratap.addr.stname = "gandhi road";
	pratap.addr.hno = 116;

	pratap.AddressPlease();

	return 0;
}