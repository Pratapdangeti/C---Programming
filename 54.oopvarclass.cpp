#include<iostream>
#include<string>

using namespace std;

class HumanBeing{
public:
	string name;
	void introduce(){
		cout<<"hi i am "<<name<<endl;
	}

};

int main(){
	HumanBeing pratap;
	pratap.name = "pratap dangeti";
	pratap.introduce();

	HumanBeing bravo;
	bravo.name = "Dwayne bravo";
	bravo.introduce();
	return 0;
}