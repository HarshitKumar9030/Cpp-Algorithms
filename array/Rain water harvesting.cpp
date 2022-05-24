#include<bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin>>n;
	int bld[n];
	for(int i=0;i<n;i++)
	cin>>bld[i];

	//left building heights;
	int lbld[n];
	int max1=bld[0];
	int max_lbld[n];
    int i=0;
	for(i=0;i<n;i++)
	{
		
		 max1=max(bld[i],max1);
		 max_lbld[i]=max1;

	}
    //reverse the main array
    reverse(bld,bld+n);
    //cout<<bld[0];
     int max2=bld[0];
     //cout<<max2;
     int max_rbld[n];
    for(i=0;i<n;i++)
    {
        max2=max(bld[i],max2);
        max_rbld[i]=max2;

     }
      reverse(bld,bld+n);
      reverse(max_rbld,max_rbld+n);
	//applying the formula TOTAL WATER SAVING=TOTAL(min(max_lbld[i],max_rbld[i])-height of bld[i])
    int res=0;
	for(i=0;i<n;i++)
	{
		res+=(min(max_lbld[i],max_rbld[i]))-bld[i];
	}
	cout<<res<<endl;
	return 0;
}
