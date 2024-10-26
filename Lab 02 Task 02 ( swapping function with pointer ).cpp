#include<iostream>
using namespace std;
//lab 2 task 2
void swap( int *a, int *b)
{	
    int temp=*a;
	*a=*b;
    *b=temp;   
}

int main()
{
	int n1=100;
	int n2=200;
	
	cout<<"The numbers before swapping are  \n";
	cout<<"1st number : "<<n1<<"\n2nd number : "<<n2;
	swap(&n1, &n2);
	cout<<"\n\nThe numbers After swapping are  \n";
	cout<<"1st number : "<<n1<<"\n2nd number : "<<n2;
	
	return 0;
}
