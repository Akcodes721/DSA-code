// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    cout << "Hello world!\n";
    int i,j,n =4;
    int start =1 ;
    for(i=0;i<n;i++)
    {   
        if(i%2==0) start=1;
          else start = 0;
       for(j=0;j<i+1;j++)
        {
          cout<<start<<" ";
          start = 1 - start;
        }
     
        cout<<"\n";
    }
    return 0;
}
