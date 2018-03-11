#include <iostream>

using namespace std;

int main()
{
    int g=0;
    string s,c;
    while(cin>>c){
        int x=c.size(),v=s.size()-1;
        if(c[0]!='.' && c[0]!='!' && c[0]!='?' && c[0]!=',' && s[v]!=' '){
            s+=' ';
        }
        for(int i=0;i<x;i++){
            if(c[i]!='.' && c[i]!='!' && c[i]!='?' && c[i]!=','){
                s+=c[i];
            }
            else{
                s+=c[i];
                s+=' ';
            }
        }
    }
    if(s[0]==' '){
        int y=s.size();
        for(int i=1;i<y;i++){
            cout<<s[i];
        }
        cout<<endl;
    }
    else{
        cout<<s<<endl;
    }
    return 0;
}