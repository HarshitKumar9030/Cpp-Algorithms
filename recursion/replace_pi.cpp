#include<bits/stdc++.h>
using namespace std;
void replace_pi(char *str,int s){
    if(str[s]=='\0' and str[s+1]=='\0')
    return;
    
    if(str[s]=='p' and str[s+1]=='i')
    {
        int j=s+2;
        //need to shift the array elemets by 2 space bcz we already have pi i.e. 2 character to hold '3' and '.'
        //remaining space need to store '1' and '4' for '3.14'
        //point j to end of the str;
        while(str[j]!='\0')
        {
            j++;
        }
        //Now shifting the remaining element
        while(j>=s+2)
        {
            str[j+2]=str[j];
            j--;
        }
        //replace the pi 
        str[s]='3';
        str[s+1]='.';
        str[s+2]='1';
        str[s+3]='4';
        replace_pi(str,s+4);
    }
    replace_pi(str,s+1);
        
}
int main(){
    char str[1000];
    cin>>str;
    replace_pi(str,0);
    cout<<str;
return 0;
}

/*
Input:
ghdpimj
Output:
ghd3.14mj

Here replacing pi with 3.14
*/
