#ifndef RANGE_TREE_BASE_KD_RANGE_TREE_HPP_
#define RANGE_TREE_BASE_KD_RANGE_TREE_HPP_

namespace eda {

namespace range_tree {

template <typename T, class Node>
class BaseKDRangeTree {
private:
	Node *head_;

public:
	BaseKDRangeTree(int, std::vector<std::vector<int> >);
	~BaseKDRangeTree();

	std::vector<std::vector<int> > query(std::vector<int> &, std::vector<int> &);
	void print();

private:
	void print(Node *, int);
	void kill(Node *);
};

} // namespace range_tree

} // namespace eda

#endif // RANGE_TREE_BASE_KD_RANGE_TREE_HPP_
