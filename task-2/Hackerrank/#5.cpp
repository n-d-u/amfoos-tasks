#include <iostream>


using namespace std;



int convert(char s[])
{
     
    if (s[8]=='A'||s[8]=='a')
    {
        
        if(s[0]=='1'&&s[1]=='2')
        {
          s[0]='0';
          s[1]='0';
          
        }    
    }
    else
    {  
        if(s[0]!='1'||s[1]!='2')
        
        {  s[0]+=1;
           s[1]+=2;
        }
    }
    s[8]='\0';
    cout<<s;
    return 0;
}



int main() {
	// your code goes here
	char s[10];
	cin>>s;
    
	convert (s);
	
	
	return 0;
}

