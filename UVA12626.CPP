#include <bits/stdc++.h>
#include<algorithm>
using namespace std;

int main()
{
    std::ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int n;
    string s;
    cin>>n;
    for(int t=0;t<n;t++){
            //cout<<"fj";
        int c=0,a[30]={0};
        cin>>s;
        int x=s.size();
        for(int i=0;i<x;i++){
                //cout<<"ww";
            if(s[i]>='A' && s[i]<='Z'){
                int z=s[i]%65;
                a[z]++;
            }
        }
        int m='M'%65,b='A'%65,r='R'%65,g='G'%65,i='I'%65,h='T'%65;
        while(a[m]>=1 && a[b]>=3 && a[r]>=2 && a[g]>=1 && a[i]>=1 && a[h]>=1){
            //cout<<"bb";
            a[m]--;
            a[b]-=3;
            a[r]-=2;
            a[g]--;
            a[i]--;
            a[h]--;
            c++;
        }
        cout<<c<<endl;
    }
}
