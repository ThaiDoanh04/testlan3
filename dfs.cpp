#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<int> ds_ke[1001];
bool visited[1001];

void inp() {
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        int x, y;
        cin >> x >> y;
        ds_ke[x].push_back(y);
        ds_ke[y].push_back(x);
    }
    // Đánh dấu tất cả các đỉnh là chưa được thăm
    for (int i = 1; i <= n; i++) {
        visited[i] = false;
    }
}
//comments

void dfs(int u) {
    cout << u << " ";
    visited[u] = true;
    for (int v : ds_ke[u]) {
        if (!visited[v]) {
            dfs(v);
        }
    }
}

int main() {
    inp();
    dfs(1); // Bắt đầu DFS từ đỉnh 1
    return 0;
}
