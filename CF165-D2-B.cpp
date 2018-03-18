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
	int n, k;
	cin >> n >> k;
	int l = 1, h = n, ans = -1;
	while (l<=h)
	{
		int mid = (l + h) / 2;
		int s = mid + (mid / k), p = mid / k, x = 1;
		//cout << l << " " << h << " " << mid << " " << ans << endl;
		while (p!=0)
		{
			x++;
			p = mid / pow(k, x);
			s += p;
		}
		if (s<n){
			l = mid + 1;
		}
		else{
			ans = mid;
			h = mid - 1;
		}
	}
	cout << ans << endl;
	//system("pause");
	return 0;
}