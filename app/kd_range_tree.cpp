#include <iostream>
#include <chrono>

#include "kd_range_tree.hpp"

using namespace std;

int main() {
	int n, d;

	cin >> n >> d;

	vector<vector<int> > points(n, std::vector<int>(d, 0));

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < d; j++) {
			cin >> points[i][j];
		}
	}

	eda::range_tree::KDRangeTree<int> tree(d, points);

	int m;

	cin >> m;

	std::vector<int> lower(d), higher(d);

	auto begin = chrono::steady_clock::now();
	auto end = begin;

	double total_time = 0;

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < d; j++) {
			cin >> lower[j];
		}
		for (int j = 0; j < d; j++) {
			cin >> higher[j];
		}

		begin = chrono::steady_clock::now();
		auto results = tree.query(lower, higher);
		end = chrono::steady_clock::now();

		total_time += chrono::duration_cast<chrono::microseconds>(end - begin).count();
	}

	cout << "Total time: " << total_time << " us" << endl;
	cout << "Average query time: " << total_time / m << " us" << endl;

	return 0;
}
