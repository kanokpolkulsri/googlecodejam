#include <iostream>
#include <sstream>
#include <string>
#include <algorithm>
using namespace std;

int findMinPos(int* arr, int start, int n) {
    int pos_min = 0, min = arr[start];
    for(int i=start+1; i<n; i++) {
        if(arr[i] < min) {
            pos_min = i;
            min = arr[i];
        }
    }
    return pos_min;
}

int main() {
    int T=0, n=0, ans=0, min=0, pos_min=0;
    cin >> T;
    for(int t=1; t<=T; t++) {
        cin >> n;
        int arr[n+1], reverseArr[n+1];
        for(int i=0; i<n; i++) {
            cin >> arr[i];
        }
        for(int i=0; i<n-1; i++) {
            pos_min = findMinPos(arr, i, n);
            min = arr[pos_min];
            if(pos_min == 0) {
                ans += 1;
                continue;
            }

            // reverse
            int tmpReverse[pos_min+1];
            for(int p=0; p<=pos_min-i; p++) {
                tmpReverse[p] = arr[pos_min-p];
            }
            for(int j=i; j<pos_min+1; j++) {
                arr[j] = tmpReverse[j-i];
            }
            ans += pos_min-i+1;
        }
        cout << "Case #" << t << ": " << ans << endl;
        ans = 0;
    }
    return 0;
}