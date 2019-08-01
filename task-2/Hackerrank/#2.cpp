#include <iostream>
using namespace std;
#include <cmath>


int Diff (int n,int arr[][10])
{
    int diag1=0;
    int diag2=0;
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            if(i==j)
            {
                diag1+=arr[i][j];
            }
            
        }
        diag2+=arr[i][(n-1)-i];
    }
    
    cout<<abs(diag1-diag2);
    return 0;
}



int main() {
	// your code goes here
	int n;
	int arr[10][10];
	cin>>n;
	for (int i=0;i<n;i++)
	{
	    for (int j=0;j<n;j++)
	    {
	        cin>>arr[i][j];
	    }
	}
	Diff(n,arr);
	
	return 0;
}

