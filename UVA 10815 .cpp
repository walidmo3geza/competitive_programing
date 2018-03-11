#include<iostream>
#include<map>
#include<set>
#include<string>
using namespace std;
int main(){
	set<string>sett;
	string s, ch;
	while (cin >> s){
		int x = s.size();
		for (int i = 0; i < x; i++){
			if (s[i] >= 'A'&&s[i] <= 'Z'){
				s[i] += 32;
				ch += s[i];
			}
			else if (s[i] >= 'a'&&s[i] <= 'z'){
				ch += s[i];
			}
			else{
				sett.insert(ch);
				ch = "";
			}
		}
		sett.insert(ch);
		ch = "";
	}
	set<string>::iterator it;
	for (it = sett.begin(); it != sett.end(); it++){
		if (*it != ""){
			cout << *it << endl;
		}
	}
	//system("pause");
	return 0;
}