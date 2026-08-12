#include <iostream>
using namespace std;

int main () {
    int arr[8] = {5,37,2,26,29,621,4,9};

    int n = 8;

    for ( int i =0; i<n-1; i++) {
        int index =i;
        for(int j = i +1; j<n; j++) {
            if ( arr[j]<arr[index]) {
                index =j;
            }
        }

        swap(arr[index],arr[i]);
    }

    for(int i =0; i<n; i++) {
        cout<<arr[i]<<" ";
    }

    return 0;
}