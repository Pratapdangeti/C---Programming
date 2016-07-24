#include<iostream>
#include<string>

using namespace std;

void display();
void display(string);


int main(){
	display();
	display("pratap");

	return 0;
}

void display(){
	cout<<"Hi whats up"<<endl;
}

void display(string name){
	cout<<"hi whats up "<<name<<endl;

}