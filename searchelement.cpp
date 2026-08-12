#include <iostream>
using namespace std;

int main () {
    int arr[5] = {8,3,6,9,3};
    int n;
    cout<<"Enter the element that you want to search:";
    cin>>n;
    int index = -1;

    for ( int i =0; i < 5; i++) {
        if(arr[i]==n) {
            index = i;
            break;
        }
    }
      cout<<index;

    return 0;
}