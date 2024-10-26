
#include <iostream>
using namespace std;

void temp(int *x, int *y)
{
    *x=*x+100;
    *y=*y+100;
}

int main() 
{
    int a=10 , b=20;
    temp(&a,&b);
    cout<<"value of a : "<<a<<endl;
    cout<<"value of b : "<<b<<endl;
     
    return 0;
}