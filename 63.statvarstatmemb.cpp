#include<iostream>

using namespace std;
// void display();

class Human{
public:
	static int human_count;
	Human(){
		human_count++;
	}

	void humanTotal(){
		cout<<"There are "<<human_count<<" peoples are in this prog"<<endl;
	}

};

int Human::human_count = 0;
int main(){
	cout<<Human::human_count<<endl;
	Human pratap;
	Human anjali;
	Human salman;
	Human sharukh;


	pratap.humanTotal();

	cout<<Human::human_count<<endl;

	// display();
	// display();
	// display();


	return 0;
}

// void display(){
// 	static int counter =0;
// 	cout<<"dispaly function called "<<++counter<<" times"<<endl;
// }