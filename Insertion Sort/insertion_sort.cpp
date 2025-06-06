// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

void insertion_sort(int arr[], int n){
    int curr, j;
    for (int i = 1; i < n; i++){
        curr = arr[i];
        j = i-1;
        
        while (j>=0){
            if (arr[j] > curr){
                arr[j+1]=arr[j];
                j-=1;
            }
            else{
                break;
            }
        }
        arr[j+1]=curr;
      
    }
}

int main() {
    // Write C++ code here
    int arr[] = { 12, 11, 13, 5, 6 };
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << "unsorted array:" << endl;
    for (int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    insertion_sort(arr,n);
    cout <<endl<< "sorted array: " << endl;
    for (int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    

    return 0;
}
