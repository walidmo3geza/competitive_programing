#include <iostream>

using namespace std;

int main()
{
    int n,m,a[100000],x;
    bool b[1000000]={0};
    cin>>n>>m;
    for(int i=0;i<n;i++){  
        cin>>a[i];         
    }
    b[a[n-1]]=1;
    a[n-1]=1;
    for(int i=n-2;i>=0;i--){
        if(b[a[i]]==0){
            b[a[i]]=1;
            a[i]=a[i+1]+1;
        }
        else{
            a[i]=a[i+1];
        }
    }
    while(m--){
        cin>>x;
        cout<<a[x-1]<<endl;
    }
    return 0;
}