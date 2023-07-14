
class Solution {
  public:
    long long sumOfSeries(long long N) {
        // code here    
        if(N==0||N==1)return N;
        else 
     {
           return pow(N,3)+sumOfSeries(N-1);
    }
    }
};