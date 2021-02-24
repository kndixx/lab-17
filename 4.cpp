#include <iostream>
using namespace std;
#include <vector>

int main() {
    int n;
    
    cin >> n;
    
    vector<int> a(n);
    
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    
    int x = 0;
    for (int i = 1; i < n; ++i) {
        if (i == n - 1) {
            if (a[i] > a[i - 1]) {
                x = i;
            } 
        } else {
            if (a[i] > a[i - 1] && a[i] > a[i + 1]) {
                x = i;
            }
        }
    }
    
    cout << x;
    
    return 0;
}