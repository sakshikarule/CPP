#include<stdio.h>
//struct in cpp
struct time
{
	//private data member (for data security)
	private:
		int hr;
		int min;
		int sec;
	//public Member funcation
	public:
		void printTime()
		{
			printf("\n Time => %d : %d : %d",hr,min,sec);
		}
		void acceptTime()
		{
			printf("\n Enter time");
			scanf("%d%d%d", &hr,&min,&sec);
		}
		void incrementTimeByOneSec()
		{
			// lab work
		}
};//end of struct time
int main()
{
	time t1; //when time is struct t1=> is called as veri of struct
	t1.acceptTime();
	//t1.hr = 4;//error //private data member not accecible in main()
	t1.printTime();

	return 0;
}


