#include<iostream>
using namespace std;
void insertelement(int arr[],int n,int x,int pos){
    for(int i=n-1;i>=pos;i--)
    arr[i+1]=arr[i];
    arr[pos]=x;
}

int main(){
    int arr[10];
    int n,x,index;
    cout<<"Enter number of element: ";
    cin>>n;
    cout<<"Enter the before element in array: ";
    for(int i=0;i<n;i++)
        cin>>arr[i];
    
    cout<<"Before insertion Array : ";
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    
    cout<<"Enter the Value which you want to insert: ";
    cin>>x;
    cout<<"Enter the index value where you want to inset: ";
    cin>>index;
    

    insertelement(arr,n,x,index);
    n++;

    cout<<"After insetionn Array: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
return 0;
}