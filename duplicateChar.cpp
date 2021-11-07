#include<iostream>
using namespace std;

int main()
{
    int count=0;
    int a=0;
    string str,str1;
    cin>>str;

    for(int i=0;i<str.length();i++)
    {
        for(int j=i+1;j<str.length();j++)
        {
          if(str[i]==str[j])
           {
              str1[a]=str[i];
              a += 1;
           }
        }
    }
    for(int b=0;b<a;b++)
    {
         cout<<str1[b]<<",";
    }
   
    return 0;
}