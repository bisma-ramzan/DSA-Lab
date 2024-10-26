#include<iostream>
using namespace std;

struct Point
{
	int x,y;
};

int main()
{
	struct Point P1={0,1};
	
	P1.x=20;
	cout<<" X = "<<P1.x <<"\n Y = "<<P1.y;
	
	return 0;
}