#include <iostream>
using namespace std;

int abbr(int n,char tes[][100],int len[100])
{
    //int length=0;
    for(int i=0;i<n;i++)
    {   //length=0;
          
             
                 if(len[i]>10)
                 {
                    cout<<tes[i][0]<<len[i]-2<<tes[i][len[i]-1];
                 }
                 else
                 for(int j=0;j<len[i];j++)
                    cout<<tes[i][j];
              cout<<endl;
        
    }
}






int main() {
	// your code goes here
	int n;int len[100];
	cin>>n;
	char str[100];
    char tes[100][100];
    for(int i=0;i<n;i++)      
    {   len[i]=0;
        cin>>str;
       for(int temp=0;str[temp]!='\0';temp++)
          len[i]++;
        for(int j=0;j<len[i];j++)
             tes[i][j]=str[j];
        
    }
  
    
    abbr(n,tes,len);
	return 0;
}

