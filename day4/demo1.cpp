#include<iostream>
using namespace std;
//static demo

class complex
{
    private:
        int real; //4  // obj level data member
        int imag; //4  // obj level data member
        static int count;  //Static Data member  // class level data member
    public:
    complex(int r=1,int i=1)
    {
        cout<<"\n -----complex()-------";
        this->real=r;
        this->imag=i;
        count++; //increment Static Data member to count No. of objects
    }
    static void printCount() //Static member function
    {
        //this-> not available
        cout<<"\n value of count = "<<count<<"  address of count = "<<&count;
    }
    void printComplexNumber()
    {
        cout<<"\n Complex Number="<<this->real<<"+j"<<this->imag;
    }  
};//end of class

//global definition of static data member (part of syntax in cpp)
int complex::count=0;

int main1()
{
    // use class name and :: to call Static member function "No need of object"
    complex::printCount(); // call to Static member function 
    

//    complex c1(22,33);
//    c1.printCount();
//    cout<<"\n size of c1 obj = "<<sizeof(c1);  //=> 8

//     complex c2(2,3);
//     c2.printCount();

//     complex c3(1,2);
//     c3.printCount();
  
    return 0;
}

int main()
{
    complex c1(1,2);
    complex cc(c1);  //copy constructor called

    complex c5(1,2),c6(3,4);
    c5=c6;  //operator=  (Assignment operator)

}
