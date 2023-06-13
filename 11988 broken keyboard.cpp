#include<iostream>
#include<vector>
using namespace std;
int main()
{
  vector<char>parsa;
  vector<char>ali;
  string n;
  int p=1;
  while(cin>>n)
  {
    int counter=0;
    for(int i=0;i<n.length();i++)
    {
      if(n[i]=='[')
      {
        ali.push_back('|');
        p=0;
      }
      else if(n[i]==']')
      {
        ali.push_back('|');
        counter++;
        p=1;
      }
      else if(p==0)
      {
        ali.push_back(n[i]);
      }
      else if(p==1)
      {
        parsa.push_back(n[i]);
      }
      else
      {
        parsa.push_back(n[i]);
      }
    }
    for(int i=ali.size()-1;i>=0;i--)
    {
      if(ali[i]=='|' && i!=ali.size()-1)
      {
        for(int j=i+1;j<ali.size();j++)
        {
          if(ali[j]=='|')
          {
            break;
          }
          else
          {
            cout<<ali[j];
          }
        }
      }
    }
    for(int i=0;i<ali.size();i++)
    {
      if(ali[i]=='|')
      {
        break;
      }
      else
      {
        cout<<ali[i];
      }
    }
    for(int i=0;i<parsa.size();i++)
    {
      cout<<parsa[i];
    }
    cout<<"\n";
    parsa.clear();
    ali.clear();
  }
  return 0;
}