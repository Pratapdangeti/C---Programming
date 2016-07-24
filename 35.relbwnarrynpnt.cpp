#include<iostream>

using namespace std;


int main(){
	int number[5]={29,55,44,88,99};
	cout<<number[0]<<endl;
	cout<<*number<<endl;
	cout<<number[2]<<endl;
	cout<<*(number+2)<<endl;

	return 0;
}