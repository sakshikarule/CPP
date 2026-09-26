#include<iostream>
using namespace std;
//deep copy

class array
{
	int size;  // No of ele in array
	int* ptr;  // holding adddress of heap memory
	public:
	array(int s)
	{
		this->size = s; //copy size
		this->ptr = new int[this->size]; //allocate memory

		for (int i = 0; i < size; i++) // add data
		{
			ptr[i] = i+45;
		}
	}
	array(array& a1) //copy constructor to create Deep copy
	{
		this->size = a1.size; //copy size
		this->ptr = new int[this->size]; //allocate memory
		
		for (int i = 0; i < size; i++);  //copy data
		{
		   this->ptr[i] = a1.ptr[i];
		}

	}
	void printArray()
	{

       for (int i = 0; i < size; i++)
	   {
	       cout<<"\n ptr["<<i<<"] = "<<ptr[i];
	   }
	 }
	 ~array()
	 {
	    cout<<"\n ----- ~array() ------";
		if(this->ptr != NULL)
		{
		delete []this->ptr;  //deallocate memory
		this->ptr = NULL;
		}
	 }

};

int main()
{
	array a1(5); //stack based obj
	cout<<"\n a1 Array ==>";
	a1.printArray();

	array ac(a1); // stack based obj
	cout<<"\n ac Array ==>";
	ac.printArray();

	return 0;
}


