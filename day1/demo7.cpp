//Two new data types added c++ bool and wchar_t



#include<stdio.h>
int main()
{
    bool b = true; // false 
    printf(" \n value of bool b = %d  and size of bool b = %d ", b,sizeof(b)); 
    //value = 1   size = 1 byte

    wchar_t wch = 'A';
    printf(" \n value of wch = %c  and size of wch = %d ", wch,sizeof(wch)); 
    //value = A   size = 2 byte (on windows OS)
    return 0;
}
