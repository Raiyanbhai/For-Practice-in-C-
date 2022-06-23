#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int n,i;
	float *p=0,sum=0,avg;
	cout<<" Enter how many student are there :";
	cin>>n;
	
	p=new float[n];
	for(i=0;i<n;i++)
	{
		cout<<" Enter mark of that student"<<setw(2)<<i+1<<":";
		cin>>*(p+i);
		sum+=*(p+i);
	}
	cout<<"Total mark of student is :"<<sum<<endl;
	avg=sum/n;
	cout<<endl<<"Average of student ";
	for(i=0;i<n;i++)
	cout<<setw(4)<<*(p+i);
	cout<<" is "<<avg;
	delete[]p;
return 0;
}
