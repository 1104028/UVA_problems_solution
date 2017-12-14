#include<iostream>
using namespace std;

int a[210][210];
bool visited[210][210];
int testCase = 1;
bool doneB;
int m;

void resultB(int i, int j)
{

	if (i == m || j == m || i<0 || j<0)
		return;
	if (visited[i][j])
		return;
	if (doneB == true)
	{
		return;
	}
	if (a[i][j] == 1) return;

	if (m - 1 == i && doneB==false)
	{
		
		doneB = true;
		return;
	}
	

	visited[i][j] = true;
	resultB(i, j + 1);
	resultB(i, j - 1);
	resultB(i + 1, j);
	resultB(i - 1, j);
	resultB(i + 1, j + 1);
	resultB(i - 1, j - 1);
}


int main()
{
	while (1)
	{
		cin >> m;
		if (m == 0 || m==1)
			break;

		doneB = false;

		for (int i = 0; i<m; i++)
		{
			for (int j = 0; j<m; j++)
			{
				char s;
				cin >> s;
				if (s == 'b')
					a[i][j] = 0;
				else if (s == 'w')
					a[i][j] = 1;

				visited[i][j] = false;

			}
		}
		
		for (int j = 0; j<m; j++)
		{
			int i = 0;
			if (a[i][j] == 0 && visited[i][j] == false)
				resultB(0, j);

		}
		if (doneB == true)
		{
			cout << testCase << " " << "B"<<endl;
		}
		else
			cout << testCase << " " << "W"<<endl;

		testCase++;
	}
	return 0;
}


