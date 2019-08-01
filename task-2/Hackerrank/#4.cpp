#include <iostream>
using namespace std;



int birthdayCakeCandles(int n,int candles[])
{
    int temp=0;int count=0;
    for (int i=0;i<n;i++)
    {
        if(candles[i]>temp)
            temp=candles[i];
            
    }
    for(int i=0;i<n;i++)
    {
        if (temp==candles[i])
           count++;
           
    }
    return count;
}



int main() {
	// your code goes here
	int n;
	int candles[100];
	cin>>n;
	for(int i=0;i<n;i++)
	{
	    cin>>candles[i];
	    
	}
	cout<<birthdayCakeCandles(n,candles);
	
	return 0;
}

