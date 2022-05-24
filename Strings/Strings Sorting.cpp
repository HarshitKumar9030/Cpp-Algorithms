#include <iostream>
#include<string>
#include<algorithm>
using namespace std;

bool cmp(string s1,string s2)
{
    if(s1.length()==s2.length())
    return s1<s2;
    else
    return s1.length()<s2.length();
    
}

int main() {
	int n;
	cin>>n;
	cin.get(); //will consume the '\n' that is newline character
	string str[100]; //array of strings
	for(int i=0;i<n;i++)
	{
	    getline(cin,str[i]);
	}
	cout<<"Before Sorting the strings are"<<endl;
	for(int i=0;i<n;i++)
	{
	    cout<<str[i]<<endl;
	}
	sort(str,str+n);
	cout<<"****Lexiographically Sorting the strings****"<<endl;
	for(int i=0;i<n;i++)
	{
	    cout<<str[i]<<endl;
	}
	sort(str,str+n,cmp);
	cout<<"****Sorting the strings by their length in descending if same length then Lex****"<<endl;
	for(int i=0;i<n;i++)
	{
	    cout<<str[i]<<endl;
	}
	
	return 0;
}
