#include "compare.hpp"

namespace eda {

namespace range_tree {

Compare::Compare(int d) :
	d(d)
{ }

bool Compare::operator()(std::vector<int> a, std::vector<int> b) {
	return a[this->d] < b[this->d];
}

} // namespace range_tree

} // namespace eda
