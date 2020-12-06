#ifndef RANGE_TREE_NODE_HPP_
#define RANGE_TREE_NODE_HPP_

#include "base_node.hpp"

namespace eda {

namespace range_tree {

template <typename T>
class Node : public BaseNode<T, Node<T> >{
public:
	Node(int);
	Node(int, T);
};

} // namespace range_tree

} // namespace eda

#include "impl/node.ipp"

#endif // RANGE_TREE_NODE_HPP_
