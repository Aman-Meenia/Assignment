/*
 Author: Aman Meenia
 Created:
 */
#include<bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;


// The function counts the number of occurrences of the 
// center element in an odd-dimensioned square matrix and
// returns its count. If the matrix is not square or has
//  even dimensions, it returns 0.


int whatDoIDo(vector<vector<int> > & matrix , int m, int n) {
    if (m == n && m % 2 != 0) {
        int  count = 0;
        int  t = (m - 1) / 2;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (matrix[i][j] == matrix[t][t]) count++;

            }
        }
        return count;
    }
    return 0;
}




int main() {
#ifndef ONLINE_JUDGE
    // for getting input
    freopen("input1.txt", "r", stdin);
    // for writing output
    freopen("output1.txt", "w", stdout);
#endif

    int t = 1;
// cin >>t;

    while (t--) {
        Function();
    }

}
