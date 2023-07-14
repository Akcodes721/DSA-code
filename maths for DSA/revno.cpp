#include<bits/stdc++.h>
using namespace std;

int revno(int n)
{   int lastdigit,rno;
    while(n>0)
    {
        lastdigit = n%10;
        rno = rno*10 + lastdigit;
        n = n/10;
    }
    return rno;
}
int main()
{
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    int reversedno = revno(n);
    cout<< reversedno;
}