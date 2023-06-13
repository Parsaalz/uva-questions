//13055
//inception
#include<iostream>
#include<vector>
using namespace std;
int main()
{
  int n;cin>>n;
  vector<string>parsa;
  for(int i=0;i<n;i++)
  {
    string task;
    cin>>task;
    if(task[0]=='S')
    {
      string ali;
      cin>>ali;
      parsa.push_back(ali);
    }
    else if(task[0]=='T')
    {
      if(parsa.size()==0)
      {
        cout<<"Not in a dream"<<"\n";
      }
      else
      {
        cout<<parsa[parsa.size()-1]<<"\n";  
      }
    }
    else if(task[0]=='K')
    {
      if(parsa.size()==0)
      {
        continue;
      }
      else
      {
        parsa.erase(parsa.begin()+parsa.size()-1); 
      }
    }
  }
  return 0;
}