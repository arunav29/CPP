//Program to demonstrate use of inline function in class
#include<iostream>

using namespace std;

class ClsInln
{
	int i;

	public:
		void setInitVal();
		//Inline f/n def. using inside the class def.
		void dspl()
		{
			cout<<"I = "<<i<<endl;
		}

};

//Inline f/n using outside class def.
inline void ClsInln::setInitVal()
{
	i = 5;
}

int main()
{
	ClsInln obj;
	obj.setInitVal();
	obj.dspl();
    return 0;
}
