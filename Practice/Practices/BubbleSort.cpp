#include <iostream>
using namespace std;

int main() {
    int var[5]={5,4,2,1,3};
    int temp;
    int siz = sizeof(var)/sizeof(int);

    for(int i=0; i<siz; i++)
    {
        for(int j=i+1; j<siz; j++)
        {
            if(var[i]>var[j])
            {
                temp = var[i];
                var[i] = var[j];
                var[j] = temp;
            }
        }
    }

    for(int i=0; i<siz; i++)
    {
        cout<<var[i]<<",";
    }
}
