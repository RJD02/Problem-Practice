#include <bits/stdc++.h>
using namespace std;

unordered_map<int, vector<int>> adjList;
unordered_map<int, bool> visited;
unordered_map<int, int> parent;
int v1, v2;
void addEdge(int u, int v) {
	adjList[u].push_back(v);
	adjList[v].push_back(u);
}

void dfs(int node) {
	for (auto i : adjList[node]) {
		if (!visited[i]) {
			visited[i] = true;
			parent[i] = node;
			dfs(i);
		}
	}
}

int main() {
	std::ios::sync_with_stdio(false);
	int n, e;
	cin >> n >> e;
	if (n == 0) return 0;
	for (int i = 0; i < e; i++) {
		int u, v;
		cin >> u >> v;
		addEdge(u, v);
	}
	cin >> v1 >> v2;
	if (v1 == v2) {
		cout << v1 << " ";
		return 0;
	}
	parent[v1] = -1;
	visited[v1] = true;
	dfs(v1);
	int t = v2;
	if (visited[t]) {
		while (t != -1) {
			cout << t << " ";
			t = parent[t];
		}
	}
	return 0;

}