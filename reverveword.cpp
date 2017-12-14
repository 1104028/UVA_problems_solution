#include<bits/stdc++.h>
using namespace std;

void printReverse(char str[])
{
    int length = strlen(str);
    int i;
    int temp,begin=length-1;
    for (i =length-1; i >=0; i--)
    {
        if (str[i] == ' ')
        {
            temp=i;
            while(temp<=begin)
            {
                printf("%c", (str[temp+1]));
                temp++;
            }
            begin=i-1;
        }
        if (i==0)
        {
            temp=i;
            while(temp<=begin)
            {
                printf("%c", (str[temp]));
                temp++;
            }
        }
    }
}
int main()
{
    char str[] = "i bangladesh is my country";
    printReverse(str);
    return 0;
}
