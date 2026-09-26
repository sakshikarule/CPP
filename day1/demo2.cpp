#include<stdio.h>
//inline function => Inline function get replaced by compiler
//at its call statement. It ensures faster execuation of fuction.

// void printMessage();// Function declaration / prototyype / Function signature

inline void printMessage() //Function  Definition 
{
	//function body
	printf("\n Good morning.. :");
}
int main()
{
	printMessage();//Function call
	printMessage();
	printMessage();
	printMessage();
	return 0;
}


