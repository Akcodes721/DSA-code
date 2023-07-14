#include<bits/stdc++.h>
using namespace std;

int pali(int n)
{   int lastdigit,rno;
    int og = n;
    while(n>0)
    {
        lastdigit = n%10;
        rno = rno*10 + lastdigit;
        n = n/10;
    }
    if(og == rno)
    {
        return 1;
    }
    else return 0;
    
}
int main()
{
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    if(pali(n)== 1)
    {
        cout<<"Palindrome";
    }
    else{
        cout<<"false";
    }