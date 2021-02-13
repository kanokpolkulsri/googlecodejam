#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main() {
    int T, val = 0, level = 0;
    string S, Sout;
    cin >> T;
    for (int t=1; t<T+1; t++ ) {
        cin >> S;
        for (int i=0; i<S.length(); i++) {
            val = S[i] - '0';
            if(val == level) {
                Sout += S[i];
            }
            if(val > level) {
                for(int j=0; j<val-level; j++) {
                    Sout += "(";
                }
                Sout += S[i];
                level = val;
            }
            if(val < level) {
                for(int j=0; j<level-val; j++) {
                    Sout += ")";
                }
                Sout += S[i];
                level = val;
            }
            if(i == S.length() - 1 && level > 0) {
                for(int j=0; j<level; j++) {
                    Sout += ")";
                }
            }
        }
        val = 0;
        level = 0;
        cout << "Case #" << t << ": " << Sout << endl;
        Sout = "";
    }
    return 0;
}

/*
4
0000
101
111000
1
*/