#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int num = 0;

    int a = 0, b = 0, c = 0;
    cin >> num;
    while(num--) {
        cin >> a >> b >> c;
        int result = (a + b + c) - max({a, b, c}) - min({a, b, c});
        cout << result << "\n";
    }
}