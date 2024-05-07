#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define ll long long

int main(){
    vector<ll> vi;
    int t;
    cin >> t;
    while(t--){
        ll y,x;
        ll m;
        ll s;
        cin >> y >> x;
        m = max(y, x);
        if(m % 2 == 0){
            if(x >= y){
                s = (m - 1) * (m - 1) + y;
            } else {
                s = (m - 1) * (m - 1) + 2 * y - x;
            }
        } else {
            if(x <= y){
                s = (m - 1) * (m - 1) + x;
            } else {
                s = (m - 1) * (m - 1) + 2 * x - y;
            }
        }
        vi.push_back(s);
    }
    for(size_t i = 0; i < vi.size(); i++){
        cout << vi[i] << endl;
    }
    return 0;
}
