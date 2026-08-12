#include <iostream>
#include <climits>
using namespace std;

int main () {
    int arr[7] ={7,4,63,2,6,10,5};

    int largest = INT_MIN, sec_largest = -1;

    for (int i =0; i<7; i++) {
        if (arr[i]>largest) {
            sec_largest = largest;
            largest= arr[i];
        }

        else if(arr[i]<largest && arr[i]>sec_largest) {
            sec_largest = arr[i];
        }
    }
    
    cout<<sec_largest;
    return 0;
}