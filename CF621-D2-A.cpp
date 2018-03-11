#include <iostream>

using namespace std;

int main()
{
    int n,x,min=INT_MAX; cin>>n;
    long long sum=0;
    for(int i=0;i<n;i++){
        cin>>x;
        sum+=x;
        if(x%2==1 && x<min){
            min=x;
        }
    }
    if(sum%2==1){
        sum-=min;
    }
    //cout<<min<<endl;
    cout << sum << endl;
    return 0;
}