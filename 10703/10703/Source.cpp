#include<iostream>

using namespace std;
bool visited[510][510];
int main()
{
	int w, h, n,x1,x2,y1,y2;
	while (1)
	{
		cin >> w >> h >> n;
		if (w == 0 && h == 0 && n == 0)
			break;

		while (n--)
		{
			cin >> x1 >> y1 >> x2 >> y2;
			if (x1 > x2)
				swap(x1, x2);
			if (y1 > y2)
				swap(y1, y2);

			for (int i = y1 - 1; i < y2; ++i)
			{
				for (int j = x1 - 1; j < x2; ++j)
				{
					visited[i][j] = true;
				}
			}
		}
		int count = 0;
		for (int i = 0; i < h; ++i)
		{
			for (int j = 0; j < w; ++j)
			{
				if (!visited[i][j])
					++count;
				else
					visited[i][j] = false;
			}
		}

		if (count == 0)
			cout << "There is no empty spots."<<"\n";
		else if (count == 1)
			cout << "There is one empty spot."<<"\n";
		else
			cout << "There are "<<count<<" empty spots."<< "\n";
	}
}