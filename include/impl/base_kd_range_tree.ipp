#ifndef RANGE_TREE_BASE_KD_RANGE_TREE_IPP_
#define RANGE_TREE_BASE_KD_RANGE_TREE_IPP_

namespace eda {

namespace range_tree {

template <typename T, class Node>
BaseKDRangeTree<T, Node>::BaseKDRangeTree(int dimensions, std::vector<std::vector<int> > &points) :
	head_(nullptr)
{ }

template <typename T, class Node>
BaseKDRangeTree<T, Node>::~BaseKDRangeTree() {
	this->kill_(this->head_);
}

template <typename T, class Node>
std::vector<std::vector<int> > BaseKDRangeTree<T, Node>::query(std::vector<int> &lower, std::vector<int> &higher) {
	// TODO

	return {};
}

template <typename T, class Node>
void BaseKDRangeTree<T, Node>::print() {
	this->print(this->head_, 0);
}

template <typename T, class Node>
void BaseKDRangeTree<T, Node>::print(Node *node, int level) {
	if (this->node == nullptr) return;

	// TODO
}

template <typename T, class Node>
void BaseKDRangeTree<T, Node>::kill(Node *node) {
	if (this->node == nullptr) return;

	// TODO
}

} // namespace range_tree

} // namespace eda

#endif // RANGE_TREE_BASE_KD_RANGE_TREE_IPP_
