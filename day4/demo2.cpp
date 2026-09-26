#include<iostream>
using namespace std;
//singleton class
// In singleton  pattern  we restricts the instantiation of a class to one "single" object.

class singleton
{
	private:
		static singleton* ptr;
		singleton()  // private constructor we cant create  obj in main()
		{
			cout<<"\n -------singleton()-------";
		}
	public:
		public:
    // getObject() is creating object is not present in memory and return address object
    // if object is present in memory getObject() is return address of that already created object
        static singleton* getObject()
        {
            if(ptr == NULL)
                 ptr = new singleton();  //creating object is not present in memory
            return ptr;
        }
        void print()
        {
            cout<<"\n ----- print() -----";
        }
};
//global definition of static data member (part of syntax in cpp)
singleton* singleton::ptr = NULL;


int main()
{
    //singleton st1;  error => boz of private Constructor we cant create obj
    singleton* obj_addr = singleton::getObject();
    obj_addr->print();
    cout<<"\n address of object = "<<obj_addr;

    singleton* obj_addr1 = singleton::getObject();
    cout<<"\n address of obj_addr1 = "<<obj_addr1;

    singleton* obj_addr2 = singleton::getObject();
    cout<<"\n address of obj_addr2 = "<<obj_addr2;


    singleton* obj_addr3 = singleton::getObject();
    cout<<"\n address of obj_addr3 = "<<obj_addr3;


    return 0;
}
