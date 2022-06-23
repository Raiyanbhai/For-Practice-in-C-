//WAP to illustrate the use of pssing array to the function
#include<iostream>
#include<iomanip>
//using namespace std;
int fun(int a[])
{
	a[0]=10;
	a[1]=12;
	a[2]=13;
	a[3]=14;
	a[4]=15;
	//a[5]=16;
}
int main()
{
	int nums[5]={1,2,3,4,5},i;
	std::cout<<"Before function call, the values are:";
		for(i=0;i<5;i++)
		std::cout<<std::setw(3)<<nums[i];
		fun(nums);//passing arrey nums to function
	std::cout<<std::endl<<"After funtion call the values are :";
		for(i=0;i<5;i++)
		std::cout<<std::setw(3)<<nums[i];
	return 0;
			 
}
