//Program to demonstrate the use of array of objects

#include<iostream>
#define MAX 5
using namespace std;

class ArObj
{
	int i;

	public:
		void in(int);
		void out(int);
}A[MAX]; //Array of Objects (Global)

void ArObj :: in(int x)
{
	cout<<"\nENTER ELEMENT I OF OBJECT "<<x+1<<" OF ARRAY : ";
	cin>>A[x].i;
}

void ArObj :: out(int x)
{
	cout<<"\nELEMENT I OF OBJECT "<<x+1<<" OF ARRAY = ";
	cout<<A[x].i;
}

int main()
{
	for(int i=0; i<MAX; i++)
		A[i].in(i);
	for(int i=0; i<MAX; i++)
		A[i].out(i);
    return 0;
}
