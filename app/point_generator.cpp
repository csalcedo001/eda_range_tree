#include <iostream>
#include <chrono>
#include <random>

#define MAX_RANGE 10000

using namespace std;

int main() {
	unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();

	int n, d, m;

	cin >> n >> d >> m;

	std::default_random_engine generator(seed);
	std::uniform_int_distribution<int> point_distribution(0, MAX_RANGE);

	cout << n << ' '  << d << endl;

	for (int i = 0; i < n; i++) {
		cout << point_distribution(generator);
		
		for (int j = 1; j < d; j++) {
			cout << ' ' << point_distribution(generator);
		}
		cout << endl;
	}

	cout << m << endl;

	for (int i = 0; i < m; i++) {
		cout << point_distribution(generator);
		
		for (int j = 1; j < 2 * d; j++) {
			cout << ' ' << point_distribution(generator);
		}

		cout << endl;
	}

	return 0;
}
