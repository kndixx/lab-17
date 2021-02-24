#include <iostream>
using namespace std;
#include <vector>

int main() {
    int n, k, l;
    
    cin >> n;
    
    vector<int> a(n);
    
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    
    int diff = 0;
    diff = a[1] - a[0];
    for (int i = 1; i < n - 1; ++i) {
        if (a[i + 1] - a[i] != diff) {
            cout << 0;
            return 0;
        }
    }
    
    cout << diff;
    
    return 0;
}