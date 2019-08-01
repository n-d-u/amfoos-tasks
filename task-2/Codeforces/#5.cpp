#include <iostream>
#include <string>
using namespace std;

int comp(string arr)
{
    int flag=1;
    for(int i=0;i<arr.length();i++)
    {
        if(arr[i]==arr[i-1])
        {
            ++flag;
            if(flag==7)
              {
                  cout<<"YES"; 
                  return 0;
              }
        }
        else 
         flag=1;
    }
     if (flag==1)
         cout<<"NO";
    return 0;
}




int main() {
	// your code goes here
	string arr;
	cin>>arr;
	comp(arr);
     


    return 0;
}
