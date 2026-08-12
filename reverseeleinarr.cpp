#include <iostream>
using namespace std;

int main () {
    int arr[6] = {2,6,1,8,3,9};
    int n = 6;
    int j = n-1;

    for (int i =0; i<=j; i++) {
        swap(arr[i], arr[j]);
        j--;
    }

    for(int i =0; i <n ; i++) {
        cout<<arr[i];
    }
}