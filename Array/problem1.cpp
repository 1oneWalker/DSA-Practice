// Maximum and minimum of an array
#include <iostream>
#include <climits>
using namespace std;

int main(){
    int n;
    cin >> n;

    int arr[n] ;
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    int minNo = INT_MAX;
    int maxNo = INT_MIN;

    for(int i=0; i<n; i++){
        if(arr[i]<minNo){
            minNo = arr[i];
        }
        maxNo = max(arr[i],maxNo);
    }

    cout << minNo<<" "<<maxNo<<endl;
}