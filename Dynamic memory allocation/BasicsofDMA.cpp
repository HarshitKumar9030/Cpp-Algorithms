#include <iostream>
using namespace std;

int main() {
    //declaring the new variable dynamically using new operator
    int *a=new int; //memory allocated during run time in heap
    cin>>*a; //taking input
    cout<<sizeof(*a); //allocated size of a
    cout<<a<<endl; //address of a
    cout<<*a<<endl; //output
    delete a; //free up the memory allocated to a from heap
    //declaring array array dynamically
    int size=5; //size of array is 5
    int *arr=new int [size];
    for (int i=0;i<size;i++)
    cin>>arr[i];
    cout<<sizeof(*arr)<<endl; //size of array
    cout<<arr<<endl;  //address of the array variable
    cout<<"Array elemets"<<"| Address of the Array Elemets"<<endl;
    for(int i=0;i<size;i++){
        cout<<"    "<<(*arr)+i<<"        |  "<<(arr+i)<<endl;
    }
	return 0;
}
