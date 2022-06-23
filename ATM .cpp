#include <iostream>
#include <iomanip>
#include<conio.h>
using namespace std;
class Atm
{
	private:
	string name,email,password,password1,pin,pin1,yes,n="n",y="y";
	float money;
	public:
	void getname()
	{
		cout<<"Enter your full name :";
		getline(cin,name);
		m:
		cout<<"Create your email ";
		getline(cin,email);
		cout<<"Craete your password :";
		getline(cin,password);
		cout<<"Renter your password :";
		getline(cin,password1);
		if(password==password1)
		{
			
		}
		else
		{
		cout<<"Invalid email or password"<<endl;
		cout<<"Recreate your email or password"<<endl;
		goto m;
		}
		clrscr();
		cout<<setw(30)<<"\n\t\t\t#<fill this form to create your card>#\n"<<endl;
		n:
		cout<<"create your tranection pin :";
		getline(cin,pin);
		cout<<"Congorm it :";
		getline(cin,pin1);
		if(pin==pin1)
		{
		y:
		cout<<"You are sure to create card"<<endl;
		cout<<"Then type 'y'for yes and 'n'for no"<<endl;
		cout<<"Type here :";
		cin>>yes;
		if(yes==y)
		{
		clrscr();
		cout<<"\n\n\t\t\tsuccessful to create card"<<endl;
		}
		else if(yes==n)
		{
		cout<<"your filled form was damage!"<<endl;
		}
		else
		{
		cout<<endl<<"Invalid typed!"<<endl;
		goto y;
		}
		}
		else
		{
		cout<<"Invalid pin"<<endl;
		cout<<"Recreate your pin"<<endl;
		goto n;	
		}
	}
	void create()
	{
	    if (yes==y)
	     {
	  	 cout<<"\n Enter money to save in your acount at first";
	  	 cin>>money;
	  	
	    }
	  }
};
int main()
{
	Atm a;
	a.getname();
	a.create();
return 0;
}
