#include <iostream>
#include<algorithm>
using namespace std;
int main() {
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(int);
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
        cout<<endl;
    //rotate the array using rotate() function
    rotate(arr,arr+3,arr+n);   //syntax---> rotate(StartOfArray,StartKeyToRotate,EndOfArray)
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
                
  //next_permutation() Function generates the next permutation of the elements 
  cout<<endl<<"---Next Permutaion---"<<endl;  
    int brr[]={10,20,30}; 
    n=sizeof(brr)/sizeof(int);
        for(int i=0;i<n;i++)
             cout<<brr[i]<<" ";
            cout<<endl;  
    next_permutation(brr,brr+n);
     for(int i=0;i<n;i++)
        cout<<brr[i]<<" ";
        cout<<endl;

//generating all the permuataions of the brr[]

    while(true){
         for(int i=0;i<n;i++)
           cout<<brr[i]<<" ";
           cout<<endl;
        if(!next_permutation(brr,brr+n))
        break;
    }
return 0;
}
