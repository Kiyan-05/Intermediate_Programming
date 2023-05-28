#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

int main()
{
    char str[10], str1[10];
    strcpy(str,"HelloWorld");
    //strcpy(str1,"asdasdasdasdasdsadasd");
    cout<<str<<endl;
    cout<<strcmp(str,str1)<<endl;
    cout<<strlen(str)<<endl;
    string res = "Hello";
    cout<<res.at(1)<<endl;
    string res2 = "Hi";
    res.insert(0,res2);
    cout<<res<<endl;

    res.remove(0,2);
    cout<<res;
}
