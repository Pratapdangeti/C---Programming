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

	void operator++(){
		mark+=1;
	}
	friend void operator--(Marks&);

};

void operator--(Marks &m){
	m.mark-=1;
}



int main(){

	Marks pratsmark(46);
	pratsmark.yourMarkPlease();

	++pratsmark;
	pratsmark.yourMarkPlease();

	--pratsmark;
	pratsmark.yourMarkPlease();

	return 0;
}