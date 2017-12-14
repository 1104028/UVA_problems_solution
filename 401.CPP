#include <iostream>
#include <cstdio>
using namespace std;
void palindrome(string str)
{
    int l=str.length();

    for(int i=0;i<=l/2;i++)
    {
        swap(str[i],str[l-i-1]);
    }
}
int main()
{
   string s,a;


}


