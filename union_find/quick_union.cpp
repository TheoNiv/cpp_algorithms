#include "quick_union.hpp"

quick_union::~quick_union()
{
}

bool quick_union::connectedUF(const int p, const int q)
{
	return getRoot(p) == getRoot(q);
}

void quick_union::unionUF(const int p, const int q)
{
	// basic approach
	// id_.at(getRoot(q)) = getRoot(p);
	// weight approach (by height) (also possible by size of the tree)
	(getHeight(p) < getHeight(q))? id_.at(getRoot(p)) = getRoot(q): id_.at(getRoot(q)) = getRoot(p);
}

void quick_union::printUF() const
{
	//lazy display
	for (int i = 0; i < id_.size(); ++i)
		std::cout << id_.at(i) << "=>" << i << " ";
	std::cout << std::endl;
}

int quick_union::getRoot(const int p)
{
	int pid = p;
	std::vector<int> saved_path;
	while (id_.at(pid) != pid)
	{
		saved_path.push_back(pid);
		pid = id_.at(pid);
	}
	for (int i = 0; i < saved_path.size(); ++i) id_.at(saved_path.at(i)) = pid; // path compresion modification
	return pid;
}

int quick_union::getHeight(const int p) const
{
	int pid = p;
	int cpt = 1;
	while (id_.at(pid) != pid)
	{
		cpt++;
		pid = id_.at(pid);
	}
	return cpt;
}
