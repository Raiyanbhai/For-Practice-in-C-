#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int a[2][3],b[2][3],sum[2][3],i,j,m=2,n=3;
	cout<<"Enter first matrix of size 2*3 row by row :";
	for(i=0;i<m;i++)
	for(j=0;j<n;j++)
	cin>>a[i][j];
	
	cout<<"Enter second matrix of size 2*3 row by row :";
	for(i=0;i<m;i++)
	for(j=0;j<n;j++)
	cin>>b[i][j];
	
	for(i=0;i<m;i++)
	
	for(j=0;j<n;j++)
		sum[i][j]=a[i][j]+b[i][j];
		
	cout<<endl<<"sum of matrix is "<<endl;
	
	for(i=0;i<m;i++)
	{
	for(j=0;j<n;j++)
		{
			cout<<setw(2)<<sum[i][j];
		}
	cout<<endl;
	}
//return 0;
}
