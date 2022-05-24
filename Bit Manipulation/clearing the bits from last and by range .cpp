#include <iostream>
using namespace std;
int clear_bits_from_last(int n,int i){
    int mask=(~0)<<i;
    return (n&mask);
}
int clear_bits_in_range(int n,int i,int j){
    //1. creating a part
    int a=(~0)<<j+1;
    int b=(1<<i)-1;
    int mask=a|b;
    return mask&n;
    
}
int main() {
	int n,i,j;
	cin>>n>>i>>j;
	cout<<"After clearing the last "<<i<<" bits from "<<n<<" the new number is: "<<clear_bits_from_last(n,i)<<endl;
	cout<<"After clearing the range of bits from "<<i<<" to "<<j<<" the number become: "<<clear_bits_in_range(n,i,j)<<endl;
	return 0;
}

/*
inputs:
        158 1 4
outputs:
        After clearing the last 1 bits from 158 the new number is: 158
        After clearing the range of bits from 1 to 4 the number become: 128

*/
