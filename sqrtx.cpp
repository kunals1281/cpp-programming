#include <iostream>
using namespace std;

int main() {
    int x;
    cin>>x;

    int start=1,end = x;
    int mid;
    int ans =0;

    while(start<=end) {
        mid = start + (end-start)/2;
        if(mid*mid==x) {
            ans = mid;
            break;
        }

        else if ( mid < x/mid) {
            ans = mid;
            start = mid+1;

        }

        else {
            end = mid - 1;
        }
    }

    cout<<ans;
}