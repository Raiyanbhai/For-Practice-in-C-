#include <iostream>
#include <conio.h>
using namespace std;
class Bank
{
         private:
	     char a1[20],a2[20],a3[20],a4[20],
	              a5[20],a6[20]="NO",a7[20];
	      int pow,pow2;
	       string name1;
	       string name2;
          public:
	      void getdetail()
          {
	      clrscr();
		  cout<<"\t\t\t\"WECOME TO IN MY PUBLIC BANK\""<<endl;
		  cout<<"*Please fill this form to open your saving account in the PUBLIC BANK *\n"<<endl;
		  cout<<"Enter your first name :";
		  cin>>a1;
		  cout<<"Enter your mid name :";
		  cin>>a2;
		  cout<<"Enter your last name :";
		  cin>>a3;
		  cout<<"\n*write full name without any space*"<<endl;
	 	  cout<<"Enter your father name :";
	      //getline(cin,name1);
		  cin>>a4;
	      // cin.ignore();
		  cout<<"Enter your mother name:";
	     //getline(cin,name2);
	     // cin.ignore();
	 	 cin>>a5;
		 cout<<"Relation(in optional):-"<<endl;
		 cout<<"\t\t\t\t1.married\n\t\t\t\t2.unmarried"<<endl;
		 cout<<"Enter here :";
		 cin>>pow;
		 switch(pow)
		 {
		 case 1:
	     cout<<"Enter your gender :";
		 cin>>a6;
		 break;
		 case 2:
		 cout<<a6<<endl;
	     break;
		 default:
	     cout<<"It means you have no marital status!"<<endl;
		 break;
		 }
		 cout<<"check:-\n\t\t1.Next\n\t\t2.Renter detail's"<<endl;
		 cout<<"Enter here:";
		 cin>>pow;
		 if(pow==pow)
		 {
		 do
		 {
		 cout<<"Conform it :";
		 cin>>pow;
		 }while(pow>2||pow==0);
		 }
		 else
	 	 {
		 do
		 {
	     cout<<"you have done some mistake please recheck it!"<<endl;
		 cout<<"check:-\n\t\t1.Next\n\t\t2.Renter detail's"<<endl;
		 cout<<"Enter here:";
		 cin>>pow2;
		 cout<<"Renter here:";
		 cin>>pow;
		 }while(a1==0||pow>2);
		 }
		 switch(pow)
		 {
		 case 1:
	     break;
	     case 2:
	     cout<<"Enter your first name :";
		 cin>>a1;
		 cout<<"Enter your mid name :";
		 cin>>a2;
		 cout<<"Enter your last name :";
		 cin>>a3;
		 cout<<"\n*write full name without any space*"<<endl;
		 cout<<"Enter your father full name :";
		 //getline(cin,name1);
		 cin>>a4;
		 cout<<"Enter your mother full name:";
		 //getline(cin,name2);
		 cin>>a5;
	 	 cout<<"Relation(in optional):-"<<endl;
		 cout<<"\t\t\t\t1.married\n\t\t\t\t2.unmarried"<<endl;
		 cout<<"Enter here :";
		 cin>>pow;
		 switch(pow)
		 {
		 case 1:
		 cout<<"Enter your (husband/wife)name :";
		 cin>>a6;
		 break;
		 case 2:
		 break;
		 default:
		 cout<<"It means you have no marital status!"<<endl;
		 break;
		 }
		 break;
	     default:
	     cout<<"Some error is rise!"<<endl;
		 break;
	 	 }
		 cout<<"Enter your (home/town) :";
		 cin>>a7;		
         }
	     void show()//show function
	     {
	   	 clrscr();
	     cout<<"****************************************************"<<endl;
         cout<<"\t\t#$>( \"DEVELOPED BY RAIYAN KHAN\" )<$#"<<endl;
         cout<<"____________________________________________________"<<endl;
         cout<<"____________________________________________________"<<endl;
	     cout<<"your name is :"<<a1 <<a2 <<a3 <<endl;
	     cout<<"your father name is :"<<a4<<endl;
	     cout<<"your mother name is :"<<a5<<endl;
	     cout<<"your (husband/wife) name is :"<<a6<<endl;
		 cout<<"your home town is :"<<a7<<endl;
		 }
	     //friend class Costumer;
         };
class Costumer: public Bank
          {
	      private: 
	      int d,d2;
	      char t1[9]="Nepal",t2[9]="India",t3[10]="Pakishtan",t4[9]="chaina",t5[9]="Japan",t6[9]="America",t7[9]="Saudi",t8[9]="Qutar",t9[13]="Bangaladesh",t10[9]="Bhutan";
	     char c1[30],c2[20];
	     int pow1,pow2;
	     public:
	     void getdetail2()
	     {
		 cout<<"country name's:-"<<endl;
		 cout<<"\t\t\t1.Nepal\n\t\t\t2.India\n\t\t\t3.Pakishtan\n\t\t\t4.chaina\n\t\t\t5.Japan\n\t\t\t6.America\n\t\t\t7.Saudi\n\t\t\t8.Qutar\n\t\t\t9.Bangaladesh\n\t\t\t10.Bhutan"<<endl;
		 cout<<"Choose your country :";
		 cin>>d;
         if(d==d)
         {
         do
         {
         cout<<"Conform your country :";
         cin>>d;
         }while(d>10||d==0);
         }
         else
         {
		 do
		 {
		 cout<<"\n\nNot available in this country"<<endl;
		 cout<<"Conform >:"<<endl;
		 cout<<"Choose your country :";
		 cin>>d;
		 }while(d>10||d==0);//(d!=d2);
	     }		
	     }
	    void getdetail3()
	    {
		cout<<"Enter your (mob.no/tel.no) :"; 
		cin>>c2;
		cout<<"Enter your email :";
		cin>>c1;
		cout<<endl<<"NOTE:-"<<endl;
		cout<<"\t\t1.Make your password strong"<<endl;
		cout<<"\t\t2.Your password must be contain at least six number"<<endl;
		cout<<"\t\t3.Your password should be only combination of integer number"<<endl;
		cout<<"\t\t4.Make your password same either your password gone to wrong!"<<endl;
		cout<<"\t\t5.Don't share your password with any one\n"<<endl;
		cout<<"Enter your password :";
		cin>>pow1;
		cout<<"Renter your password :";
		cin>>pow2;
		if (pow1==pow2)
		{
		cout<<"email or password is right"<<endl;
		}
		else
		{
		do
		{
		cout<<"Your email or password is wrong!\n"<<endl;
		cout<<"Enter your email :";
		cin>>c1;
		cout<<"Enter your password :";
		cin>>pow1;
		cout<<"Renter your password :";
		cin>>pow2;
		}
		while(pow1!=pow2);
		cout<<"email or password is right"<<endl;
		}
		cout<<"Success"<<endl;
	    }
	    void show1()
	    {
	    //void show();
	    switch(d)
	    {
		case 1:
		cout<<"your country name is :"<<t1<<endl;
		break;
		case 2:
		cout<<"your country name is :"<<t2<<endl;
		break;
		case 3:
		cout<<"your country name is :"<<t3<<endl;
		break;
		case 4:
		cout<<"your country name is :"<<t4<<endl;
		break;
		case 5:
		cout<<"your country name is :"<<t5<<endl;
		break;
		case 6:
		cout<<"your country name is :"<<t6<<endl;
		break;
		case 7:
		cout<<"your country name is :"<<t7<<endl;
		break;
		case 8:
		cout<<"your country name is :"<<t8<<endl;
		break;
		case 9:
		cout<<"your country name is :"<<t9<<endl;
		break;
		case 10:
		cout<<"your country name is :"<<t10<<endl;
		break;
		default:
		cout<<"Not available in this country"<<endl;
		break;
	    }		
	    cout<<"Your (phone/tel)no is :"<<c2<<endl;
	    cout<<"your email AC is :"<<c1<<endl;
	    cout<<"your password is :"<<pow1<<endl;
	    }
        };
class Account:public Costumer 
         {
	      private:
	      float p,r=3,i,i2,m1,j;
	      int t;
	      public:
	      void getaccount()
	      {
		  cout<<"Enter how much money you want to save at first :";
		  cin>>p;
		  cout<<"you will get 3% intrest of Rs."<<p<<" in per month from Bank"<<endl;	
		  cout<<"Enter your time period to save your money in your account:-"<<endl;
		  cout<<"\t\t1.for one year\n\t\t2.for two year\n\t\t3.for three year";
		  cout<<"\n\t\t4.for one month\n\t\t5.for two month\n\t\t6.for three month"<<endl;
		  cout<<"Select any one opt :";
		  cin>>t;
		  cout<<endl<<"\n\n\n\n";
	      }
	      void display()
	      {
		  //void show1();
		  switch(t)
		  {
		  case 1:
	      i=(p*12*r)/100;
		  cout<<"your saving money is Rs."<<p<<endl;
		  cout<<"your total intrest for one year is Rs."<<i<<endl;
		  cout<<"you will get total money after 1y is :"<<p+i<<endl;
		  break;
		  case 2:
		  i=(p*12*r)/100;
		  p=i+p;
		  cout<<"p rs."<<p<<endl;
		  i2=(p*12*r)/100;
		  cout<<"your 2y p+i is Rs."<<p<<endl;
		  cout<<"your total intrest for two year is Rs."<<i2<<endl;
		  cout<<"you will get total money after 2y is :"<<p+i2<<endl;
		  break;
		  case 3:
		  i=(p*12*r)/100;
		  p=i+p;
		  cout<<"your 1y p+i is Rs."<<p<<endl;
		  i2=(p*12*r)/100;
		  p=i2+p;
		  cout<<"your 2y p+i is Rs."<<p<<endl;
		  i2=(p*12*r)/100;
		  cout<<"your total intrest for three year is Rs."<<i2<<endl;
		  cout<<"you will get total money after 3y is :"<<p+i2<<endl;
		  break;
		  case 4:
		  i=(p*12*r)/100;
		  m1=i/12;
		  cout<<"your saving money is Rs."<<p<<endl;
		  cout<<"your total intrest for one month is Rs."<<m1<<endl;
		  break;
		  case 5:
		  i=(p*12*r)/100;
		  m1=i/12;
		  m1=m1*2;
		  cout<<"your saving money is Rs."<<p<<endl;
		  cout<<"your total intrest for two month is Rs."<<m1<<endl;
		  break;
		  case 6:
		  i=(p*12*r)/100;
		  m1=i/12;
		  m1=m1*3;
		  cout<<"your saving money is Rs."<<p<<endl;
		  cout<<"your total intrest for three month is Rs."<<m1<<endl;
		  break;
		  default:
		  cout<<"Sorry! this period is not available for now"<<endl;
		  break;
		 }
	     }      
         };
class Check:public Account
        {
        private:
	    int a,b,c;
        public:
	    void checkfun()
	    {
		cout<<"\nFinal check:-"<<endl;
		cout<<"\t\t\t1.Submit\n\t\t\t2.Reset\n\t\t\t3.Cancale"<<endl;
		cout<<"Emter here :";
		cin>>a;
		if(a==a)
		{
		do
		{
		cout<<"Conform it :";
		cin>>a;
		}while(a>3||a==0);
		}
		else
		{
		do
		{
		cout<<"ERROR!"<<endl;		
		cout<<"\nFinal check:-"<<endl;
		cout<<"\t\t\t1.Submit\n\t\t\t2.Reset\n\t\t\t3.Cancale"<<endl;
		cout<<"Renter here :";
		cin>>a;
		}while(a>3||a==0);
		}
		switch(a)
		{
		case 1:
        show();
	    show1();
	    display();
	    break;
		case 2:
	    getdetail();
	    getdetail2();
	    getdetail3();
	    getaccount();
		show();
	    show1();
	    display();
	    break;
	    case 3:
		cout<<"your all form is canceled!"<<endl;
		break;
		default:
	    cout<<"still error! are rise"<<endl;
	    break;
		}
	}
};
int main()
{
	int d;
	Bank b;
	Costumer c;
	Account a;
	Check c1;
	b.getdetail();
	c.getdetail2();
	c.getdetail3();
	a.getaccount();
	b.show();
	c.show1();
	a.display();
	//c1.checkfun();
	return 0;
}
/*
cout<<"****************************************************"<<endl;
cout<<"\t\t#$>( \"DEVELOPED BY RAIYAN KHAN\" )<$#"<<endl;
cout<<"____________________________________________________"<<endl;
cout<<"____________________________________________________"<<endl;
*/
