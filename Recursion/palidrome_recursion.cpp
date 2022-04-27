#include<iostream>
using namespace std;

bool recurse1 (string str, int start, int end) { 
    cout << start;
    cout << end;
    cout << str << endl;
    if(start >= end){
        cout << "end" << endl;
        cout << str << endl;

        return true;
    }
    cout << str[start];
    cout << str[end] << endl;
    if(str[start] == str[end]){
    cout << str << endl; 
        recurse1(str, start + 1, end -1);
    } else {
        cout << "end2" << endl;
        return false;
    }
}

int main() {
    string str = "abba";
    bool ans = recurse1(str, 0, str.length());
    cout << ans << endl;

    return 1;
}

