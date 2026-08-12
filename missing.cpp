#include <iostream>
using namespace std;

int main () {
    int arr[8] = {9,6,4,3,7,2,1,5};
    int array_sum = 0;
    int n = 9;
    int sum = n*(n+1)/2;

    for ( int i = 0; i<8; i++ ) {
        array_sum += arr[i];
    }

    cout<<sum-array_sum;
    return 0;
}