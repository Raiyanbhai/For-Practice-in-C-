#include<iostream>
using namespace std;
class B;
class A
{
	private :
	float a;
	public:
	void get()
	{
		cout <<"Enter any number :";
		cin>>a;
	}
	friend void sum(A a1,B b1);
};
class B
{
	private :
	float b;
	public :
	void get ()
	{
		cout<<"Enter any number :";
		cin>>b;
	}
	friend void sum(A a1,B b1);
};
void sum(A a1,B b1)
{
	cout<<"Your total sum is :"<<a1.a+b1.b;
}
int main()
{
	A a2;
	B b2;
	a2.get();
	b2.get();
	sum(a2,b2);
return 0;
}
