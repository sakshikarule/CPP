#include<stdio.h>
//class in Cpp

// If we call member function on object then compiler implicitly 
// pass address of that object as a argument to the function implicitly.
// To store address of object compiler implicitly declare
// one pointer as a parameter inside member function. 
// Such parameter is called this pointer.

class time
{
	private:
		int hr;
		int min;
		int sec;
	public:
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
	//stack based oject
	time t1;
	t1.acceptTime();
	t1.printTime();



	time t2;
	t2.acceptTime();
	t2.printTime();


	return 0;
}

