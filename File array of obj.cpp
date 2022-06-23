#include<iostream>
#include<fstream>
using namespace std;
//class Op 
int main()
{
	int age;
	char name[30],address[30],a[30]=" your name is ",b[30]=" and address is ",c[30]=" your age is ";
	fstream p;
    p.open("student.txt",ios::out);
    cout<<"Enter your name :";
	  cin>>name;
	  cout<<"Enter your address :";
	  cin>>address;
	  cout<<"Enter your age :";
	  cin>>age;
	for(int i=0;i<=3;i++)
     { 
	  cout<<"Enter your friend  name :";
	  cin>>name;
	  cout<<"Enter your friend address :";
	  cin>>address;
	  cout<<"Enter your friend age :";
	  cin>>age;
	  p<<i<<a<<name<<b<<address<<c<<age<<endl;
	  }
	cout<<"success";
	p.close();
	 return 0;
}
