#include <iostream>
#include <vector>
using namespace std;

int main() {
    string printString = "";
    vector<vector<int>> pairs;

    while (true) {
        int n, m;
        float bestPrice = 1000.0;

        cin >> n >> m;

        if (n == 0 && m == 0) {
            break;
        }

        vector<int> entry(2, 0);
        for (int i = 0; i < n; i++) {
            int a, b;
            cin >> a >> b;
            if (a > m) {
                continue;
            } else if (b / (a * 1.0) < bestPrice) {
                bestPrice = b / (a * 1.0);
                entry[0] = a;
                entry[1] = b;

            } else if (b / (a * 1.0) == bestPrice && a > entry[0]) {
                entry[0] = a;
                entry[1] = b;
            }
        }
        pairs.push_back(entry);
    }

    for (int i = 0; i < pairs.size(); i++) {
        if (pairs[i][0] != 0) {
            cout <<  "Buy " << pairs[i][0] << " tickets for $" << pairs[i][1] << "\n";
        } else {
            cout << "No suitable tickets offered\n";
        }
    }
}