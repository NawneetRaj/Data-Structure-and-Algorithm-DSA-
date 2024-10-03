#include<iostream>
#include<vector>
using namespace std;

void reversearray(vector<int> &arr){
    int n = arr.size(); 
    vector<int> temp(n); 
    for(int i = 0; i < n; i++){
        temp[i] = arr[n-i-1]; 
    }
    for(int i = 0; i < n; i++){
        arr[i] = temp[i]; 
    }
}

int main(){
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    vector<int> arr(n); 

    cout << "Enter elements in array: ";
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    reversearray(arr);

    cout << "Reversed array: ";
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";
    
    return 0;
}
