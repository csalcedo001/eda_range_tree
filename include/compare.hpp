#ifndef RANGE_TREE_COMPARE_HPP_
#define RANGE_TREE_COMPARE_HPP_

#include <vector>

namespace eda {

namespace range_tree {

struct Compare {
	int d;

	Compare(int);

	bool operator()(std::vector<int> a, std::vector<int> b);
};

} // namespace range_tree

} // namespace eda

#endif //  RANGE_TREE_COMPARE_HPP_
