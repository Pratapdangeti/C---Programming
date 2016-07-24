#include<iostream>


using namespace std;

int main(){
	char input;

	do {
		cout << "welcome to learning lad"<<endl;
		cout << "this is where youwill find awesoem video tut"<<endl;
		cout << "enter x to exit any other key to see this msg again"<<endl;
		cin >> input;
	} while(input != 'x');

	return 0;
}