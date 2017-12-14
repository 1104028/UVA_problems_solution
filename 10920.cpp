#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  while (true) {
    int sz;
    long long p;
    cin >> sz >> p;
    if (!sz && !p)
      break;
    long long x = (sz + 1) / 2, y = (sz + 1) / 2;
    cout<<"x:"<<x<<"\n";
    long long q = sqrt(static_cast<double>(p));
    cout<<"q:"<<q<<"\n";
      // max. odd number equal to or less than sqrt(p)
    if (q%2==0)
      q--;

    cout<<q<<"\n";
    x += (q - 1) / 2; y += (q - 1) / 2;
    cout<<"x:"<<x<<"\n";
    p -= q * q;
    cout<<"p:"<<p<<"\n";
    if (p) {
      q++;
      if (p <= q) {
        x -= p - 1; y++;

      }
      else if (p <= q * 2) {
        x -= q - 1; y -= p - q - 1;

      }
      else if (p <= q * 3) {
        x -= q * 3 - p - 1; y -= q - 1;
        cout<<"x:"<<x<<"\n";
        cout<<"y:"<<y<<"\n";
      }
      else {
        x++; y -= q * 4 - p - 1;
      }
    }
    cout << "Line = " << y << ", column = " << x << ".\n";
  }
  return 0;
}
