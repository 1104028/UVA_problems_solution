#include<iostream>
#include<string>
using namespace std;

int main()
{
	string s;
	int i = 1;
	while (1)
	{
		cin >> s;

		if (s == "*")
			break;

		if (s == "Hajj")
			cout << "Case " << i << ": " << "Hajj-e-Akbar\n";
		else if (s == "Umrah")
			cout << "Case " << i << ": " << "Hajj-e-Asghar\n";

		i++;
	}
}