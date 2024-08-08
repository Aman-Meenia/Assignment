/*
 Author: Aman Meenia
 Created:
 */
#include<bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;


void Function() {

    int n ;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    int cnt = 0;
    for (auto it : v) {
        if (it % 2 == 1) {
            cnt++;
        }
    }

    cout << " Cnt of odd number is " << cnt << endl;

}

int main() {


    int t = 1;
// cin >>t;

    while (t--) {
        Function();
    }

}
