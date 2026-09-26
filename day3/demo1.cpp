#include<stdio.h>
// namespace demo
// used to prevent name conflicts/ collision / ambiguity in large projects
// and Used to group code 

int g= 10;  // global variables
namespace ns1  // syntax => namespace <name of namespace>
{
	int connector = 3307;
	namespace nns
	{
		int val = 100;
	}
}
namespace ns2
{
	int connector = 1270;
	int num1 = 11;
	int num2 = 22;
	int num3 = 33;
	int num4 = 44;
	int num5 = 55;
	int num6 = 66;
}
int main()
{
	printf("\n value of g = %d", g); //10
	printf("\n value of g = %d", ::g); //10  //to access global variable

	printf("\n  connector = %d",ns1::connector);
	printf("\n ns1::nns::val = %d",ns1::nns::val);

    printf("\n value of ns2::num1 = %d",ns2::num1);
	//printf("\n value of ns2::num1 = %d", num1); //error

	using namespace ns2; // when we need access members of namespace frequently
	//all the member of n2 is available after line 36
 	printf("\n value of ns2::num1 = %d",num1);
    printf("\n value of ns2::num1 = %d",num2);
    printf("\n value of ns2::num1 = %d",num3);
    printf("\n value of ns2::num1 = %d",num4);
    printf("\n value of ns2::num1 = %d",num5);
	printf("\n value of ns2::num1 = %d",num6);

	
    

	return 0;

}

