#include<bits/stdc++.h>
using namespace std;

int armstrong(int n)
{   int lastdigit,count,temp = n,N= n;
   int finalno;
      while (N>0)
    {
        /* code */
        count=count+1;
        N=N/10;
        
    }
    while(n>0)
    {
        lastdigit = n%10;
        finalno = finalno + pow(lastdigit,count);
        n = n/10;
    }
    if(temp==finalno)
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
    if(armstrong(n)== 1)
    {
        cout<<"armstrong";
    }
    else{
        cout<<"false";
    }
}