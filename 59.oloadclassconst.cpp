#include<iostream>
#include<string>

using namespace std;

class Human{
private:
	int age;
	string name;

public:
	Human(){
		cout<<"default constructor"<<endl;
		age = 0;
		name = "noname";
	}
	Human(string iname){
		cout<<"constructor with name as parameter"<<endl;
		age = 0;
		name = iname;		

	}
	Human(int iage){
		cout<<"constructor with age as parameter"<<endl;
		age = iage;
		name = "noname";		

	}

	Human(string iname,int iage){
		cout<<"constructor with age and name as parameter"<<endl;
		age = iage;
		name = iname;		

	}
	void display(){
		cout<<name<<endl<<age<<endl;
	}
	
};


int main(){
	Human pratap;
	pratap.display();

	Human andy("andy kilbane");
	andy.display();

	Human alex("alex",25);

	return 0;
}