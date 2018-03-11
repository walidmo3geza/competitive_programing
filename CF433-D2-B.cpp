#include <iostream>
#include<algorithm>
using namespace std;

int main()
{
    long long n,a[100000],b[100000];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
        b[i]=a[i];
    }
    sort(b,b+n);
    for(int i=1;i<n;i++){
        a[i]+=a[i-1];
        b[i]+=b[i-1];
    }
    long long m,l,r,t;
    cin>>m;
    while(m--){
        cin>>t>>l>>r;
        if(t==1){
            if(l==1){
                cout<<a[r-1]<<endl;
            }
            else{
                cout<<a[r-1]-a[l-2]<<endl;
            }
        }
        else{
            if(l==1){
                cout<<b[r-1]<<endl;
            }
            else{
                cout<<b[r-1]-b[l-2]<<endl;
            }
        }
    }
}