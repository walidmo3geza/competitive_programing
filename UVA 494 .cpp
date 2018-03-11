#include <bits/stdc++.h>
#include<algorithm>
using namespace std;

int main()
{
    std::ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int n;
    string s;
    while(getline(cin,s)){
        int x=s.size()-1,b=0,c=0;
        for(int i=0;i<=x;i++){
            if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z')){
                b=1;
            }
            else{
                if(b==1){
                    c++;
                    b=0;
                }
            }
        }
        if((s[x]>='a' && s[x]<='z') || (s[x]>='A' && s[x]<='Z')){
                c++;
        }
        cout<<c<<endl;
    }
}
