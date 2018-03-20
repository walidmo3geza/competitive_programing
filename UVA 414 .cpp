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
	int n; string s;
	int arr[100], m = 0, c = 0;
	while (cin >> n&&n){
		m = 0; c = 0;
		n++;
		while (n--){
			getline(cin, s);
			int x = s.length();
			c = 0;
			for (int i = 0; i < x; i++){
				if (s[i] == ' ')
					c++;
			}
			arr[m] = c;
			m++;
		}
		sort(arr, arr + m);
		int sum = 0;
		for (int i = m - 1; i > 1; i--){
			sum += arr[i] - arr[1];
		}
		cout << sum << "\n";
	}
	//system("pause");
	return 0;

}