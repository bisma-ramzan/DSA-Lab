#include<iostream>
using namespace std;
int main()
{
	int S[10],x,n;
	
	cout<<"Enter the size of array : ";
	cin>>n;
	if(n<=0||n>=10)
	{
		cout<<"Invaid Array Size !! "<<endl;
		return 0;
	}
	cout<<"Enter the elements of array : ";
	for(int i=0;i<n;i++)
	{
		cin>>S[i];
	}
	cout<<"Enter the number you want to insert at Start : ";
	cin>>x;
	for(int i=n;i>0;i--)
	{
		S[i]=S[i-1];
	}
	S[0]=x;
	n++;	
	cout<<"Now the Elements of Array are : ";
	for(int i=0;i<n;i++)
	{
		cout<<S[i]<<" ";
	}
	return 0;
}