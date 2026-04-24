#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v;
    int n, x;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> x;
        v.push_back(x);
    }

    
    vector<int> v1 = v;
    reverse(v1.begin(), v1.end());

    cout << "Reverse using library: ";
    for (auto i : v1)
        cout << i << " ";

    cout<<"25cs032";

   

    return 0;
}