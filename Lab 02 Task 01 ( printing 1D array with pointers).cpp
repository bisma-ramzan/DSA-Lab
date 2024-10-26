#include<iostream>
using namespace std;
//Lab 2 task 1
int main()
{	
	int A[5]={10,20,30,40,50};

	int *aptr=A;

    cout<<"The elements are : \n";
	for(int i=0;i<5;i++)
	{
		cout<<*(aptr+i)<<" ";
	}

    return 0;
}
