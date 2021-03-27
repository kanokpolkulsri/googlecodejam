#include <iostream>
#include <sstream>
#include <string>
using namespace std;

void findCost(int* arr, bool* found, int n, int count, int pos, int cost, int method) {
    if(*found == true) return;
    int newArr[n+1];
    for(int i=0; i<n; i++) {
        newArr[i] = arr[i];
    }
    if(count < cost && pos > -1) {
        if(method == 1) {
            count += 1;
        }
        if(method == 2) {
            int reverseSize = n-pos;
            int reverseArray[reverseSize];
            for(int i=0; i<reverseSize; i++) {
                reverseArray[(reverseSize)-i-1] = newArr[pos+i];
            }
            for(int j=0; j<reverseSize; j++) {
                newArr[pos+j] = reverseArray[j];
            }
            count += reverseSize;
        }
        if(count == cost) {
            *found = true;
            for(int i=0; i<n; i++) {
                cout << newArr[i] << " ";
            }
            return;
        }
        findCost(newArr, found, n, count, pos-1, cost, 2);
        findCost(newArr, found, n, count, pos-1, cost, 1);
    }
}

int main()
{
    int T=0, n=0, c=0;
    string ans="";
    cin >> T;
    for(int t=1; t<=T; t++) {
        cin >> n >> c;
        int arr[n+1];
        for(int narr=1; narr<=n; narr++) {
            arr[narr-1] = narr;
        }
        if(n>c) {
            cout << "Case #" << t << ": ";
            if(n-1>c) {
                ans = "IMPOSSIBLE";
            }
            if(n-1==c) {
                for(int narr=0; narr<n-1; narr++) {
                    cout << arr[narr] << " ";
                }
            }
            continue;
        }
        bool found = false;
        int count = n-1;
        cout << "Case #" << t << ": ";
        findCost(arr, &found, n, count, n-2, c, 0);
        cout << endl;
    }
    return 0;
}