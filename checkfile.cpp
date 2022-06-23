//WAP to take some detail from user and display thet detail infornt of user also save that detail in developer file
#include<iostream>
#include<fstream>
#include<conio.h>
using namespace std;
int main()
{
	string s1,s2,name;
	char email[40],address[20];
	int age,n;
	fstream p;
	p.open("check show file",ios::out);
	cout<<"Enter your full name :";
	getline(cin,name);
	cout<<"Enter your age :";
	cin>>age;
	cout<<"Enter your address :";
	cin>>address;
	cout<<"Enter your email :";
	cin>>email;
	cin.ignore();
	cout<<"Enter your password :";
	getline(cin,s1);
	cout<<"Renter your password :";
	getline(cin,s2);
	if(s1==s2)
	{
		cout<<"what you want to :-"<<endl;
		cout<<"\t\t\t1.submit it\n\t\t\t2.cancle it"<<endl;
		cout<<"enter here :";
		cin>>n;
		//cin.ignore();
		switch(n)
		{
			case 1:
		     cout<<"your detail's is :";
			 cout<<"Submitted!"<<endl;
		     p<<"Your Name is   :"<<name<<endl<<"Your age is  :"<<age<<endl<<"Your address ia  :"<<address<<endl;
	         p<<"Your email is  :"<<email<<endl<<"Your password is   :"<<s1<<endl;
			
			clrscr();
	cout<<"****************************************************"<<endl;
         cout<<"\t\t#$>( \"DEVELOPED BY RAIYAN KHAN\" )<$#"<<endl;
         cout<<"____________________________________________________"<<endl;
         cout<<"____________________________________________________"<<endl;
    cout<<"Your name is  :"<<name<<endl;
	cout<<"Your age is  :"<<age<<endl;
	cout<<"Your address is  :"<<address<<endl;
	cout<<"Your email is :"<<email<<endl;
	cout<<"Your password is :"<<s2<<endl;
			break;
			case 2:
			clrscr();
			cout<<"Sorry,your detail's are cancled!"<<endl;
			p<<"detail's are cancled by user!"<<endl;
			break;
			default :
			break;
		}
	}
	else
	{
		do
		{
			cout<<" ERROR !"<<endl;
			/*cout<<"Enter your full name :";
			getline(cin,name);
			cout<<"Enter your age :";
			cin>>age;
			cout<<"Enter your address :";
			cin>>address;*/
			cout<<"Enter your emil :";
			cin>>email;
			cin.ignore();
			cout<<"Enter your password :";
	        getline(cin,s1);
	        cout<<"Renter your password :";
	        getline(cin,s2);
		}while(s1!=s2);
		cout<<"what you want to :-"<<endl;
		cout<<"\t\t\t1.submit it\n\t\t\t2.cancle it"<<endl;
		cout<<"enter here :";
		cin>>n;
		//cin.ignore();
		switch(n)
		{
			case 1:
		     cout<<"your detail's is :";
			 cout<<"Submitted!"<<endl;
		     p<<"Your Name is   :"<<name<<endl<<"Your age is  :"<<age<<endl<<"Your address ia  :"<<address<<endl;
	         p<<"Your email is  :"<<email<<endl<<"Your password is   :"<<s1<<endl;
			
			clrscr();
	cout<<"****************************************************"<<endl;
         cout<<"\t\t#$>( \"DEVELOPED BY RAIYAN KHAN\" )<$#"<<endl;
         cout<<"____________________________________________________"<<endl;
         cout<<"____________________________________________________"<<endl;
    cout<<"Your name is  :"<<name<<endl;
	cout<<"Your age is  :"<<age<<endl;
	cout<<"Your address is  :"<<address<<endl;
	cout<<"Your email is :"<<email<<endl;
	cout<<"Your password is :"<<s2<<endl;
			break;
			case 2:
			cout<<"Sorry,your detail's are cancled!"<<endl;
			p<<"detail's are cancled by user!"<<endl;
			break;
			default :
			clrscr();
			cout<<"Choosen wrong opt!\n Your cancled now"<<endl;
			break;
		}
		
		/*
		cout<<"your email is :";
		p<<"Your name is  :"<<name<<endl<<"Your age is  :"<<age <<endl<<"Your address is  :"<<address<<endl;
		p<<"Your email is :"<<email<<endl<<"Your password is :"<<s2<<endl;*/
	}
	
	p.close();
	return 0;
}
