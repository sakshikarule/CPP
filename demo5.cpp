#include<stdio.h>
//struct in C

//Structure is a collection of similar or dissimilar data.
// It is used to bind logically related data into a single unit.

struct time  //declaration of struct time 
{
    int hr;
    int min;
    int sec;
};

void printTime(struct time t1)//call by value
{
    printf("\n Time => %d : %d : %d",t1.hr,t1.min,t1.sec);
}
void acceptTime(struct time *pt1) //call by address
{
    printf("\n Enter time");
    scanf("%d%d%d",&pt1->hr,&pt1->min,&pt1->sec);
}
int main()
{
    struct time t1; // creating vari of time struct
    t1.hr=11;
    t1.min=32;
    t1.sec=34; 
    printTime(t1); //call by value
    acceptTime(&t1);//call by address
    printTime(t1); //call by value

    return 0;
}
