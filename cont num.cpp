#include <iostream>
#include <conio.h>
//#include <Windows.h>
using namespace std;
int main()
{
	int chcount=0,wdcount=1;
	char ch='a';
	cout <<"enter a phrase :";
	//while(h!='\r')
	{
		ch=getche();
		if(ch==' ')
		wdcount++;
		else
		chcount ++;
	}
	system("cls");
	cout<<"number of word is :"<<wdcount<<endl;
	cout<<"number of charecters is :"<<chcount-1<<endl;
	return 0;
}
