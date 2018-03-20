#include<iostream>

using namespace std;

void fast(){
	std::ios_base::sync_with_stdio(0);
	cin.tie(NULL); cout.tie(0);
}
int main(){
	fast();
	int n, a[100] = { 0 }, arr1[100];
	while (cin >> n&&n){
		for (int i = 0; i < n; i++){
			a[i] = i + 1;
		}
		int m = n, s = 0; bool b = 0, start = 0;
		cout << "Discarded cards:";
		while (true){
			if (m <= 1){
				cout << "\nRemaining card: " << a[0] << "\n";
				break;
			}
			s = 0;
			for (int i = 0; i < m; i++){
				if (!b){
					if (i == 0 && !start){
						cout << " " << a[i];
						start = 1;
						b = 1;
					}
					else{
						cout << ", " << a[i];
						b = 1;
					}
				}
				else{
					{
						a[s] = a[i];
						s++;
						b = 0;
					}
				}
			}
			m = 0;
			if (s <= 1){
				cout << "\nRemaining card: " << a[0] << "\n";
				break;
			}
			else{
				for (int i = 0; i < s; i++){
					if (!b){
						cout << ", " << a[i];
						b = 1;
					}
					else{
						a[m] = a[i];
						m++;
						b = 0;
					}
				}
			}
		}
	}
	//system("pause");
	return 0;

}