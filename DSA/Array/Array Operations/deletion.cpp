#include<iostream>
using namespace std;


int findelement(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) 
            return i;
    }
    return -1; 
}

int deleteelement(int arr[], int n, int key) {
    int pos = findelement(arr, n, key); 
    if (pos == -1) { 
        cout << "Element is not found in array." << endl;
        return n;
    }
    
    for (int i = pos; i < n - 1; i++)
        arr[i] = arr[i + 1];
    
    return n - 1; 
}

int main() {
    int arr[10]; 
    int n;
    
    cout << "Enter the number of elements in array: ";
    cin >> n;
    
    cout << "Enter the elements of array: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    
    cout << "Before deleting an element from array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
    
    int key;
    cout << "Enter the key: ";
    cin >> key;
    
    n=deleteelement(arr, n, key);

    cout << "After deleting an element from array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
    
    return 0;
}
