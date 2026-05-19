#include<stdio.h>

class time
{
	private:
		int hr;
		int min;
		int sec;
	public:
		time() //parameterless constructor
		{
			printf("\n --- time() --- ");
			this->hr=0;
			this->min=0;
			this->sec=0;
		}
		time(int h,int m,int s)  //parameterized constructor
		{
			printf("\n --- time(int,int,int) ---");
			this->hr=h;
			this->min=m;
			this->sec=s;
		}
		void initTime()  //oject initization
		{
			this->hr=0;
			min=0;
			this->sec=0;
		}
		void printTime()
        {
            printf("\n Time => %d : %d : %d",this->hr,this->min,this->sec);
        }
		void acceptTime() 
        {
            printf("\n Enter time");
            scanf("%d%d%d",&this->hr,&this->min,&this->sec);
        }
        void incrementTimeByOneSec() 
        {
            sec++;
            if(sec >= 60)
            {
                sec = 0;
                min++;
            }
            if(min >= 60)
            {
                min = 0;
                hr++;
            }
            if(hr >= 24)
                hr = 0;
        }
        
};//end of class time  
int main()
{
    //stack based object
   time t1;
   t1.printTime(); //0:0:0

   time t2;
   t2.printTime(); //0:0:0

   //7:40:44
    time t_p(7,40,44);
    t_p.printTime();

    //9:45:50
    time t_y(9,45,50);
    t_y.printTime();

    return 0;
}






























