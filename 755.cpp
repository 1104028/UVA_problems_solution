#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;
string line;
string charc;

map<string,int> number;
map<string,int>::iterator it;
int main()
{
    int tc,dataset;
    int l;
    cin >> tc;
    while (tc--)
    {
        cout << endl;

        cin >> dataset;

        for (int i = 0; i < dataset; i++)
        {
            cin >> line;
            l = line.length();
            int m=0;
            for (int j = 0; j < l; j++)
            {
                if(m==3)
                {
                    charc[3]='-';
                    m++;
                }
                if (line[j] == 'A' || line[j] == 'B' || line[j] == 'C')
                {
                    charc[m] = '2';
                    m++;
                }
                else if (line[j] == 'D' || line[j] == 'E' || line[j] == 'F')
                {
                    charc[m] = '3';
                    m++;
                }
                else if (line[j] == 'G' || line[j] == 'H' || line[j] == 'I')
                {
                    charc[m] = '4';
                    m++;
                }
                else if (line[j] == 'J' || line[j] == 'K' || line[j] == 'L')
                {
                    charc[m] = '5';
                    m++;
                }
                else if (line[j] == 'M' || line[j] == 'N' || line[j] == 'O')
                {
                    charc[m] = '6';
                    m++;
                }
                else if (line[j] == 'P' || line[j] == 'R' || line[j] == 'S')
                {
                    charc[m] = '7';
                    m++;
                }
                else if (line[j] == 'T' || line[j] == 'U' || line[j] == 'V')
                {
                    charc[m] = '8';
                    m++;
                }
                else if (line[j] == 'W' || line[j] == 'X' || line[j] == 'Y')
                {
                    charc[m] = '9';
                    m++;
                }
                else
                {
                    if(line[j]!='-')
                    {
                        charc[m]=line[j];
                        m++;
                    }
                }
            }

            for(int n=0;n<m;n++)
                cout<<charc[n];
            it=number.find(charc);
			if(it==number.end()){
				number.insert(pair<string,int>(charc,1));
			}
			else{
				it->second=it->second+1;
			}
        }
        bool found=false;
		for(it=number.begin();it!=number.end();it++){
			if(it->second>1){
				found=true;
				cout << it->first << " " << it->second << endl;
			}
		}
		if(!found){
			cout<< "No duplicates." << endl;
		}
    }
}
