#ifndef RANGE_TREE_NODE_IPP_
#define RANGE_TREE_NODE_IPP_

#include "node.hpp"

#include "base_node.hpp"

namespace eda {

namespace range_tree {

template <typename T>
Node<T>::Node(int position) :
	BaseNode<T, Node<T> >(position)
{ }

template <typename T>
Node<T>::Node(int position, T data) :
	BaseNode<T, Node<T> >(position, data)
{ }

} // namespace range_tree

} // namespace eda

#endif // RANGE_TREE_NODE_IPP_
