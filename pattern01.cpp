#include <iostream>
using namespace std;

int main() {
    int i, j;
    for(i=1;i<=5;i++) {
        for(j=1;j<=i;j++) {
            if(j==i||i-j==2||i-j==4) {
                cout<<"1";
            }
            else {
                    cout<<"0";
                }
            }
            cout<<endl;

        }
        return 0;
    }
