#include<iostream>
#include<string>
using namespace std;
char big[11][11];
char small[11][11];
int m, n;

bool polynomio(int ssi, int ssj)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (big[i][j] == '*')
            {
                for (int si = 0, li = i - ssi; si < n; si++, li++)
                {
                    for (int sj = 0, lj = j - ssj; sj < n; sj++, lj++)
                        if (small[si][sj] == '*')
                        {
                            if (li < 0 || lj < 0 || li >= m || lj >= m || big[li][lj] != '*')
                                return false;

                            big[li][lj] = '.';
                        }
                }
                return true;
            }
        }

    }
    return false;
}

int main()
{
    while (1)
    {
        cin >> m >> n;
        if (m == 0 && n == 0)
            break;
        for (int i = 0; i < m; i++)
        {
            cin >> big[i];
        }

        for (int i = 0; i < n; i++)
        {
            cin >> small[i];
        }
        int ssi = -1, ssj;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (small[i][j] == '*')
                {
                    ssi = i;
                    ssj = j;
                    break;
                }
            }
            if (ssi != -1)
                break;
        }

        int value;

        if (polynomio(ssi, ssj) && polynomio(ssi, ssj))
            value = 1;
        else
            value = 0;

        while (value)
        {
            for (int i = 0; i < m; i++)
            {
                for (int j = 0; j < m; j++)
                    if (big[i][j] == '*')
                    {
                        value = 0;
                    }
            }
            break;
        }

        cout << value << "\n";
    }
}
