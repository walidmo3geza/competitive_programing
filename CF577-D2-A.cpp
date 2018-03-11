#include <iostream>

using namespace std;

int main()
{
    int p=0,n,x;
    cin>>n>>x;
    for(int i=1;i<=n;i++){
        int c=x/i;
        if(x%i==0 && c<=n){
            p++;
        }
    }
    cout<<p<<endl;
    return 0;
}