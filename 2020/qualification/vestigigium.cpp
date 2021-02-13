#include <iostream>
#include <set>

using namespace std;

int main(){
    int T, N;
    cin >> T;
    for(int t=1; t<=T; t++) {
        cin >> N;
        int arr[N][N];
        for(int i=0; i<N; i++) {
            for(int j=0; j<N; j++) {
                cin >> arr[i][j];
            }
        }
        
        // find k
        int k=0;
        for(int i=0; i<N; i++) {
            k += arr[i][i];
        }
        
        // find r
        int r=0;
        for(int i=0; i<N; i++){
            
set<int> s;
            for(int j=0; j<N; j++) {
                if(s.find(arr[i][j]) != s.end()) {
                    r += 1;
                    break;
                }
                s.insert(arr[i][j]);
            }
        }
        
        // find c
        int c=0;
        for(int i=0; i<N; i++) {
            set<int> s;
            for(int j=0; j<N; j++) {
                if(s.find(arr[j][i]) != s.end()) {
                    c += 1;
                    break;
                }
    
 s.insert(arr[j][i]);
            }
        }
        
        cout << "Case #" << t << ": " << k << " " << r << " " << c << endl;
    }

    return 0;
}

/*
input
3
4
1 2 3 4
2 1 4 3
3 4 1 2
4 3 2 1
4
2 2 2 2
2 3 2 3
2 2 2 3
2 2 2 2
3
2 1 3
1 3 2
1 2 3
*/