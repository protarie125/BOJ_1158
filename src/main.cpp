#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n, k;
	cin >> n >> k;

	auto q = queue<int>{};
	for (int i = 1; i <= n; ++i) {
		q.push(i);
	}

	auto v = vector<int>{};
	v.reserve(n);
	auto x = int{ 1 };
	while (!q.empty()) {
		auto f = int{ q.front() };
		q.pop();

		if (k == x) {
			v.push_back(f);
			x = 1;
		}
		else {
			q.push(f);
			++x;
		}
	}

	cout << '<';
	for (int i = 0; i < n - 1; ++i) {
		cout << v[i] << ", ";
	}
	cout << v[n - 1] << '>';

	return 0;
}