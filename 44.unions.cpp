#include<iostream>

using namespace std;


union emp {
	int id;
	float sal;
}anil,dimple;

int main(){
	emp abhay,pratap;
	abhay.id = 25;
	abhay.sal = 150.4;
	cout<<abhay.id<<endl;
	cout<<abhay.sal<<endl;

	return 0;
}