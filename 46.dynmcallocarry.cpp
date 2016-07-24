#include<iostream>

using namespace std;

int main(){
	int *pointer = NULL;
	cout<<"how many items u gonna enter"<<endl;
	int input;
	cin>>input;

	pointer = new int[input];
	int temp;
	for(int counter = 0;counter< input;counter++){
		cout<<"enter the item"<<counter+1<<endl;
		cin>>temp;
		*(pointer+counter) = temp;
	}
	cout<<"items you have entered are"<<endl;

	for(int counter = 0;counter< input;counter++){
		cout<<counter+1<<" item is "<<*(pointer+counter)<<endl; 
	}	
	delete []pointer;


	return 0;
}