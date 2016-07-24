#include<iostream>
#include<string>

using namespace std;

class Father{
protected:
	int height;
public:
	Father(){
		cout<<"const of father is called"<<endl;
		// height = iheight;
	}
};


class Mother{
protected:
	string skincolor;
public:
	Mother(){
		cout<<"const of mother is called"<<endl;
		// height = iheight;
	}
};


class Child: public Father,public Mother{
public:
	Child(int x, string color) : Father(),Mother() {
		height = x;
		skincolor = color;
		cout<<"child class constructor"<<endl;
	}
	void display(){
		cout<<"height is "<<height<<" skin color is "<<skincolor<<endl;
	}

};


int main(){
	Child pratap(32,"red");
	pratap.display();
	return 0;
}