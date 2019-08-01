#include <iostream>
#include <cstdio>
using namespace std;

int comp(int n,int k,int ar[])
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(ar[i]>=ar[k-1]&&ar[i]!=0)
            count++;
    }
    cout<<count;
    return 0;
}

int main() {
	// your code goes here
	int n,k;
	int ar[50];
	scanf("%d",&n);
	scanf("%d",&k);
	
	for(int i=0;i<n;i++)
	{
	    scanf("%d",&ar[i]);
	    
	}
	comp(n,k,ar);
	
	return 0;
}

