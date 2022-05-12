// Given an integer array nums, find the contiguous subarray (containing at least one number) which has the largest sum and return its sum.

#include "bits/stdc++.h"
using namespace std;

#define vi vector<int>
#define vvi vector<vi>
#define pii pair<int,int>
#define vii vector<pii>
#define rep(i, a, b) for(int i = 0; i < b; i++)
#define ff first
#define ss second
#define setBits(x) builtin_popcount(x)

const int N = 1e5 + 2;

int main(){

    int n;
    cin >> n;

    vi a(n);
    rep(i,0,n)
    {
        cin >> a[i];
    }

    int sum = 0;
    int maxi = INT_MIN;
    rep(i, 0, n)
    {
        sum += a[i];
        maxi = max(sum, maxi);
        if (sum < 0)
            sum = 0;
    }
    cout << maxi<<endl;

}