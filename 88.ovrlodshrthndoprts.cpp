#include<iostream>

using namespace std;


class Marks{
	int mark;
public:
	Marks(){
		mark = 0;
	}
	Marks(int m){
		mark = m;
	}
	void yourMarkPlease(){
		cout<<"your mark is "<<mark<<endl;
	}
	void operator+=(int bonusmark){
		mark = mark+bonusmark;
	}
	friend void operator-=(Marks &currObj,int redmark);
};

void operator-=(Marks &currObj,int redmark){
	currObj.mark -= redmark;
}


int main(){
	Marks pratsmark(46);
	pratsmark.yourMarkPlease();

	int x = 20;

	// x+=pratsmark;

	pratsmark += x;
	pratsmark.yourMarkPlease();

	pratsmark -= x;
	pratsmark.yourMarkPlease();




	return 0;
}