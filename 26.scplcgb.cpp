#include<iostream>

using namespace std;

void display();

int x ;

int main()
{
	cout << x <<endl;
	display();
	cout << x+10 <<endl;
	// cout << a << " "<<b<<endl;
	return 0;
}

void display(){

	x = 100;
	cout <<x <<endl;
}