#include<stdio.h>
//printf() => cout  using  <<  (insertion operator)
//scanf() =>  cin   using  >>  (Extraction operator)


#include<iostream>
using namespace std;

int main()
{
	printf("\n Enter your company Name ..");
	cout<<"\n Enter your company Name ..";


	int a=50;
	printf("\n value of a = %d",a);
	cout<<"\n value of a = "<<a;

	int id=205, sal=25000;
    printf("\n emp id = %d  and sal = %d ",sal,id);
    cout<<"\n emp id = "<<id<<"  and sal = "<<sal;

    int age;
    cout<<"\n enter your age : ";
    //scanf("%d",&age);
    cin>>age;
    cout<<"\n value of age = "<<age;

    int x,y;
    cout<<"\n enter x,y : ";
    //scanf("%d%d",&x,&y);
    cin>>x>>y;
    cout<<"\n x = "<<x<<"  and y = "<<y;

    return 0;
}
