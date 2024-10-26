#include<iostream>
using namespace std;
//lab 3 task 2
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
	
	int EvenN=0, OddN=0;
	for(int i=0;i<N;i++)
	{
		if(Arr[i]%2==0)
		{
			EvenN++;
		}
		else
		{
			OddN++;
		}	
	}
	
	cout<<"The Number of Even Numbers are : "<<EvenN;
	cout<<"\nThe Number of Odd Numbers are : "<<OddN;
	
	delete[] Arr;
	return 0;
}
	