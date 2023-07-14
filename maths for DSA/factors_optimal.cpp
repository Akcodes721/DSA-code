    #include<bits/stdc++.h>
    using namespace std;
    int factors(int n)
    {   int count = 0;
       for(int i=1;i*i<=n;i++)//for(int i=1;i<=sqrt(n);i++) can also be used but will have a higher complexity as a result of sqrt function
        {
            if(n%i==0)
            {
                cout<<i<<endl;
                   if(n/i!=i)
                {
                    cout<<n/i<<endl;
                }
            }
        }
    }
   
    int main()
    {
        int n;
        cout<<"Enter the number"<<endl;
        cin>>n;
        factors(n);
    }
