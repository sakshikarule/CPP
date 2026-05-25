#include<stdio.h>

class time
{
	private:
		int hr;
		int min;
		int sec;
	public:
		//     time() //Parameterless constructor
    //     {
    //         printf("\n ---  time() ---");
    //         this->hr=0;
    //         min=0;
    //         this->sec=0;
    //     }
      time(int h=0,int m=0,int s=0) //Parameterized constructor
	  {
		  printf("\n ---- time(int,int,int)---")
		  this->hr=h;
		  this->min=m;
		  this->sec=s;
	  }
	  void initTime()
	  {
		  this->hr=0;
		  min=0;
		  this->sec=s;
	  }
	  void printfTime()
	  {
		  printf("\n Enter time");
		  scanf("%d%d%d",&this->hr,&this->min,&this->sec);
	  }
	  void acceptTime()
	  {
		  printf("\n Enter time");
		  scanf("%d%d%d",&this->hr,&this->min,&this->sec);
	  }
	  void incrementTimByOneSec()
	  {

		  sec++;
		  if(sec >= 60)
		  {
			  sec= 0;
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

	  ~time()  //Destructor=> is used to release the resources.
	  {
		  //free() /fclose()
		  printf("\n ------~time() -------");
	  }
};//end of class time
int main()
{
	//stack based object
	time t1;
	t1.printTime();

	time t2;
	t2.printTime();

	time t_p(7,40,44);
	t_p.printf();

	//9:45:50
	time t_y(9,45,50);
	t_y.printTime();

	return 0;
}

