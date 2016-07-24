#include<iostream>

using namespace std;


int main(){
	char input='a';
	switch(input){
		case 'A':
		case 'a':{
			cout<<"excellent"<<endl;
			break;
		}
		case 'B':{
			cout<<"very good"<<endl;
			break;
		}
		case 'C':{
			cout<<"good"<<endl;
			break;
		}
		case 'D':{
			cout<<"not bad"<<endl;
			break;
		}
		default :{
			cout << "don't know your grade"<<endl;
		}

	}
	cout<<"done grading"<<endl;
	return 0;
}