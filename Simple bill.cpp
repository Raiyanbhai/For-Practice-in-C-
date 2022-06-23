#include<iostream>
#include<conio.h>
#include <iomanip>
using namespace std;
class Bill
{
	private:
	string goods[20],p,billno,name,Tamount1;
	float quantity[20],rate[20],total[20],Ramount,Gamount=0,Tamount;
	int i,n;
	time_t t;
	struct tm ta;
	public:
	void getdetail()
	{
		a:
		t=time(NULL);
	    ta=*localtime(&t);
		cout<<"maxmum num is 20 and minum num is 1"<<endl;
		cout<<"Enter number :";
		cin>>n;
		cin.ignore();
		if(n==0||n>=21)
		{
			cout<<"\n\ninvalid number\n Sorry enter again!"<<endl;
			goto a;
		}
		else
		{
			for(i=0;i<n;i++)
			{
			cout<<"Enter goods name :";
			getline(cin,goods[i]);
			//cin>>goods[i];
			cout<<"Enter quantity :";
			cin>>quantity[i];
			cout<<"Enter rate :";
			cin>>rate[i];
			cin.ignore();	
			total[i]=quantity[i]*rate[i];
			Gamount+=total[i];
			}
		}
	}
	void getdetail1()
	{
		cout<<" You have to pay total Rs."<<Gamount<<endl;
		cout<<"Enter Tender Amount :";
		cin>>Tamount;
		cin.ignore();
		cout<<"Enter T.A in word:";
	    getline(cin,Tamount1);
		cout<<"COUSTOMER NAME :";
		getline(cin,name);
		cout<<"BILL NO :";
		getline(cin,billno);
	    cout<<"PAYMENT :";
		getline(cin,p);
	    cout<<"PAN NO :"<<endl;
	}
	void compare()
	{
		if(Tamount>Gamount)
		{
			Ramount=Tamount-Gamount;
		}
		else if(Tamount==Gamount)
		{
			Ramount=0;
		}
		else
		{
			Ramount=Gamount-Tamount;
		}
	}
	void showdetail()
	{
		clrscr();
		cout<<endl<<"\n\t\t\tCentral Bazar pvt.Ltd\n\t\t\tBiratnagar, Morang-7\n\t\t\tPhone :9827xxxxxx\n\t\t\tPAN :605917721\n\t\t\tABBREVIATED TAX INVOICE"<<endl;
		cout<<"COUSTOMER NAME :"<<name<<endl;
		cout<<"BILL NO :"<<billno<<endl;
	    cout<<"PAYMENT :"<<p<<endl;
	    cout<<"PAN NO :"<<endl;
	    cout<<"----------------------------------------------------"<<endl;
	    cout<<"Particular"<<setw(12)<<"Quantity"<<setw(9)<<"Rate"<<setw(9)<<"Amount"<<endl;
	    cout<<"----------------------------------------------------"<<endl;
		for(i=0;i<n;i++)
		{
			cout<<goods[i]<<setw(13)<<quantity[i]<<setw(10)<<rate[i]<<setw(10)<<total[i]<<endl;
		}
		cout<<"----------------------------------------------------"<<endl;
		cout<<setw(30)<<"Gross Amount :"<<Gamount<<endl;
		cout<<"----------------------------------------------------"<<endl;
		cout<<setw(30)<<"Tender Amount :"<<Tamount<<endl;
		if(Tamount>=Gamount)
		{
		cout<<setw(31)<<"Return Amount :"<<Ramount<<endl;
		}
		else
		{
			cout<<setw(30)<<"Extra pay :"<<Ramount<<endl;
		}
		cout<<"----------------------------------------------------"<<endl;
		cout<<"Rs."<<Tamount1<<endl;
		cout<<"----------------------------------------------------"<<endl;
	cout<<"THANK YOU !! PLEASE VISIT AGAIN !!\nEXCHANGE WITHIN 7 DAYS(WITH BILL)\nBETWEEN 10-8pm\n";
	cout<<"**CONDITION APPLY**"<<endl;
	cout<<"----------------------------------------------------"<<endl;
	cout<<"STORE : BIRATNAGAR (TERMINAL 09)"<<endl;
	cout<<"USER : GOMA"<<setw(5)<<ta.tm_hour<<":"<<ta.tm_min<<":"<<ta.tm_sec<<endl<<"PRINT"<<endl;
	cout<<"DATE :"<<ta.tm_mday<<"/"<<ta.tm_mon+1<<"/"<<ta.tm_year+1900<<endl;
	cout<<"TIME :"<<ta.tm_hour<<":"<<ta.tm_min<<":"<<ta.tm_sec<<endl;
	getche();
	}
	
};
int main()
{
	Bill b;
	b.getdetail();
	b.getdetail1();
	b.compare();
	b.showdetail();
return 0;
}
