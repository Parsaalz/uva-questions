#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int n;
	while(cin>>n,n)
	{
		int a=0;
		int b=0;
		vector<int>parsa;
		while(n!=0)
		{
			int p=n%2;
			parsa.push_back(p);
			n=n/2;	
		}
		int q=0;
		for(int i=0;i<parsa.size();i++)
		{
			if(parsa[i]==1 && q==0)
			{
				int y=0;
				int s=1;
				while(y<i)
				{
					s*=2;
					y++;
				}
				a+=s;
				q=1;
			}
			else if(parsa[i]==1 && q==1)
			{
				int y=0;
				int s=1;
				while(y<i)
				{
					s*=2;
					y++;
				}
				b+=s;
				q=0;
			}
		}
		cout<<a<<" "<<b<<"\n";
	}
	return 0;
}