#include<iostream>

using namespace std;

int main(){
	int n, b,a[100],f,g,h;
	cin >> n >> b;
	while (n!=0 &&b !=0){
		bool c = 1;
		for (int i = 1; i <= n; i++){
			cin >> a[i];
		}
		for (int j = 0; j < b; j++){
			cin >> f >> g >> h;
			a[f] -= h;
			a[g] += h;
		}
		for (int i = 1; i <= n; i++){
			if (a[i] < 0){
				c = 0;
			}
		}
		if (c){
			cout << "S" << endl;
		}
		else{
			cout << "N" << endl;
		}
		cin >> n >> b;
	}

	//system("pause");
}