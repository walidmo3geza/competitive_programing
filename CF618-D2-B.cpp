#include <iostream>

using namespace std;

int main()
{
    int n,a[100][100],b[100]={0};
    cin>>n;
    int y=n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    int x=1,c=0,s=0,count=n-1;
    while(x<n){
        s=0;
        for(int i=0;i<n && s==0;i++){
           for(int j=0;j<n;j++){
            if(a[i][j]==x){
                c++;
            }
           }
           //cout<<y<<" "<<c<<endl;
           if(c==count){
            //cout<<i<<endl;
            b[i]=x;
            s=1;
           }
           c=0;
        }
        count--;
        x++;
    }
    for(int i=0;i<n;i++){
        if(b[i]==0){
            cout<<n<<" ";
        }
        else{
            cout<<b[i]<<" ";
        }
    }
    cout <<endl;
    return 0;
}