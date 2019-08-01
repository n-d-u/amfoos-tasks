#include <iostream>
using namespace std;
int res[2];


int compare(int a[],int b[])
{
    for (int i=0;i<3;i++)
    {
        if (a[i]>b[i])
              res[0]++;
        else if(b[i]>a[i])
              res[1]++;
        
        
            
        
    }
    return 0;
}






int main() {
	// your code goes here
	res[0]=0;
	res[1]=0;
	int a[3],b[3];
	cout<<"Enter Alice's rating";
	for (int i=0;i<3;i++)
	{
	    cin>>a[i];
	}
	cout<<"\nEnter Bob's rating";
	for (int i=0;i<3;i++)
	{
	    cin>>b[i]; 
	}
   compare (a,b);	
	cout<<"\n["<<res[0]<<","<<res[1]<<"]";
	return 0;
}

