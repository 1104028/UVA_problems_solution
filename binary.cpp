#include<iostream>
using namespace std;
int main()
{
 int data[10]={10,12,15,20,25,32,33,36,40,45};
 int item,beg=0, end=10-1,mid;

 mid=(int)(beg+end)/2;

 cin>>item;

 while(beg<end && data[mid]!=item)
 {
     if(item<data[mid])
        end=mid-1;
     else
        beg=mid+1;
    mid=(int)(beg+end)/2;
 }
 if(data[mid]==item)
    cout<<"the item in the array";
 else
    cout<<"the item is not in the array";
}
