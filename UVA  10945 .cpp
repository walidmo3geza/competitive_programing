#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
	string s, x, y;
	getline(cin, s);
	while (s != "DONE")
	{
		x = "";
		for (int i = 0; i < s.size(); i++)
		{
			if (s[i] >= 'a'&&s[i] <= 'z')
				s[i] -= 32;

			if (s[i] >= 'A'&&s[i] <= 'Z')
				x += s[i];

		}

		y = x;

		reverse(y.begin(), y.end());

		if (y == x)
			cout << "You won't be eaten!" << endl;
		else
			cout << "Uh oh.." << endl;
		getline(cin, s);

	}
}