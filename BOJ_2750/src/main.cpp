#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int N;
    cin >> N;

    vector<int> values(N);
    for (int i = 0; i < N; ++i)
    {
        int v;
        cin >> v;

        values[i] = v;
    }

    sort(values.begin(), values.end());

    for (const auto& var : values)
    {
        cout << var << '\n';
    }

    return 0;
}