
#include <iostream>
using namespace std;

int modifyValue(int &ref)
{
    ref=20;
}

int main() 
{
    int num=10;
    cout<<"before : "<<num<<endl;
    modifyValue(num);
    cout<<"After : "<<num<<endl;
     
    return 0;
}