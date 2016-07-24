#include<iostream>

using namespace std;

void display(int x, int y, int z = 10){
	cout << "x is "<<x <<endl;
	cout << "y is "<< y <<endl;
	cout << "z is "<< z <<endl;
}
int main(){
	display(20,30);


	return 0;
}