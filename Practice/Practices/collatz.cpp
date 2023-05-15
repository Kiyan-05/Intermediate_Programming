#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> sum(1001,0);
    //Storing Collatz Sum of each sequence from 10 to 1000
    for(int n=10; n<=1000; n++)
    {
        int temp = n;
        while(temp!=1)
        {
            sum[n] += temp;
            if(temp%2)
                temp = 3*temp+1;
            else
                temp/=2;
        }
        sum[n]++;
        cout<<n<<" -- "<<sum[n]<<"\n";
    }
    //Get maximum sum in sum vector
    int maxSum = 0;
    for(auto v : sum)
    {
        if(v>maxSum)
            maxSum = v;
    }
    cout<<maxSum;
}
