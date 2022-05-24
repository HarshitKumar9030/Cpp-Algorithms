#include <iostream>
#include<algorithm>
using namespace std;

bool compare(int a,int b){
    return a>b;
}
int main() {
    //Find function
    int arr[]={10,21,32,32,32,32,43,54,65,76,87,98,1001};
    int key;
    cin>>key;
    int len=sizeof(arr)/sizeof(int);
    auto it=find(arr,arr+len,key);
    int index=(it-arr);
    if(index!=len){
        cout<<"Element is at "<<index<<endl;
    }
    else{
        cout<<"Oho!! Elemet is not present in the array!!"<<endl;
    }

//using Binary search function complexity is O(logN)
    bool result=binary_search(arr,arr+len,key);  //it return the boolean value
    if(result==true){
        cout<<"Element is Present!!!"<<endl;
    }
    else{
        cout<<"Element is Not Present!!!"<<endl;
    }

//Concept of Lower bound and Upper Bound
    //Lower Bound return the first address of the >=key present in the array for example lement 32
    auto it1=lower_bound(arr,arr+len,32);
    int index1=it1-arr;
    if(index1!=len){
    cout<<"Lower bound of the 32 is: "<<index1<<endl;
    }
    else{
        cout<<"Element is Absent!"<<endl;
    }

    //Upper Bound return the  address of the element which is next greater then the >=key present in the array for example for element 32
    auto it2=upper_bound(arr,arr+len,32);      //index of 43 in the array
    int index2=it2-arr;
   if(index2!=len){
    cout<<"Upper bound of the 32 is: "<<index2<<endl;
    }
    else{
        cout<<"Element is Absent!"<<endl;
    }
    //Hence we can calculate the frequncy of the 32 by above result
    cout<<"frequncy of the 32: "<<(index2-index1)<<endl;

    //Sort function
    int a[]={54,96,41,5687,32,12,54,32,03,664};
    int n=sizeof(a)/sizeof(int);
    sort(a,a+n);
    for(int i=0;i<n;i++)
    cout<<a[i]<<", ";
    cout<<endl;
//Sorting element in descending order
//method -1 using inbuit comparator
    sort(a,a+n,greater<int>());
    for(int i=0;i<n;i++)
    cout<<a[i]<<", ";
    cout<<endl;
//Method-2 using User defined comparator
    sort(a,a+n,compare);
    for(int i=0;i<n;i++)
    cout<<a[i]<<", ";
    cout<<endl;


    return 0;
}
