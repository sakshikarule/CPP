//Friend Function
#include<iostream>
using namespace std;
//friend function is a non member function of a class which designed to access private data of a class 

class MyData
{
private:
	int pin;
	int pass;
public:
	MyData()
	{
		pin=1998;
		pass=2006;
	}
	   void PrintMyAccDetails()
	  {
        cout<<"\npin="<<pin<<"   pass="<<pass;
    }
    friend void anyFunction();//non member function
};//end of class

void anyFunction() //global function
{
	MyData d1;
	d1.pass=9898;  // accessing private data of a MyData class
	d1.pin=9999;   // accessing private data of a MyData class
	d1.PrintMyAccDetails();
}
int main()
{
    anyFunction();
    cout<<"\n";
    return 0;
}
