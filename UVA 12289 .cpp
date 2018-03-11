#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s, o = "one", to = "tw0", th = "three";
	int  c = 0,n;
	cin >> n;
	while (n--){
		cin >> s;
		int x = s.size(), out = 0;
		if (x == 3){
			for (int i = 0; i<x; i++){
				if (s[i] == o[i]){
					c++;
				}
			}
			if (c == 2 || c == 3){
				out = 1;
			}
			else{
				out = 2;
			}
		}
		else{
			out = 3;
		}
		c = 0;
		cout << out << endl;
	}
	return 0;
}