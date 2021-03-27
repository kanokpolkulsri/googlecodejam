#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main() {
    int T=0, x=0, y=0, count=0;
    string s;
    cin >> T;
    for(int t=1; t<=T; t++) {
        cin >> x >> y >> s;
        for(int i=0; i<s.length()-1; i++) {
            if(i==0) {
                if(s[i+1] == 'C') s[i+1] = 'C';
                if(s[i+1] == 'J') s[i+1] = 'J';
                continue;
            }
            if(s[i] == '?' && s[i+1] == '?') {
                if(s[i-1] == 'C') s[i] = 'C';
                if(s[i-1] == 'J') s[i] = 'J';
                continue;
            }
            if(s[i] == '?' && s[i+1] == 'C') {
                if(s[i-1] == 'J') {
                    if(y > x) {
                        s[i] = 'J';
                        continue;
                    }
                }
                s[i] = 'C';
                continue;
            }
            if(s[i] == '?' && s[i+1] == 'J') {
                if(s[i-1] == 'C') {
                    if(y > x) {
                        s[i] = 'C';
                        continue;
                    }
                }
                s[i] = 'J';
                continue;
            }
        }
        // calculation
        for(int i=0; i<s.length()-1; i++) {
            if(s[i] == 'C' && s[i+1] == 'J') count += x;
            if(s[i] == 'J' && s[i+1] == 'C') count += y;
        }
        cout << "Case #" << t << ": " << count << endl;
        count = 0;
    }
    return 0;
}