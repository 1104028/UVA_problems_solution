#include<bits/stdc++.h>
using namespace std;

void printReverse(char str[])
{
    int length = strlen(str);
    int i;
    int temp=0,begin=0;
    for (i =0; i <=length; i++)
    {
        if (str[i] == ' ' || str[i]=='\0')
        {
            temp=i;
            while(temp>=begin)
            {
                printf("%c", (str[temp]));
                temp--;
            }
            begin=i+1;
        }
    }
}
int main()
{
    char str[] = "i like this program very much";
    printReverse(str);
    return 0;
}
