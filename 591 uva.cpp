#include<iostream>
using namespace std;
int main()
{
	int n;
	int number=1;
	while(cin>>n,n)
	{
		int sum=0;
		int level[n];
		for(int i=0;i<n;i++)
		{
			cin>>level[i];
			sum+=level[i];
		}
		int middle=sum/n;
		int counter=0;
		for(int j=0;j<n;j++)
		{
			if(level[j]>middle)
			{
				counter+=level[j]-middle;
			}
		}
		cout<<"Set"<<" "<<"#"<<number<<"\n";
		cout<<"The minimum number of moves is "<<counter<<"."<<"\n"<<"\n";
		number++;
	}
	return 0;
}