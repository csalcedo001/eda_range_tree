#ifndef RANGE_TREE_KD_RANGE_TREE_HPP_
#define RANGE_TREE_KD_RANGE_TREE_HPP_

#include <vector>

#include "base_kd_range_tree.hpp"
#include "node.hpp"

namespace eda {

namespace range_tree {

template <typename T>
class KDRangeTree : public BaseKDRangeTree<T, Node<T> > {
public:
	KDRangeTree(int, std::vector<std::vector<int> >);
};

} // namespace range_tree

} // namespace eda

#include "impl/kd_range_tree.ipp"

#endif // RANGE_TREE_KD_RANGE_TREE_HPP_
