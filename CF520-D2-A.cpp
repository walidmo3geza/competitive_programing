#include <iostream>

using namespace std;

int main()
{
    int n,a[30]={0},x;
    string s;
    cin>>n>>s;
    for(int i=0;i<n;i++){
        if(s[i]>='a'&&s[i]<='z'){
            x=s[i]%97;
        }
        else{
            x=s[i]%65;
        }
        a[x]++;
    }
    for(int i=0;i<26;i++){
        if(a[i]==0){
           cout<<"NO"<<endl;
           return 0;
        }
    }
    cout<<"YES"<<endl;
    return 0;
}