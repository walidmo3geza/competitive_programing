#include <iostream>

using namespace std;

int main()
{
    int x,y,z;
    cin>>x>>y>>z;
    int cup=x+y+z;
    cin>>x>>y>>z;
    int met=x+y+z;
    int c=cup/5;
    if(cup%5 != 0){
        c++;
    }
    int m=met/10;
    if(met%10 != 0){
        m++;
    }
    int t=c+m;
    int n;   cin>>n;
    if(t<=n){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}