#include<iostream>
#include<map>
#include<string>
using namespace std;

int main(){
	map<string, int>a;
	string s;
	int n, m, x;
	cin >> n >> m;
	for (int i = 0; i < n; i++){
		cin >> s >> x;
		a[s] = x;
	}
	for (int i = 0; i < m; i++){
		int sum = 0;
		while (cin >> s){
			if (s == "."){
				break;
			}
			if (a[s] != 0){
				sum += a[s];
			}
		}
		cout << sum << endl;
	}
	//system("pause");
	return 0;
}