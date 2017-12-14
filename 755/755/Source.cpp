#include<iostream>
#include<string>
using namespace std;
string line;
string charc,number;
int main()
{
	int tc,dataset;
	cin >> tc;
	while (tc--)
	{
		cout << endl;
		cin >> dataset;
		
		for (int i = 0; i < dataset; i++)
		{
			cin >> line;
			int l = line.length();
			int countl = 0;
			for (int j = 0; j < l; j++)
			{
				if (line[j] == 'A' || line[j] == 'B' || line[j] == 'C')
				{
					charc[j] = '2' - '0';
				}
				else if (line[j] == 'D' || line[j] == 'E' || line[j] == 'F')
				{
					charc[j] = '3' - '0';
				}
				else if (line[j] == 'G' || line[j] == 'H' || line[j] == 'I')
				{
					charc[j] = '4' - '0';
				}
				else if (line[j] == 'J' || line[j] == 'K' || line[j] == 'L')
				{
					charc[j] = '5' - '0';
				}
				else if (line[j] == 'M' || line[j] == 'N' || line[j] == 'O')
				{
					charc[j] = '6' - '0';
				}
				else if (line[j] == 'P' || line[j] == 'R' || line[j] == 'S')
				{
					charc[j] = '7' - '0';
				}
				else if (line[j] == 'T' || line[j] == 'U' || line[j] == 'V')
				{
					charc[j] = '8'-'0';
				}
				else if (line[j] == 'W' || line[j] == 'X' || line[j] == 'Y')
				{
					charc[j] = '9' - '0';
				}
				else
					charc[j] = line[j];


				if (line[j] == '-')
					countl++;

			}

			/*if (countl == 0)
			{
				for (int  k = 0; k <=l; k++)
				{
					if (k == 3)
					{
						number[k] = '-';
					}
					else if (k<3)
						number[k] = charc[k]; 

					else if (k>3)
						number[k] = charc[k-1];
				}
			}*/


			for (int k = 0; k < l; k++)
			{
				cout << charc[k];
			}
		}
	}
}