#include <iostream>
#include <vector>
using namespace std;

int N, M;
vector<int> arr;

void dfs(int start) {
    if ((int)arr.size() == M) {
        for (int i = 0; i < M; i++) {
            cout << arr[i];
            if (i != M - 1) cout << ' ';
        }
        cout << '\n';
        return;
    }

    for (int i = start; i <= N; i++) {
        arr.push_back(i);
        dfs(i + 1);
        arr.pop_back();
    }
}

int main() {
    cin >> N >> M;
    dfs(1);
    return 0;
}
