#include <iostream>
using namespace std;

int main() {
    string n;
    int k;
    cin >> n >> k;

    long long sum = 0;

    for (int i = 0; i < n.length(); i++) {
        sum = sum + (n[i] - '0');
    }

    sum = sum * k;

    while (sum >= 10) {
        long long temp = 0;

        while (sum > 0) {
            temp = temp + (sum % 10);
            sum = sum / 10;
        }

        sum = temp;
    }

    cout << sum;

    return 0;
}
