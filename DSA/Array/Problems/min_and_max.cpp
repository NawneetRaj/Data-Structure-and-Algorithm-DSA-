#include<iostream>
#include <limits.h>
using namespace std;

int setmin(int arr[],int n){
    int min=INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    return min;
}

int setmax(int arr[],int n){
    int max=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}

int main(){
    int arr[10];
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    cout<<"Enter element in array: ";
    for(int i=0; i<n; i++)
    cin>>arr[i];
    cout<<"Min Value in array: "<<setmin(arr,n)<<endl;
    cout<<"Max Value in array: "<<setmax(arr,n)<<endl;
    return 0;
}