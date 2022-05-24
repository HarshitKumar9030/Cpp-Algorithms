//string tokenization using function strtok()
#include <iostream>
#include<cstring>
using namespace std;
int main() {
	char str[100]="Praveen Kumar Srivas NIT Surathkal Karnataka";
	char *ptr=strtok(str," ");
	while(ptr!=NULL)
	{
	   cout<<ptr<<endl;
	    ptr=strtok(NULL," ");
	}
	return 0;
}
