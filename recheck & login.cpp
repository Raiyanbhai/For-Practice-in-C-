/*WAP to ask the user to input their detail and
  make their username & userpassword to login or
  cancel too,if user say login then check their
  given username and userpassword to login
*/
#include<iostream>
#include<conio.h>
#include<iomanip>
#include<string.h>
using namespace std;
class Profile
{
private:
	    string name,address,gmail1,gmail,password1,password2,pow1,pow2,usrname,usrname1;
	    char gender[30],mob[20];
	    int i,n,age,s;
public:

	   void getdetail()
	  {
	  cout<<"Enter your full name :";
	  getline(cin,name);
	  cout<<"Enter your address :";
	  getline(cin,address);
      cout<<"Enter your mobile no :";
	  r:
	  cin>>mob;
      if(strlen(mob)==10)//This is use to take          onlyten(10) character here
	  {
	  }
	  else
	  {
	  cout<<endl<<"Invalid! Number"<<endl;
	  cout<<"Renter your mobile no :";
	  goto r;
	  }
	  cin.ignore();
	  cout<<"Enter your email :";
	  cin>>gmail;
	  R:
      cout<<"Enter your password :";
	  cin>>password1;
	  cout<<"Renter your password :";
	  cin>>password2;
	  if(password1==password2)
	  {
	  }
	  else
	  {
	  cout<<endl<<"Invalid! password for this email"<<endl;
	  goto R;
	  }
	  cout<<"Enter your gender :";
 	  cin>>gender;
	  cout<<"Enter your age :";
	  while(!(cin>>age))//for take only integer num
      {
      cout<<"Entered age is INVALID!"<<endl;
      cout<<"Renter your age :";
      cin.clear();
      cin.ignore(200,'\n');
      }
      cin.ignore();
      do
      {
          cout<<"What you want?\n\t\t\t1.Create Id\n\t\t\t2.Continue with gmail\n";
           cout<<"Type here :";
           cin>>s;
      	   switch(s)
      	   {
      		case 1:
      		cin.ignore();
      		clrscr();
      		p:
	        cout<<"Create your username :";
	        cin>>usrname;
	        cout<<"Create your user-password :";
	        cin>>pow1;
	        cout<<"Conform your user-password :";
	        cin>>pow2;	
	        if(pow1==pow2)
	        {
	        userdetail();
	        }
        	else
	        {
		     cout<<"INVALIED !"<<endl;
		     goto p;
	        }
	        break;
	        case 2:
	        {
	        	system("cls");
	        	gmaildetail();
	        }
	        break;
	        default:
	        cout<<"Invalied number !"<<endl;
	        break;
         	}
        }while(s>=3||s==0);
	}
	void userdetail()
	{	
			clrscr();
			cout<<setw(36)<<"Enter this to see your detail"<<endl;
			cout<<"Username :";
			cin>>usrname1;
			cout<<"Password :";
			cin>>pow2;
			if(usrname1==usrname && pow2==pow1)
			{
			clrscr();
			cout<<"\t\t\tThis is your profile detail"<<endl;
			cout<<"Name :"<<name<<endl;
			cout<<"Age :"<<age<<endl;
			cout<<"Gender :"<<gender<<endl;
			cout<<"Address :"<<address<<endl;
			cout<<"Mobile No :"<<mob<<endl;
			}
			else
			{
			clrscr();
	     	cout<<"ERROR !"<<endl;
			forget();
			}
	}
	void forget()
	{
			A:
		    cout<<"\t\t1.Renter Username & password\n\t\t2.Forgot password \n\t\t3. Goto menu"<<endl;
			cout<<"Type here :";
		    cin>>i;
		    cin.ignore();
			switch(i)
			{
			case 1:
		    clrscr();
		    userdetail();
			break;
						
		    case 2:
			clrscr();
			p:
	        cout<<"Create new user-password :";
	        cin>>pow1;
	        cout<<"Conform new user-password :";
	        cin>>pow2;	
	        if(pow1==pow2)
	        {
	        userdetail();
	        }
        	else
	        {
		    cout<<"INVALIED !"<<endl;
		    goto p;
	        }
		    break;
						
			case 3:
			clrscr();
			getdetail();
			break;
			           
	        default:
	        clrscr();
			cout<<"INVLIED!\nOut of option your choice"<<endl;
	        goto A;
			break;
					
			}
		}
	void gmaildetail()
	   {		
			cout<<"\t\tEnter this to see your detail"<<endl;
			cout<<"Gmail ID :";
			cin>>gmail1;
			cout<<"Password :";
			cin>>password2;
			if(gmail1==gmail && password2==password1)
			{
			clrscr();
			cout<<"\t\t\tThis is your profile detail"<<endl;
			cout<<"Name :"<<name<<endl;
			cout<<"Age :"<<age<<endl;
			cout<<"Gender :"<<gender<<endl;
			cout<<"Address :"<<address<<endl;
			cout<<"Mobile No :"<<mob<<endl;
			}
			else
			{
			clrscr();
			cout<<endl<<"Your email and password doesn't matching "<<endl;
			forgot();
			}
		 }
	void forgot()
		 {
		 	B:
		 	cout<<endl<<"Select any on option"<<endl;
		    cout<<"\t\t\t1.Renter ID & Password\n\t\t\t2.Forgot Password\n\t\t\t3.Goto main memu\n";
		    cin>>i;
		    switch(i)
		    {
		    case 1:
		    clrscr();
		    gmaildetail();
		    break ;
		    case 2:
		    forgotgmail();
		    break;
		    case 3:
		    clrscr();
		    getdetail();
		    break;
		    default:
		    clrscr();
		    cout<<"\ninvalied choice!\n";
		    goto B;
		    break ;
		    }
		 }
	void forgotgmail()
		 {
	        r:
            cout<<"Enter new password :";
	        cin>>password1;
	        cout<<"Renter new password :";
	        cin>>password2;
	        if(password1==password2)
	        {
	        gmaildetail();
	        }
	        else
	        {
	        cout<<endl<<"Invalid! password for this email"<<endl;
	        goto r;
	        }
		    }   


};
int main()
{
	Profile p;
    p.getdetail();
	return 0;
}
