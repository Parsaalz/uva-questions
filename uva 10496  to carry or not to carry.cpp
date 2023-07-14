#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int a,b;
	while(cin>>a>>b)
	{
		vector<int>a1;
		vector<int>a2;
		vector<int>a3;
		while(a!=0)
		{
			a1.push_back(a%2);
			a=a/2;
		}
		while(b!=0)
		{
			a2.push_back(b%2);
			b=b/2;
		}
		while(a1.size()<a2.size())
		{
			a1.push_back(0);
		}
		while(a2.size()<a1.size())
		{
			a2.push_back(0);
		}
		for(int i=0;i<a1.size();i++)
		{
			
			int p=a1[i]+a2[i];
			if(p==0)
			{
				a3.push_back(0);
			}
			else if(p==1)
			{
				a3.push_back(1);
			}
			else if(p==2)
			{
				a3.push_back(0);
			}
			else if(p==3)
			{
				a3.push_back(1);
			}
			else 
			{
				a3.push_back(0);
			}
		}
		int sum=0;
		for(int i=0;i<a3.size();i++)
		{
			int y=1;
			for(int j=0;j<i;j++)
			{
				y*=2;
			}
			sum+=a3[i]*y;
		}
		cout<<sum<<"\n";
	}
	return 0;
}