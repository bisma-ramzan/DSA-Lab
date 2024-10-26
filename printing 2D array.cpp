#include<iostream>
using namespace std;
int main()
{
    int size;
	cout<<"Enter the size of array : ";
	cin>>size;

	int **arr=new int*[size];
		
	for(int i=0;i<size;i++)
	{
		arr[i]=new int[size];
	}
	
	for(int i=0;i<size;i++)
	{
		cout<<i+1<<" Row : ";
		for(int j=0;j<size;j++)
		{
			cout<<j+1<<" Column is : ";
		    cin>>arr[i][j];
     	}
	}

	for(int i=0;i<size;i++)
	{
		for(int j=0;j<size;j++)
		{
		cout<<arr[i][j]<<" ";
     	}
     	cout<<endl;
	}

    return 0;
}
