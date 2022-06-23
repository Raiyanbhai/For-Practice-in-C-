#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
int main()
{
	int n;
	char password1[10],password2[10]="raiyan",p[10];
	string name[20],ID1,ID;
	cout<<"make youe ID :";
	cin>>ID;
	Re:
	cout<<"create your password :";
	cin>>password1;
	cout<<"Renter your password :";
	cin>>password2;
	if(password1==password2)
	{
	cout<<"best of luck!"<<endl;
	}
	else
    {
    ch:
    cout<<"choose the opt blow"<<endl;
    cout<<"\t\t1.forgot password\n\t\t2.forgot Id"<<endl;
    cout<<"enter here :";
    cin>>n;
    switch(n)
    {
    case 1:
    goto Re;
    break;
    case 2:
    cout<<"enter your previous id :";
    cin>>ID1;
    if(ID1==ID)
    {
    clrscr();
    cout<<"your id is :"<<ID<<endl;
    cout<<"Your password is :"<<password1<<endl;
    }
    else
    {
    clrscr();
    cout<<"\n\n\t\tresult is not found !"<<endl;
    }
    break;
    default:
    cout<<"Chose correct opt"<<endl;
    goto ch;
    break;
    }
    }
	return 0;
}
