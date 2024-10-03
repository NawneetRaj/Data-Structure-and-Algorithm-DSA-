#include<iostream>
using namespace std;

void reversearray(int arr[],int n){
    int temp;
    for(int i=0;i<n/2;i++){
        temp=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=temp;
    }
}

int main(){
    int arr[10];
    int n;

    cout<<"Enter the size of array: ";
    cin>>n;
    
    cout<<"Enter the element in array: ";
    for(int i=0; i<n;i++)
    cin>>arr[i];

    reversearray(arr,n);

    cout<<"Reveresed Array: ";
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";

    return 0;
}
