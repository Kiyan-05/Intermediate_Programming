#include <iostream>
using namespace std;

int countFriends(int **knows,int n, int p);
int isFamous(int **knows,int n, int p);
int isThereCelebrity(int **knows, int n, int p);

int main()
{
    //Initialize 2d array knows
    int **knows = (int**)calloc(3, sizeof(int*));
    for(int i=0; i < 3; i++)
        knows[i] = (int*)calloc(3, sizeof(int));

    int k[3][3] = {{1,1,1},{1,1,1},{0,0,1}};
    for(int i=0; i < 3; i++)
        for(int j=0; j < 3; j++)
            knows[i][j] = k[i][j];

    //Let n be the number of person
    //let p be the person to check his relationship among others
    int n = 3;
    int p = 3;

    cout<<"Person p"<<p<<" total friends: "<<countFriends(knows,n,p)<<"\n";

    if(isFamous(knows,n,p))
        cout<<"Person p"<<p<<" is famous!"<<"\n";
    else
        cout<<"Person p"<<p<<" isn't famous!"<<"\n";

    if(isThereCelebrity(knows,n,p))
        cout<<"Person p"<<p<<" is a Celebrity!"<<"\n";
    else
        cout<<"Person p"<<p<<" isn't a Celebrity!"<<"\n";
}

int countFriends(int **knows, int n, int p)
{
    int cnt = 0;
    for(int i=0; i < n-1; i++)
    {
        if(knows[p-1][i] == knows[i][p-1])
            cnt++;
    }
    return cnt;
}

int isFamous(int **knows, int n, int p)
{
    for(int i=0; i<n; i++)
    {
        if(knows[p-1][i]!=knows[i][p-1])
            return 0;
    }
    return 1;
}

int isThereCelebrity(int **knows, int n, int p)
{
    for(int i=0; i<n-1; i++)
    {
        if(knows[p-1][i]==knows[i][p-1])
            return 0;
    }
    return 1;
}
