#include <iostream>
#include<string>
#include<algorithm>
#include<cmath>
 using namespace std;

int main()
{
	string s;
	
		while (getline(cin, s)){
			string r = "";
		for (int i = 0; i<s.size(); i++){
			if (s[i] != ' '){
				if (s[i] != ' ')
					r += s[i];
			}
			
				else{
				reverse(r.begin(), r.end());
				cout << r << " ";
				r = "";
			}
		}
		reverse(r.begin(), r.end());
		cout << r << endl;
	}
		return 0;
}