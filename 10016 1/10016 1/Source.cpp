#include <iostream>
#include <algorithm>
using namespace std;

int n;
int board[110][110], tmp[110][110];

void print_board()
{
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (j==n-1)
			cout << board[i][j];
			else
				cout << board[i][j] << " ";
		}
		cout << "\n";
	}
}


void change_matrix(int ring)
{
	for (int i = ring; i < n-ring; i++)
	{
		for (int j = ring; j < n-ring; j++)
		{
			if ((i > ring && i < n-ring - 1) && (j > ring && j <n- ring - 1))
			{
			}
			else
				board[i][j] = tmp[i][j];
		}
	}

}
void upside_down_flip(int ring)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			tmp[i][j] = board[n-i-1][j];
		}
	}

	change_matrix(ring);
}

void left_right_flip(int ring)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			tmp[j][i] = board[j][n - i - 1];
		}
	}
	change_matrix(ring);
}
void flip_through_main_diagonal(int ring)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			tmp[i][j] = board[j][i];
		}
	}

 change_matrix(ring);
}
void flip_through_main_inverse_diagonal(int ring)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			tmp[i][j] = board[n - j - 1][n - i - 1];
		}
	}

	change_matrix(ring);
}

int main(void) {
	int cases, t, c;

	cin >> cases;

	while (cases--) {
		cin >> n;

		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				cin >> board[i][j];
			}
		}

		int rings = (n % 2 == 0) ? n / 2 : n / 2 + 1;
		for (int ring = 0; ring < rings; ring++) {
			cin >> t;
			while (t--) {
				cin >> c;
				switch (c) {
				case 1:
					upside_down_flip(ring);
					break;
				case 2:
					left_right_flip(ring);
					break;
				case 3:
					flip_through_main_diagonal(ring);
					break;
				case 4:
					flip_through_main_inverse_diagonal(ring);
					break;
				}
			}
		}

		print_board();
	}

	return 0;
}