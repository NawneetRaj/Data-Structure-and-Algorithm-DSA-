#include<iostream>
using namespace std;

int findelement(int arr[], int n, int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key)
        return i;
    }
        return -1;
}

int main(){
    int arr[10];
    int n;
    cout<<"Enter the number of array: ";
    cin>>n;
    cout<<"Enter the element in array: ";
    for(int i=0; i<n; i++)
    cin>>arr[i];

    int key;
    cout<<"Enter the key: ";
    cin>>key;

    int a=findelement(arr,n,key);
    if(a==-1)
    cout<<"Element not found in array.";
    else
    cout<<"Element "<<key<<" found in array at position "<<a+1;
    return 0;
}