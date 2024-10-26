#include<iostream>
using namespace std;
//lab 3 task 1
int main()
{
	int N;
	cout<<"Enter the number of elements : ";
	cin>>N;
	
	if(N<=0)
	{
		cout<<"The number of elements should be greater than 0. \n";
		return 0;
	}
	
	int *Arr=new int [N];
	
	cout<<"Enter the elements  \n";
	for(int i=0;i<N;i++)
	{
		cin>>Arr[i];
	}
		
	int Max=Arr[0];
	int Min=Arr[0];
	
	for(int i=0;i<N;i++)
	{
		if (Arr[i]>Max)
		{
			Max=Arr[i];
		}
		if (Arr[i]<Min)
		{
			Min=Arr[i];
		}
	}
	
	cout<<"The Maximum Value is : "<<Max;
	cout<<"\nThe Minimum Value is : "<<Min;
	
	delete[] Arr;
	return 0;
}