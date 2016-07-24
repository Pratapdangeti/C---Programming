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
	Marks operator++(int){
		Marks duplicate(*this);
		mark += 1;
		return duplicate;
	}
	friend Marks operator--(Marks&,int);
};
	
 Marks operator--(Marks &m,int){
 		Marks duplicate(m);
		m.mark -= 1;
		return duplicate;

 }

int main(){
	Marks pratap(66);
	pratap.yourMarkPlease();

	(pratap--).yourMarkPlease();
	pratap.yourMarkPlease();





	return 0;
}




