#ifndef RANGE_TREE_BASE_KD_RANGE_TREE_IPP_
#define RANGE_TREE_BASE_KD_RANGE_TREE_IPP_

#include <iostream>
#include <vector>

#include "base_kd_range_tree.hpp"
#include "compare.hpp"

namespace eda {

namespace range_tree {

template <typename T, class Node>
BaseKDRangeTree<T, Node>::BaseKDRangeTree(int dimensions, std::vector<std::vector<int> > points) :
	head_(nullptr),
	dimensions_(dimensions)
{
	Compare cmp(0);

	std::sort(points.begin(), points.end(), cmp);

	this->build(this->head_, points, 0, points.size() - 1, 0);
}

template <typename T, class Node>
BaseKDRangeTree<T, Node>::~BaseKDRangeTree() {
	this->kill(this->head_);
}

template <typename T, class Node>
std::vector<std::vector<int> > BaseKDRangeTree<T, Node>::query(std::vector<int> &lower, std::vector<int> &higher) {
	return this->query(this->head_, lower, higher, 0);
}

template <typename T, class Node>
void BaseKDRangeTree<T, Node>::print() {
	this->print(this->head_, 0);
}

template <typename T, class Node>
void BaseKDRangeTree<T, Node>::build(Node *&node, std::vector<std::vector<int> > &points, int low, int high, int dimension) {
	if (low > high || dimension == this->dimensions_) return;
	if (low == high) {
		node = new Node(points[low][dimension]);
		return;
	}

	int mid = (low + high) / 2;

	Node *low_child, *high_child;

	this->build(low_child, points, low, mid, dimension);
	this->build(high_child, points, mid + 1, high, dimension);

	node = new Node((low_child->position_ + high_child->position_) / 2);

	node->low_ = low_child;
	node->high_ = high_child;

	std::vector<std::vector<int> > copy(points.begin() + low, points.begin() + high + 1);
	Compare cmp(dimension + 1);

	std::sort(copy.begin(), copy.end(), cmp);

	this->build(node->down_, copy, 0, copy.size() - 1, dimension + 1);
}

template <typename T, class Node>
std::vector<std::vector<int> > BaseKDRangeTree<T, Node>::query(Node *node, std::vector<int> &lower, std::vector<int> &higher, int dimension) {
	if (node == nullptr) return {};
	if (lower[dimension] > higher[dimension]) return {};

	if (node->low_ == nullptr && node->high_ == nullptr) {
		if (dimension == this->dimensions_ - 1) return std::vector<std::vector<int> >(1, std::vector<int>(1, node->position_));
		else this->query(node->down_, lower, higher, dimension + 1);
	}

	std::vector<std::vector<int> > low_points, high_points;

	if (lower[dimension] < node->position_) low_points = this->query(node->low_, lower, higher, dimension);
	if (higher[dimension] >= node->position_) high_points = this->query(node->high_, lower, higher, dimension);

	low_points.insert(low_points.end(), high_points.begin(), high_points.end());

	return low_points;
}

template <typename T, class Node>
void BaseKDRangeTree<T, Node>::print(Node *node, int level) {
	if (node == nullptr) return;

	this->print(node->high_, level + 1);
	this->print(node->low_, level + 1);

	for (int l = 0; l < level; l++) {
		std::cout << "    ";
	}
	std::cout << node->position_ << std::endl;

	this->print(node->down_, level + 1);
}

template <typename T, class Node>
void BaseKDRangeTree<T, Node>::kill(Node *node) {
	if (node == nullptr) return;

	this->kill(node->low_);
	this->kill(node->high_);
	this->kill(node->down_);

	delete node;
}

} // namespace range_tree

} // namespace eda

#endif // RANGE_TREE_BASE_KD_RANGE_TREE_IPP_
