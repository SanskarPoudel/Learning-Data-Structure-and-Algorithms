#include<bits/stdc++.h>
using namespace std;

void pattern1(int n){
    for (int i = 1; i <= n;i++){
        for (int j = 1; j <= n;j++){
            cout << "* ";
        }
        cout << endl;
    }
}

void pattern2(int n){
    for (int i = 1; i <= n;i++){
        for (int j = 1; j <= i;j++){
            cout << "* ";
        }
        cout << endl;
    }
}

void pattern3(int n){
    for (int i = 1; i <= n;i++){
        for (int j = 1; j <= i;j++){
            cout << j<<" ";
        }
        cout << endl;
    }
}

void pattern4(int n){
    for (int i = 1; i <= n;i++){
        for (int j = 1; j <= i;j++){
            cout << i << " ";
        }
        cout << endl;
    }
}



int main(){

    int n;
    cout << "Enter value of n: ";
    cin >> n;
    pattern4(n);

    return 0;
}