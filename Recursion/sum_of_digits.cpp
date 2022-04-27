#include<iostream>
using namespace std;
#include <string> 

bool recurse1 (int num, int total) { 
    if(num == 0) {
        cout << total;
        return total;
    }
    cout << total + num % 10 << endl;
    return recurse1(num/10, total + num % 10);
}

int main() {
    int num = 12321;
    int ans = recurse1(num, 0);
    cout << ans << endl;
    return 0;
}

