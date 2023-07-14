// Online C++ compiler to run C++ program online
#include <iostream>

int main() {
    // Write C++ code here
    std::cout << "Hello world!\n";
    int i,j,n =4;
    
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i;j++)
        {
            std::cout<<"*"<<" ";
        }
        std::cout<<"\n";
    }
    return 0;
}
