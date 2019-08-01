#include <iostream>
#include <string>
using namespace std;

int main(){
    // your code goes here
    int n,x=0;
    cin>>n;

    string a;
    for (int i=0;i<n;i++)
    {
        cin>>a;
        if (a[1]=='+')
            ++x;
        else
            --x;
    }

    cout<<x;
    return 0;
}
