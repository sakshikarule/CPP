#include<stdio.h>
//Size of an object of a empty class is 1 byte.

class empty
{

};

int main()
{
	empty e1;
	empty e2;
	printf("\n size of empty class e1 object =%ld",sizeof(1));
	printf("\n size of empty class e1 object =%ld",sizeof(2));
	return 0;
}


