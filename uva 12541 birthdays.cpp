#include<iostream>
#include<stack>
using namespace std;
int main()
{
	int n;cin>>n;
	pair<pair<string,int>,pair<int,int>>parsa[n];
	for(int i=0;i<n;i++)
	{
		cin>>parsa[i].first.first;
		cin>>parsa[i].first.second;
		cin>>parsa[i].second.first;
		cin>>parsa[i].second.second;
	}
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-1;j++)
		{
			if(parsa[j].second.second>parsa[j+1].second.second)
			{
				swap(parsa[j],parsa[j+1]);
			}
			else if(parsa[j].second.second==parsa[j+1].second.second)
			{
				if(parsa[j].second.first>parsa[j+1].second.first)
				{
					swap(parsa[j],parsa[j+1]);
				}
				else if(parsa[j].second.first==parsa[j+1].second.first)
				{
					if(parsa[j].first.second>parsa[j+1].first.second)
					{
						swap(parsa[j],parsa[j+1]);
					}
				}
			}
		}
	}
	cout<<parsa[n-1].first.first<<"\n";
	cout<<parsa[0].first.first<<"\n";
	return 0;
}