//WAP to user enter email and their password,if user make their password same then then they gone to login or canceled either ask again to make email and password correct.
#include <iostream>
using namespace std;   
class Login
        {
        private:
	    int pow1,pow2;
	    char email[20];
	    public:
	    void getemail()
	    {
		cout<<"Enter your email :";
		cin>>email;
	    }
	    void showemail()
	    {
		cout<<endl<<"Note:-"<<endl;
        cout<<" \t.Password must be contain 6 digit only"<<endl;
        cout<<"\t.Make your password strong"<<endl;
        cout<<"\t.your password should be at last combination of number only"<<endl;
        cout<<"\t.if you wont make your password same either your password gone to wrong"<<endl<<endl;
		cout<<"Enter your password :";
		cin>>pow1;
		cout<<"Renter your password :";
		cin>>pow2;
		if(pow1==pow2)
		{
		cout<<"your email is right"<<endl<<endl;
		}
		else
		{
		do
		{
		cout<<"your email or password is wrong!"<<endl<<endl;
		cout<<endl<<"Rnter your email :";
		cin>>email;
				 cout<<endl<<"Note:-"<<endl;
        cout<<" \t.Password must be contain 6 digit only"<<endl;
        cout<<"\t.Make your password strong"<<endl;
        cout<<"\t.your password should be at last combination of number only"<<endl;
        cout<<"\t.if you wont make your password same either your password gone to wrong"<<endl<<endl;
		cout<<"Enter your password :";
		cin>>pow1;
		cout<<"Renter your password :";
		cin>>pow2;
		}
		while(pow1!=pow2);
		}
	    }
        };
class Ask:public Login
        {
	    private:int a,b,c;
	    public:
	    void get()
	    {
		cout<<"Note:-\n \t\t1.logedin \n\t\t2.canceled"<<endl;
		cout<<"Enter what you want :";
		cin>>a;
	    }
	    void show()
	    {
		switch(a)
		{
	    case 1:
		cout<<"logedin"<<endl;
		break;
		case 2:
		cout<<"canceled"<<endl;
		break;
		default:
		cout<<"still iam learing!"<<endl;
		break;	
		}
	    }
        };
int main()
        {
	    Ask a;
	    Login l;
	    l.getemail();
	    l.showemail();
	    a.get();
	    a.show();
	    return 0;
        }
