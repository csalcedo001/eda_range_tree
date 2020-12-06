#ifndef RANGE_TREE_BASE_KD_RANGE_TREE_HPP_
#define RANGE_TREE_BASE_KD_RANGE_TREE_HPP_

#include <vector>

namespace eda {

namespace range_tree {

template <typename T, class Node>
class BaseKDRangeTree {
protected:
	Node *head_;
	int dimensions_;

public:
	BaseKDRangeTree(int, std::vector<std::vector<int> >);
	~BaseKDRangeTree();

	std::vector<std::vector<int> > query(std::vector<int> &, std::vector<int> &);
	void print();

protected:
	void build(Node *&, std::vector<std::vector<int> > &, int, int, int);
	std::vector<std::vector<int> > query(Node *, std::vector<int> &, std::vector<int> &, int);
	void print(Node *, int);
	void kill(Node *);
};

} // namespace range_tree

} // namespace eda

#include "impl/base_kd_range_tree.ipp"

#endif // RANGE_TREE_BASE_KD_RANGE_TREE_HPP_
