#include <iostream>
#include<cmath>
#include<algorithm>
using namespace std;

int main()
{
    string s,c;
    cin>>s>>c;
    int x=s.size();
    for(int i=0;i<x;i++){
        if(s[i]>='A' && s[i]<='Z'){
            s[i]+=32;
        }
        if(c[i]>='A' && c[i]<='Z'){
            c[i]+=32;
        }
        if(s[i]<c[i]){
            cout<<"-1"<<endl;
            return 0;
        }
        if(s[i]>c[i]){
            cout<<"1"<<endl;
            return 0;
        }
    }
    cout<<"0"<<endl;
}