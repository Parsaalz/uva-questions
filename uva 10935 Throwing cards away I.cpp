#include<iostream>
#include<queue>
using namespace std;
int main()
{
	int n;
	while(cin>>n,n)
	{
		vector<int>cards;
		vector<int>throwcards;
		string work;
		int p=0;
		for(int i=1;i<=n;i++)
		{
			cards.push_back(i);
		}
		while(cards.size()>1)
		{
			if(p==0)
			{
				for(int i=0;i<cards.size();i++)
				{
					if(i%2==0)
					{
						throwcards.push_back(cards[i]);
						cards[i]=0;
						work="pop";
					}
					else
					{
						work="push";
					}
				}
				for(int i=0;i<cards.size();i++)
				{
					if(cards[i]==0)
					{
						cards.erase(cards.begin()+i);
					}
				}
				p=1;
			}
			else if(work=="push")
			{
				for(int i=0;i<cards.size();i++)
				{
					if(i%2==0)
					{
						throwcards.push_back(cards[i]);
						cards[i]=0;
						work="pop";
					}
					else
					{
						work="push";
					}
				}
				for(int i=0;i<cards.size();i++)
				{
					if(cards[i]==0)
					{
						cards.erase(cards.begin()+i);
					}
				}
			}
			else if(work=="pop")
			{
				for(int i=0;i<cards.size();i++)
				{
					if(i%2!=0)
					{
						throwcards.push_back(cards[i]);
						cards[i]=0;
						work="pop";
					}
					else
					{
						work="push";
					}
				}
				for(int i=0;i<cards.size();i++)
				{
					if(cards[i]==0)
					{
						cards.erase(cards.begin()+i);
					}
				}
			}
   		}
   		if(n==1)
   		{
   			cout<<"Discarded cards:";
   			cout<<"\n";
   			cout<<"Remaining card: "<<1<<"\n";
		}
		else
		{
	   		cout<<"Discarded cards: ";
	   		for(int i=0;i<throwcards.size();i++)
	   		{
	   			if(i!=throwcards.size()-1)
				{
					cout<<throwcards[i];
					cout<<","<<" ";
				}	
				else
				{
					cout<<throwcards[i];
					cout<<"\n";
				}
			}
			cout<<"Remaining card: "<<cards[0]<<"\n";
		}
    }
    return 0;
}