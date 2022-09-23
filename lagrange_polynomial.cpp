#include <iostream>
using namespace std;
int main()
{
	double x[4],y[4],t;
	for(int i=0;i<=3;i++)
	{
		cout<<"input x"<<i<<"=";
		cin>>x[i];
		cout<<"input y"<<i<<"=";
		cin>>y[i];
		
	}
	cout<<"input x=";
	cin>>t;
	
	double l1[4],l2[4];
	for(int i=0;i<=3;i++)
	{
		l1[i]=l2[i]=1;
	}
	
	double l[4];
	for(int i=0;i<=3;i++)
	{
		for(int j=0;j<=3;j++)
		{
			if(i==j)
			continue;
			l1[i]*=t-x[j];
			l2[i]*=x[i]-x[j];
		}
		l[i]=l1[i]/l2[i];
	}
	
	double p=0;
	for(int i=0;i<=3;i++)
	{
		p+=y[i]*l[i];
	}
	
	cout<<"P("<<t<<")="<<p<<endl;
	
	return 0;
}