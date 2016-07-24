#include<iostream>

using namespace std;


void display(const int *start,const int *end);

int main(){
	int numbers[] = {22,55,66,44,22,55,88,77,99};
	display(numbers+3,numbers+9);
	return 0;
}

void display(const int *start,const int *end){
	const int *ptr;
	for(ptr = start;ptr!=end;ptr++){
		cout<<*ptr<<endl;
	}

}