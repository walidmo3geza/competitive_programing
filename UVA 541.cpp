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
	int n;
	while (cin >> n){
		int sh1, sh2, b1 = 0, b2 = 0;
		if (n == 0){
			//system("pause");
			return 0;
		}
		int a[110][110];
		for (int i = 0; i < n; i++){
			for (int j = 0; j < n; j++){
				cin >> a[i][j];
			}
		}
		for (int i = 0; i < n; i++){
			int c = 0;
			for (int j = 0; j < n; j++){
				if (a[i][j] == 1){
					c++;
				}
			}
			if (c % 2 == 1){
				sh1 = i;
				b1++;
			}
		}
		for (int i = 0; i < n; i++){
			int c = 0;
			for (int j = 0; j < n; j++){
				if (a[j][i] == 1){
					c++;
				}
			}
			if (c % 2 == 1){
				sh2 = i;
				b2++;
			}
		}
		if (b1 == 0 && b2 == 0){
			cout << "OK\n";
		}
		else if (b1 == 1 && b2 == 1){
			cout << "Change bit (" << sh1 + 1 << "," << sh2 + 1 << ")\n";
		}
		else{
			cout << "Corrupt\n";
		}
	}

	//system("pause");
	return 0;
}