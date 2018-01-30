#include "quick_union.hpp"

quick_union::~quick_union()
{
}

bool quick_union::connectedUF(const int p, const int q) const
{
	return getRoot(p) == getRoot(q);
}

void quick_union::unionUF(const int p, const int q)
{
	id_.at(getRoot(q)) = getRoot(p);
}

void quick_union::printUF() const
{
	//lazy display
	for (int i = 0; i < id_.size(); ++i)
		std::cout << id_.at(i) << "=>" << i << " ";
	std::cout << std::endl;
}

int quick_union::getRoot(const int p) const
{
	int pid = p;
	while (id_.at(pid) != pid) pid = id_.at(pid);
	return pid;
}
