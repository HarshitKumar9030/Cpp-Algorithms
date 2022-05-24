#include <iostream>
using namespace std;
int main() {
    //Dealing with 2d array by Dynamic memeory allocation
    int **arr; //declaring the array so that it can point to another array i.e of column
    int rw,cl;
    cin>>rw>>cl; //row and column
    //creat an array of row head
    arr=new int*[rw];
    //now generating the arrays and make point to the pointer head arr
    for(int i=0;i<rw;i++)
         arr[i]=new int[cl];
    //now initializing the array
    int val=1;
    for(int i=0;i<rw;i++){
        for(int j=0;j<cl;j++){
            arr[i][j]=val;
            val++;
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}


/*
Input
3 3 
Output
1 2 3 
4 5 6 
7 8 9 
*/
