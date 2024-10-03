#include<iostream>
using namespace std;

int setmax(int arr[],int n){
    int max=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}

int factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

int main(){
    int arr[10],n;
    cout<<"Enter the size of Array: ";
    cin>>n;

    cout<<"Enter element in array: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int a= setmax(arr,n);
    cout<<"Large number of Array: "<<a;
    cout<<"Factorial of Large number "<<a<<" is: "<<factorial(a);

    return 0;
}