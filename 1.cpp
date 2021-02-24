#include <iostream>
using namespace std;
#include <vector>

int main() {
    int n, k, l;
    
    cin >> n >> k >> l;
    
    vector<int> a(n);
    
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    
    double sum = 0;
    for (int i = k; i <= l; ++i) {
        sum += a[i];
    }
    
    cout << sum / (l - k + 1);
    
    return 0;
}