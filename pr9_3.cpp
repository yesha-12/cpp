#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> s;
    int n, x;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> x;
        s.insert(x);
    }

    cout << "Unique sorted elements: ";
    for (auto it = s.begin(); it != s.end(); it++) {
        cout << *it << " ";
    }
    cout<<"\n25cs032";
    return 0;
}