#include<bits/stdc++.h>
using namespace std;
string str[10]={"ZERO","ONE", "TWO", "THREE", "FOUR", "FIVE", "SIX", "SEVEN", "EIGHT", "NINE"};
void printInWords(int n){
    if(n==0)
    return;
    printInWords(n/10);
    cout<<str[n%10]<<" ";
    return;
}
int main(){
    int n;
    cin>>n;
    printInWords(n);
return 0;
}

/*
Input:
123
Output:
ONE TWO THREE
*/
