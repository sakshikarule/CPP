#include<iostream>
using namespace std;
// reference => basic concept demo 
// Reference is alias or another name given to the existing memory location / object.

int main()
{
	int n1;
	n1 = 55;
	cout<<"\n value of n1 = "<<n1<<" address of n1"<<&n1;

	int& ref = n1;
	ref = 60;
	cout<<"\n value of n1 = "<<n1<<" address of n1"<<&n1;
	cout<<"\n value of ref = "<<ref<<" address of ref"<<&ref;

	return 0;

}

