#include <iostream>

using namespace std;

int main()
{
    int c=0;
    bool a[200]={0};
    char ch;
    while(cin>>ch){
        if(a[ch]==0){
            c++;
            a[ch]=1;
        }
    }
    //cout<<c<<endl;
    if(c%2==0){
        cout<<"CHAT WITH HER!"<<endl;
    }
    else{
        cout<<"IGNORE HIM!"<<endl;
    }
}