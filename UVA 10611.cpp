#include<iostream>
#include<string>
#include <algorithm>

using namespace std;

void fast(){
	std::ios_base::sync_with_stdio(0);
	cin.tie(NULL); cout.tie(0);
}
int main(){
	fast();
	int n, a[100000];
	cin >> n;
	for (int i = 0; i < n; i++){
		cin >> a[i];
	}
	int q;
	cin >> q;
	while (q--)
	{
		int x;
		cin >> x;
		int l = 0, h = n - 1, ans1 = -1, ans2 = -1;
		while (l <= h){
			int mid = (l + h) / 2;
			if (a[mid] < x){
				ans1 = mid;
				l = mid + 1;
			}
			else{
				h = mid - 1;
			}
		}
		l = 0, h = n - 1;
		while (l <= h){
			int mid = (l + h) / 2;
			if (a[mid] > x){
				ans2 = mid;
				h = mid - 1;
			}
			else{
				l = mid + 1;
			}
		}
		if (ans1 != -1){
			cout << a[ans1] << " ";
		}
		else{
			cout << "X ";
		}
		if (ans2 != -1){
			cout << a[ans2] << "\n";
		}
		else{
			cout << "X\n";
		}
	}
	//system("pause");
	return 0;
}