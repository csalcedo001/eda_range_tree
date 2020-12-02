#include <iostream>
#include <chrono>
#include <random>

#define MAX_RANGE 100

using namespace std;

int main() {
	unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();

	int n;

	cin >> n;

	std::default_random_engine generator(seed);
	std::uniform_int_distribution<int> point_distribution(0, MAX_RANGE);

	for (int i = 0; i < n; i++) {
		cout << point_distribution(generator) << ' ' << point_distribution(generator) << endl;
	}

	return 0;
}