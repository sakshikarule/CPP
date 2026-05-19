#include<stdio.h>
//Default Arguments demo
//functions may have arguments with the default values. 
//Passing these arguments while calling a function is optional.


//Default arguments should be given in right to left order
void sum(int a=0,int b=0, int c=0,int d=0)
{
	int r=a+b+c+d;
	printf("\n a=%d b=%d c=%d d=%d => %d",a,b,c,d,r);
}
int main()
{
	// If the user does not supply an explicit argument for a parameter 
    // with a default argument, the default value will be used. 

	sum(1,2,3,4);     // a=1 b=2 c=3 d=4 =>10
    sum(1,2,3);       // a=1 b=2 c=3 d=0  =>6
	sum(1,2);         // a=1,b=2,c=0,d=0  =>3
	sum(1);           // a=1 b=0 c=0 d=0  =>1
	sum();            // a=0 b=0 c=0 d=0  =>0
	return 0;
}


