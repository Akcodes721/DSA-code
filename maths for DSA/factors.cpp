    #include<bits/stdc++.h>
    using namespace std;
    int factors(int n)
    {   int count = 0;
       for(int i=1;i<=n;i++)
        {
            if(n%i==0)
            {
                cout<<i<<endl;
                count++;
            }
        }
         cout<<"No of factors are:"<<count;
    }
   
    int main()
    {
        int n;
        cout<<"Enter the number"<<endl;
        cin>>n;
        factors(n);
    }
