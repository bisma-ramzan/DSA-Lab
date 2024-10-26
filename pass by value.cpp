
#include <iostream>
using namespace std;

int x;
void modifyValue()
{
    x=20;
}

int main() 
{
    x=10;
    cout<<"before : "<<x<<endl;
    modifyValue();
    cout<<"After : "<<x<<endl;
     
    return 0;
}