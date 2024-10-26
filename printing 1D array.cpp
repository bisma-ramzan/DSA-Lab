#include<iostream>
using namespace std;
int main()
{
	/*int a[]={1,2,3};
	for(int i=0;i<3;i++)
	{
		cout<<a[i]<<endl;
	}*/
	
	int size;
	cout<<"Enter the size of array : ";
	cin>>size;

	int *arr=new int[size];
		
	for(int i=0;i<size;i++)
	{
		cout<<"Enter element number at "<<i+1<<" : ";
		cin>>arr[i];
	}

    cout<<"Now the elements are :";
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<" ";
	}
	
	delete[]arr;

    return 0;
}
