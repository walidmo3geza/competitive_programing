#include <iostream>

using namespace std;

int main()
{
    int n,a,arr[1000];
    cin>>n>>a;
    n--;
    a--;
    for(int i=0;i<=n;i++){
        cin>>arr[i];
    }
    int x=a-1,y=a+1,c=0;
    if(arr[a]==1){
        c=1;
    }
    while(x>=0 || y<=n){
        if(x>=0 && y<=n){
            if(arr[x]==1 && arr[y]==1){
                c+=2;
            }
        }
        else if(x>=0 && arr[x]==1){
            c++;
        }
        else if(y<=n && arr[y]==1){
            c++;
        }
        x--;
        y++;
    }
    cout << c << endl;
    return 0;
}