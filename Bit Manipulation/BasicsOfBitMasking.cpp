#include <bits/stdc++.h>
using namespace std;
int get_bit(int n,int i){
    int mask=1<<i;
    if(n&mask>0)
    return 1;
    else
    return 0;
    
    
}
void set_bit(int n, int i){
    int mask=1<<i;
    n=n|mask;
    cout<<"New number after bit "<<i<<" is set is: "<<n<<endl;
}
void clear_bit(int n,int i){
    int mask=1<<i;
    mask=~mask;
    cout<<"The bit "<<i<<" is cleared New number is: "<<(mask&n)<<endl;
}
void update_bit(int n, int i,int type){
    //1. clear the i-th bit
    int mask=1<<i;
    mask=~mask;
    mask=mask&n;
    
    //2. Create a new mask by left shift of type variable by i-times
    int mask2=type<<i;
    
    //3. do or by  both the mask
    cout<<"After update the "<<i<<" bit by "<<type<<" of number "<<n<<" new number is "<<(mask2|mask)<<endl;
    
}
void even_odd(int n){
    int mask=1;
    if(n&mask==1)
    cout<<"The number "<<n<<" is Odd"<<endl;
    else
    cout<<"The number "<<n<<" is even"<<endl;
}

int main() {
	int n;
	cin>>n;
	int i;
	cin>>i;
	int type;
	cin>>type;
	
	cout<<"Inputs are: N="<<n<<" i="<<i<<" type="<<type<<endl<<endl;
	cout<<"The "<<i<<" nd/th bit is: "<<get_bit(n,i)<<endl;
 	set_bit(n,i);
 	clear_bit(n,i);
 	update_bit(n,i,type);
    even_odd(n);
	return 0;
}

/*
Inputs are: N=7 i=2 type=0

Outputs:
The 2 nd/th bit is: 1
New number after bit 2 is set is: 7
The bit 2 is cleared New number is: 3
After update the 2 bit by 0 of number 7 new number is 3
The number 7 is Odd
*/
