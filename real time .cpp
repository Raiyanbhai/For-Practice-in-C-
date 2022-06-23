//WAP to display real date and time of your operating system
#include<iostream>
#include<ctime>
using namespace std;
class A
{
	private:
	time_t t;
	struct tm ta;
	public:
	void show()
	{
	t=time(NULL);
	ta=*localtime(&t);
	cout<<"Date is :"<<ta.tm_mday<<"/"<<ta.tm_mon+1<<"/"<<ta.tm_year+1900<<endl;
	cout<<"Time is :"<<ta.tm_hour<<":"<<ta.tm_min<<":"<<ta.tm_sec<<endl;
	}
	};
int main()
	{
		A a;
		a.show();
		return 0;
	}
