#include<iostream>
using namespace std;

int main() {
    int n = 32;
    int val = 11;
    int oldval = 11;
    int count = 0;

    // val<<1;

    // cout << (x<) << endl;
    for(int i=0; i < 32; i++) {
        val = val>>1;
        val = val<<1; 
        cout << (oldval != val);
        cout << " ";
        cout << (oldval);
        cout << " ";
        cout << (val) << endl;
        if(oldval != val){
            count ++;
        }
        if(val == 0){
            break;
        }
        val = val>>1;
        oldval = val;
    }
    cout << count << endl;
    return count;
}