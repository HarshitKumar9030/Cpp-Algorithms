#include<bits/stdc++.h>
using namespace std;
void shieve_fun(int n){
    bool prime[n+1];
    memset(prime,true,sizeof(prime));
	//shieve theorem
    for(int i=2;i*i<=n;i++){
        
        if(prime[i]==true){
            
            for(int j=i*i;j<=n;j+=i){
                prime[j]=false;
            }
        }
    }
	long long int res=0;
    for(int i=2;i<=n;i++){
        if(prime[i]){
             cout<<i<<" "; //generate the all prime numbers
             res++;
        }

    }
    cout<<endl;
    cout<<"Total Prime numbers till "<<n<<" is "<<res<<endl;
}
int main()
 {
	
	    int n;
	    cin>>n;
	    shieve_fun(n);
	return 0;
}
