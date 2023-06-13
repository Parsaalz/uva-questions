//673
#include <iostream>
#include <vector>
using namespace std;
int main()
{
  vector<char>parsa;
  int n;cin>>n;
  cin.ignore();
  for(int i=0;i<n;i++)
  {
    string task;
    getline(cin,task);
    for(int j=0;j<task.length();j++)
    {
      if(task[j]=='(' || task[j]=='[')
      {
        parsa.push_back(task[j]);
      }
      else if(task[j]==')' && parsa.size()-1 >= 0 && parsa[parsa.size()-1]=='(')
      {
        parsa.pop_back();
      }
      else if(task[j]==']' && parsa.size()-1 >= 0 && parsa[parsa.size()-1]=='[')
      {
        parsa.pop_back();
      }
      else
      {
        parsa.push_back(task[j]);
      }
    }
    if(parsa.size()==0)
    {
      cout<<"Yes"<<"\n";
    }
    else
    {
      cout<<"No"<<"\n";
    }
    parsa.clear();
  }
  return 0;
}