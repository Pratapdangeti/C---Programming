#include<iostream>
#include<string>

using namespace std;

class person{
protected:
	string name;
public:
	void setName(string iname){
		name = iname;
	}
};
class student: public person{
public:
	void display(){
		cout<<name<<endl;
	}
};

int main(){
	// person pratap;
	// pratap.name = "pratap";
	student pratap;
	pratap.setName("pratap d");
	pratap.display();



	return 0;
}
