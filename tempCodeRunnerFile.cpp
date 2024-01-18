#include<bits/stdc++.h>
using namespace std;

int main() {
    long long t;
    cin >> t;

    while (t--) {
        long long n, p, t, l;
        cin >> n >> p >> l >> t;

        long long daysOff = 0;
        long long count = 1;
        long long sum = 0;

        while (p > sum && count <= n) {
            if (count % 7 == 1 && count / 7 % 2 == 1) {
                sum += 2 * t + l;
                n--;
            } 
            count++;
        }

        while (p > sum && n > 0) {
            sum += l;
            n--;
        }

        if (p <= sum) {
            cout << n << endl;
        } else {
            long long a = n;
            sum = 0;
            count = 1;

            while (p > sum) {
                if (count % 7 == 1) {
                    sum += t + l;
                    a--;
                } else {
                    sum += l;
                }

                if (a <= 0) break;
                count++;
            }

            cout << a << endl;
        }
    }

    return 0;
}
