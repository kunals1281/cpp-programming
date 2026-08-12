#include <iostream>
using namespace std;

int main() {
    int row, col; 
    int n=5;
    for(row=1; row<=n; row++) {
        for(col=4; col>=row; col--) {
            cout<<"  ";
        }
        for(col=1; col<=5; col++) {
            cout<<"* ";
        }
        cout<<endl;
    }
    
    
    return 0;
}