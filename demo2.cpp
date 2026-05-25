#include<stdio.h>
//class in Cpp
//Class is collection of logically related data member and member function.
class time  
{
    private:
        int hr; //4
        int min; //4
        int sec;//4
    public:
        void printTime()
        {
            printf("\n Time => %d : %d : %d",hr,min,sec);
        }
        void acceptTime() 
        {
            printf("\n Enter time");
            scanf("%d%d%d",&hr,&min,&sec);
        }
        void incrementTimeByOneSec() 
        {
            // lab work
        }
};//end of class time  
int main()
{

    time t1; // when time is class t1=> is called as object of class time
    //Object is the entity, which get space inside memory is called object.
    printf("\n size of t1 object = %d",sizeof(t1));  // 12 bytes
   // t1.acceptTime();
   // t1.hr = 4; //error
   // t1.printTime(); 

    return 0;
}
