#include<iostream>
#include<string>

using namespace std;
void studenList();

int main(){
	studenList();
	// Student anjali;


	return 0;
}


void studenList(){
	class Student{
	public:
		string name;
		int age;
		void display(){
			cout<<name<<endl<<age<<endl;
		}
	};
	Student pratap;
	pratap.name = "pratap d";
	pratap.age = 32;
	pratap.display();
}