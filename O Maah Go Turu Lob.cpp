#include<bits/stdc++.h>
#include<string>    
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    for(int i=0; i<n; i++)
    {
       	cin>>s;
    	string val="AEIOUaeiou";
    	int a=0,b=0;
        for(int i=0; i<s.length(); i++){
           if(s[i]==val[0] || s[i]==val[1] || s[i]==val[2] || s[i]==val[3] || s[i]==val[4] || s[i]==val[5] || s[i]==val[6] || s[i]==val[7] || s[i]==val[8] || s[i]==val[9]){
    		for(int y=0;y<10;y++)
   			{
   				if(s[i]==val[y])
   					val[y]=0;
   			}
	   		}
        }
    	for(int y=0;y<10;y++)
    	{
    		if(val[y]>0&&y<5)
    			a++;
    		else if(val[y]>0&&y>4)
    			b++;
    	}
        if(a==0 || b==0){
        	cout<<"lovely string"<<endl;
    	}
    	else
    	{
    		cout<<"ugly string"<<endl;
    	}
    }
    	return 0;
}
