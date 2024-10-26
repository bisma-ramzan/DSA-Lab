#include<iostream>
using namespace std;
int main()
{
	int S[10],x,n,k;
	
	cout<<"Enter the size of array : ";
	cin>>n;
	
	if( n<=0 || n>=10 )
	{
		cout<<"Invaid Array Size !! "<<endl;
		return 0;
	}
	
	cout<<"Enter the elements of array : \n";
	for(int i=0;i<n;i++ )
	{
		cin>>S[i];
	}
	
	cout<<"Enter the number you want to insert at middle : ";
	cin>>x;
	cout<<"Enter the detination where you want to add the number : ";
	cin>>k;
	
	for(int i=n;i>k;i-- )
	{
		S[i]=S[i-1];
	}
	
	S[k]=x;
	n++;
		
	cout<<"Now the Elements of Array are : ";
	for(int i=0;i<n;i++ )
	{
		cout<<S[i]<<" ";
	}
	
	return 0;
}