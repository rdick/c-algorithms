#include<iostream>
using namespace std;
#include <string> 

int recurse1 (int num, int total) { 
    if(num == 0) {
        cout << total << endl;
        return total;
    }
    // cout << total + num % 10 << endl;
    return recurse1(num/10, total + num % 10);
}

int main() {
    int num = 212;
    int ans = recurse1(num, 0);
    cout << "dog" << endl;
    cout << ans << endl;
    return 0;
    // why am I getting 91 as answer => it is adding 1 to the end of everything
}

