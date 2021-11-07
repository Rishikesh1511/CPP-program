#include<iostream>
using namespace std;

int main()
{
    string str;
    cin>>str;
    int len = str.length();
    
    for(int i=len-1;i>-1;i--)
    {
        cout<<str[i];
    }
    return 0;
}