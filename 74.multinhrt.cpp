#include<iostream>
#include<string>


using namespace std;

class Father{
public:
	int height;
	void askFather(){
		cout<<"I am your father, ask me what you want"<<endl;
	}
};


class Mother{
public:
	string skincolor;
	void askMother(){
		cout<<"I am your mother, ask me what you want"<<endl;
	}
};


class Child: public Father, public Mother{
public:
	void askParents(){
		cout<<"I am asking my parents"<<endl;
	}
	void setColorandHeight(string icolor,int iheight){
		skincolor = icolor;
		height = iheight;
	}
	void display(){
		cout<<"height is "<<height<<" skin color is "<<skincolor<<endl;
	}
};


int main(){
	Child pratap;
	pratap.setColorandHeight("red",5);
	pratap.display();
	pratap.askFather();
	pratap.askMother();

	return 0;
}