//Without using any loop program will run again by again .
#include<iostream>
using namespace std;
class B;
class A
{
	private:
	int a;
	public:
	void get()
	{
		cout<<endl<<"Enter any number :";
		cin>>a;
	}
	friend int sum(A a,B b);
};
class B
{
	private:
	int b;
	public:
	void get()
	{
		cout<<"Enter any number :";
		cin>>b;
	}
	friend int sum(A a,B b);
};
int sum(A a,B b)
{
cout<<"Your sum is :"<<a.a+b.b;
 
}
int main()
{
	A a;
	B b;
	a.get();
	b.get();
	sum(a,b);
	return 0;
}
