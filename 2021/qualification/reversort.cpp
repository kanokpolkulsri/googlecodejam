#include <iostream>
#include <sstream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int T=0, n=0, ans=0;
    cin >> T;
    for(int t=1; t<=T; t++) {
        cin >> n;
        int arr[n+1];
        for(int i=0; i<n; i++) {
            cin >> arr[i];
        }
        for(int i=0; i<n-1; i++) {
            int min = arr[i];
            int pos_min = i;
            for(int j=i; j<n-1; j++) {
                // find min
                if(arr[j+1] < min) {
                    min = arr[j+1];
                    pos_min = j+1;
                }
            }
            ans += pos_min-i+1;
            for(int m=0; m<(pos_min-i)/2; m++) {
                int tmp = arr[pos_min];
                arr[pos_min] = arr[m+i];
                arr[m+i] = tmp;
            }
        }
        cout << "Case #" << t << ": " << ans << endl;
        ans = 0;
    }
    return 0;
}