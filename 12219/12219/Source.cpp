#include<iostream>
using namespace std;
int bigpoly[11][11];
int smallpoly[11][11];
bool visited[11][11];
int bsize, ssize;
int main()
{
	while (1)
	{
		char s;
		int count = 0, countb = 0, countb1 = 0;
		cin >> bsize >> ssize;
		if (bsize == 0 && ssize == 0)
			break;

		for (int i = 0; i < bsize; i++)
		{
			for (int j = 0; j < bsize; j++)
			{
				cin >> s;
				if (s == '*')
				{
					bigpoly[i][j] = 1;
				}
				else if (s == '.')
				{
					bigpoly[i][j] = 0;
				}
			}
		}

		for (int i = 0; i < ssize; i++)
		{
			for (int j = 0; j < ssize; j++)
			{
				cin >> s;
				if (s == '*')
				{
					smallpoly[i][j] = 1;
					countb1++;
				}
				else if (s == '.')
				{
					smallpoly[i][j] = 0;
				}
			}
		}

		for (int i = 0; i < ssize; i++)
		{
			for (int j = 0; j < ssize; j++)
			{
				for (int k = 0; k < bsize; k++)
				{
					for (int l = 0; l < bsize; l++)
					{
						if ((smallpoly[i][j] == bigpoly[k][l]) && smallpoly[i][j] == 1 && bigpoly[k][l] == 1)
						{
							bigpoly[k][l] = 0;
							count++;
							j = j + 1;
						}
						else if (smallpoly[i][j] == 0)
						{
							j = j - 1;
							l = l - 1;
							i = i + 1;
							k = k + 1;
						}
						else if (count == countb1)
						{
							for (int n = 0; n < bsize; n++)
							{
								for (int p = 0; p < bsize; p++)
								{
									if (bigpoly[n][p] == 0)
									{
										countb++;
									}
								}
							}
							if (countb == bsize*bsize)
							{
								i = ssize;
								j = ssize;
								k = bsize;
								l = bsize;
							}
							else
							{
								i = 0;
								j = 0;
								k = 0;
								l = 0;
							}
							
						}
					}

				}
			}
		}


		if (countb == bsize*bsize)
			cout << "1\n";
		else
			cout << "0\n";

	}
}