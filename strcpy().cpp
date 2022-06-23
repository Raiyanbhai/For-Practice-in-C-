#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char a[20], b[20],c[20];
    cout<<"enter num :";
	cin>>a;
	strcpy(b,a);
	strcpy(c,b);
	cout<<"1 st num is :"<<a<<endl;
	cout<<"copied num is :"<<b<<endl;
	cout<<"3rd copied num is :"<<c<<endl;
	return 0;
}//char* strcpy(char* __dst, const char* __src);
