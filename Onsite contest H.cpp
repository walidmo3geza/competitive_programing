#include<iostream>
#include<string>
#include <algorithm>
#include<cmath>
using namespace std;

void fast(){
	std::ios_base::sync_with_stdio(0);
	cin.tie(NULL); cout.tie(0);
}
int a[100000];
int b[100000] = { 0 };
int main(){
	fast();
	int n, q;
	cin >> n;
	for (int i = 0; i < n; i++){
		cin >> a[i];
	}
	cin >> q;
	for (int i = 0; i < q; i++){
		int x, y;
		cin >> x >> y;
		b[x - 1] += -1;
		b[y] += 1;
	}
	for (int i = 1; i < n; i++){
		b[i] += b[i - 1];
	}
	int s = 0;
	for (int i = 0; i < n; i++){
		if (b[i] == 0){
			s++;
		}
	}
	cout << s << endl;
	for (int i = 0; i < n; i++){
		if (b[i] == 0){
			cout << a[i] << " ";
		}
	}
	cout << endl;
//	system("pause");
	return 0;
}