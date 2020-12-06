#ifndef RANGE_TREE_KD_RANGE_TREE_IPP_
#define RANGE_TREE_KD_RANGE_TREE_IPP_

#include "kd_range_tree.hpp"

#include <vector>

#include "base_kd_range_tree.hpp"
#include "node.hpp"

namespace eda {

namespace range_tree {

template <typename T>
KDRangeTree<T>::KDRangeTree(int dimensions, std::vector<std::vector<int> > points) :
	BaseKDRangeTree<T, Node<T> >(dimensions, points)
{ }

} // namespace range_tree

} // namespace eda

#endif // RANGE_TREE_KD_RANGE_TREE_IPP_
