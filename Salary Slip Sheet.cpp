//WAP to take all detail of employee's andvdisplay their detail with Gross salary,Deduction and Net salary.#include<iostream>
#include<conio.h>
using namespace std;
class Salary
{
	private: char a[10],a1[20],a2[10];
	     int b,w,salary,salary2;
	     int D,H,T,DT,N,Ptax,M,total1,total2;
	public:
	void get_detail()
	{
		cout<<"Enter your Fname :";
		cin>>a;
		cout<<"Enter your Mname :";
		cin>>a1;
		cout<<"Enter your Lname :";
		cin>>a2;
		cout<<"Enter your perday wages :";
		cin>>b;
		cout<<"Enter your worked day's :";
		cin>>w;
		salary=b*w;

	    //for gross salary
		D=(salary*17)/100;
		H=(salary*24)/100;
		T=500;
		DT=(T*17)/100;
		total1=D+H+T+DT+salary;
		//for deduction salary!
		N=(salary*10)/100;
		Ptax=200;
		M=500;
		total2=N+Ptax+M;
		
	}
	void p_detail()
	{
		cout<<"\nyour full name is :"<<a<<" "<<a1<<" "<<a2<<endl;
		cout<<"your perday salary Rs. :"<<b<<endl;
		cout<<"your worked day's is :"<<w<<endl;
	
	// gross_salary in salary
		cout<<endl<<"\t\t*~*Gross salary*~*"<<endl;
		cout<<"1.your basic salary is :"<<salary<<endl;
		cout<<"2.your D.A @ 17% is :"<<D<<endl;
		//Dearness Allowance
		cout<<"3.your H.R.A @ 24% is :"<<H<<endl;
		//House Rent Allowance
		cout<<"4.your T.A is :"<<T<<endl;
		//Travel Allowance
		cout<<"5.your D.A on T.A  @ 17% is :"<<DT<<endl;
		//Dearness Allowance on Travel Allowance
		cout<<"TOTAL GROSS SALARY Rs.:"<<total1<<endl;

	// Deduction in salary
		cout<<endl<<"\t\t*~*Diduction in salary*~*"<<endl;
		cout<<"1.your N.P.S @ 10% is :"<<N<<endl;
		cout<<"2.your P.T is :"<<Ptax<<endl;
		//Professional Tax
		cout<<"3.your H.A is :"<<M<<endl;
		//Health Allowance
		cout<<"TOTAL D IN SALARY Rs.:"<<total2<<endl;
		//Deduction
		salary2=total1-total2;
		cout<<"\nTOTAL NET SALARY Rs.:"<<salary2<<endl;
	    
	}  
};
int main()
{
	Salary s[100];
	int i,n;
	cout<<"please enter the number of employee\n";
	cout<<"(max emp=100 and min emp=1)\n";
	cout<<"Enter here :";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cout<<"For Employee "<<i<<endl;
		s[i].get_detail();
	}
	clrscr();
	for(i=1;i<=n;i++)
	{
	cout<<"****************************************************"<<endl;
cout<<"\t\t#$>( \"DEVELOPED BY RAIYAN KHAN\" )<$#"<<endl;
cout<<"____________________________________________________"<<endl;
cout<<"____________________________________________________"<<endl;
	cout<<"For Employee "<<i<<endl;
	s[i].p_detail();
	
	}
	return 0;
}
