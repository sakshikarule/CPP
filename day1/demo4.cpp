#include<stdio.h>

//Function Overloding demo
void printValue(int a) //Overloaded funcation
{
	printf("\n int a = %d", a);
}
// Return type is not considered for function overloading
// int printValue(int a) //error
// {
//     printf("\n int a = %d", a);
//     return a;
// }
void printValue(int a,int b)  //Overloded function
{
	printf("\n int a = %d int b = %d", a,b);
}
void printValue(char ch) //Overloded funcation
{
	printf("\n char ch = %c", ch);
}
void printValue(int a, char b) //Overloded function
{
	printf("\n int a = %d char b = %c", a,b);
}
void printValue(char a,int b) //Overloded funcation
{
	printf("\n char a = %c int b = %d", a,b);
}

int main() //caller
	{
    printValue(11);
    printValue(33,44);
    printValue('A');
    printValue(55,'Z');
    printValue('C',70);
    return 0;
}
