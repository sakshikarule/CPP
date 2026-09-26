// Sturct in cpp
#include<stdio.h>
//we can add the variables as well as the functions in cpp structure.
struct time
{
    //private Data member (for data security)
    private:
        int hr;
        int min;
        int sec;
    //public Member functions
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

}; //end of struct

int main() //
{
    time t1;
    printf("enter End time of our lecture ..");
    t1.acceptTime();
    //  t1.hr = 4; //error  //private Data member not accecible in main()
    t1.printTime(); 
    return 0;
}
