#ifndef RANGE_TREE_BASE_NODE_HPP_
#define RANGE_TREE_BASE_NODE_HPP_

namespace eda {

namespace range_tree {

template <typename T, class Node>
class BaseNode {
public:
	Node *low_;
	Node *high_;
	Node *down_;
	int position_;

	T data_;

	BaseNode(int);
};

} // namespace range_tree

} // namespace eda

#include "impl/base_node.ipp"

#endif // RANGE_TREE_BASE_NODE_HPP_
