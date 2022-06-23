//Pointer to derived class with use of array
#include<iostream>
using namespace std;
class Calculate
{
	protected :int a,b;
	public:void get()
	{
		cout<<"Enter any two num:";
		cin>>a>>b;
	}
	void sum1()
	{
		cout<<"1st is :"<<a<<endl;
		cout<<"2nd is :"<<b<<endl;
	}
};
class Sum:public Calculate 
{
	public:void get()
	{
		cout<<"Enter any two num:";
		cin>>a>>b;
	}
	void sum()
	{
		cout<<"Your sum is :"<<a+b<<endl;
	}
};
class Subtract:public Calculate
{
	public:void get()
	{
		cout<<"Enter any two num:";
		cin>>a>>b;
	}
	void subtract()
	{
		cout<<"Your Subtract  is :"<<a-b<<endl;
	}
};
int main()
{
	Calculate *c;
	Sum s;
	Subtract st;
	c=&s;
	c=&st;
	//c->get();
	//c->sum1();
	s.get();
	st.get();
	s.sum();
	st.subtract();
	return 0;
	
}
