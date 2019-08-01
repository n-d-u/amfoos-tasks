#include <iostream>
using namespace std;

int Staircase(int n)
{
    for (int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
         if(j>=((n-1)-i))
           cout<<"#";
         else
           cout<<" ";
    
        } cout<<endl;    
    }
    
    return 0;
}




int main() {
	// your code goes here
    int n;
    cin>>n;
    Staircase(n);
    
	return 0;
}

