#include <iostream>
#include <string>
#include<algorithm>

using namespace std;

void fast(){
	std::ios_base::sync_with_stdio(0);
	cin.tie(NULL);
}
int main()
{
	fast();
	int n;
	cin >> n;
	while (n != 0){
		int s1 = 0, s2 = 0;
		string c1, c2;
		bool b = 0;
		while (n != 0)
		{
			int z = n % 2;
			n /= 2;
			if (z == 1){
				if (b == 0){
					c1 += '1';
					c2 += '0';
					b = 1;
				}
				else{
					b = 0;
					c1 += '0';
					c2 += '1';
				}
			}
			else{
				c1 += '0';
				c2 += '0';
			}
		}
		int x = c1.size(), d = 1;
		for (int i = 0; i < x; i++){
			if (c1[i] == '1'){
				s1 += d;
			}
			if (c2[i] == '1'){
				s2 += d;
			}
			d *= 2;
		}
		cout << s1 << " " << s2 << endl;
		cin >> n;
	}
	//system("pause");
	return 0;
}