#include <iostream>
using namespace std;

int main () {
     int arr[8] = {5,37,2,26,29,621,4,9};
     int n = 8;
     for(int i = n -2; i>=0; i-- ) {
        for(int j=0; j<=i; j++) {
            if (arr[j]>arr[j+1]) {
                swap(arr[j],arr[j+1]);
            }
        }
     }

      for(int i =0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
    return 0;
}