#include<iostream>
#include<string>
using namespace std;
int a[25][25] = {-1};
int n;
void moveonto(int b,int c)
{

}
void moveover(int b, int c)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; a[i][j]!=-1; j++)
		{
			if (a[i][j] == b && a[i][j+1]==-1)
			{
				for (int k = 0; a[c][k]!=-1; k++)
				{
					if (a[c][k+1] == -1)
					{
						a[c][k+1] = b;
						a[i][j] = -1;
						break;
					}
				}
				i = n;
			}
			else
			{
				int t = b;
				
			}
		}
	}
}
void pileonto(int b, int c)
{

}
void pileover(int b, int c)
{

}


int main()
{
	string in, first, second, b, c;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		a[i][0] = i;
	}

	while (true)
	{
		cin >> in;

		if (in == "quit")
			return false;
		else
		{
			int l = in.length();
			int begin = 0, space = 0, x, y;
			for (int j = 0; j < l; j++)
			{
				if (in[j] == ' ' || in[j] == l - 1)
				{
					space++;
					if (space == 1)
					{
						for (int k = begin; k < j; k++)
						{
							first[k] = in[k];
							cout << first[k];
						}
					}
					else if (space == 2)
					{
						for (int k = begin; k < j; k++)
						{
							b[k] = in[k];
							x = b[k] - '0';
						}

					}
					else if (space == 3)
					{
						for (int k = begin; k < j; k++)
						{
							second[k] = in[k];
						}
					}
					else if (space == 4)
					{
						for (int k = begin; k <= j; k++)
						{
							c[k] = in[k];
							y = c[k] - '0';
						}
					}
					begin = j + 1;
				}
			}

			if (first == "move" && second == "onto")
			{
				moveonto(x, y);
			}
			else if (first == "move" && second == "over")
			{
				moveover(x, y);
			}
			else if (first == "pile" && second == "onto")
			{
				pileonto(x, y);
			}
			else if (first == "pile" && second == "over")
			{
				pileover(x, y);
			}
		}

		int countt[25] = {0};
		for (int i = 0; i < n; i++)
		{
			countt[25] = { 0 };
			for (int j = 0; j < n; j++)
			{
				if (a[i][j] >= 0)
					countt[i] += 1;
			}

			if (countt[i]>0)
			cout << i << ": " << a[0][i];
			else
				cout << i << ":";
		}
	}
}