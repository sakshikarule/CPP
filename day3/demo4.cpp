#include<iostream>
using namespace std;
//const => basic concept demo

int main()
{
	int num1;
	num1 = 5;

	int num=6;

	const int c = 100;
	// c--; //error // expression must be a modifiable value
	// c=99 // error // expression must be a modifiable value
cout<<"\n const c = "<<c;  //only read the value of const vari

return 0;
}

