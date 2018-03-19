#include<iostream>
#include<string>
#include <algorithm>
#include<cmath>
using namespace std;

void fast(){
	std::ios_base::sync_with_stdio(0);
	cin.tie(NULL); cout.tie(0);
}
int main(){
	fast();
	int a[100000];
	int n, q, c = 0;
	while (cin >> n >> q){
		if (n == 0 && q == 0){
			//system("pause");
			return 0;
		}
		c++;
		for (int i = 0; i < n; i++){
			cin >> a[i];
		}
		sort(a, a + n);
		cout << "CASE# " << c << ":\n";
		while (q--){
			int x;
			cin >> x;
			int l = 0, h = n - 1, ans = -1;
			while (l <= h){
				int mid = (l + h) / 2;
				if (a[mid] == x){
					ans = mid;
					h = mid - 1;
				}
				else if (a[mid] < x){
					l = mid + 1;
				}
				else{
					h = mid - 1;
				}
			}
			if (ans == -1){
				cout << x << " not found\n";
			}
			else{
				ans++;
				cout << x << " found at " << ans << endl;
			}
		}
	}
	//system("pause");
	return 0;
}