#include<iostream>
#include<string>
using namespace std;
int main(){
	string s;
	int n;
	cin >> n;
	while (n != 0){
		short a = 0, b = 0;
		int c = 0, m = 1e9;
		cin >> s;
		for (int i = 0; i < n; i++){

			if (s[i] == 'R'){
				if (a == 0 && b == 0){
					b = 1; c = 0;
				}
				else if (a == 0 && b == 1){
					c = 0;
				}
				else if (a == 1 && b == 0){
					c++;
					//cout << "w ";
					if (m >= c){
						m = c;
					}
					a = 0; b = 1; c = 0;
				}
			}
			else if (s[i] == 'D'){
				if (a == 0 && b == 0){
					a = 1; c = 0;
				}
				else if (a == 0 && b == 1){
					c++;
					//cout << "w ";
					if (m >= c){
						m = c;
					}
					a = 1; b = 0; c = 0;
				}
				else if (a == 1 && b == 0){
					c = 0;
				}
			}
			else if (s[i] == 'Z'){
				m = 0;
				break;
			}
			else if (s[i] == '.'){
				c++;
			}
			//cout << c << " ";
		}
		cout << m << endl;
		cin >> n;
	}
	//system("pause");
}