// const data member demo
// const member function demo
// mutable data member demo



#include<iostream>
using namespace std;

class constDemo
{
	int n;
	const int c;
	mutable int m;
	public:
	constDemo():c(22)  // constructor member initializer list.
	{

		n=11;
		//c=22; //expression must be a modifiable value
		m=33;
	}
	void printData() const  //not allow to modify state of cuuurnt object
	{
		//n++;
		//c++;
		m++;  //mutable data member are allowed to modify in constant member funcation
		  cout<<"\n value of n = "<<n;
		  cout<<"\n value of c = "<<c;
		  cout<<"\n value of m = "<<m;
	}
};

int man()
{
	constDemo d1;
	d1.printData();
	return 0;
}

