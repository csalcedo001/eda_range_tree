#ifndef RANGE_TREE_BASE_NODE_IPP_
#define RANGE_TREE_BASE_NODE_IPP_

namespace eda {

namespace range_tree {

template <typename T, class Node>
BaseNode<T, Node>::BaseNode(int position) :
	low_(nullptr),
	high_(nullptr),
	down_(nullptr),
	position_(position)
{ }

} // namespace range_tree

} // namespace eda

#endif // RANGE_TREE_BASE_NODE_IPP_
