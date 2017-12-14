#include<iostream>
using namespace std;
char map[3][3];

char checkWin(char c)
{
	return
		(map[0][0] == c&&map[0][1] == c&&map[0][2] == c) ||
		(map[1][0] == c&&map[1][1] == c&&map[1][2] == c) ||
		(map[2][0] == c&&map[2][1] == c&&map[2][2] == c) ||
		(map[0][1] == c&&map[1][1] == c&&map[2][1] == c) ||
		(map[0][0] == c&&map[1][0] == c&&map[2][0] == c) ||
		(map[0][0] == c&&map[1][1] == c&&map[2][2] == c) ||
		(map[0][2] == c&&map[1][1] == c&&map[2][0] == c);
}
int main()
{
	int n, countd, countx, counto, wx, wo;
	cin >> n;
	while (n--)
	{
		countd = 0;
		countx = 0;
		counto = 0;

		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				cin >> map[i][j];
				if (map[i][j] == 'X')
					countx++;
				else if (map[i][j] == 'O')
					counto++;
			}
		}

		wx = checkWin('X');
		wo = checkWin('O');
		if ((wx&&wo) || (wx&&countx - counto != 1) || (wo&&countx - counto != 0) || (countx - counto != 1 && countx - counto != 0))
			puts("no");
		else
			puts("yes");

	}
}

