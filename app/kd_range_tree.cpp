#include <iostream>

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

	tree.print();

	return 0;
}
