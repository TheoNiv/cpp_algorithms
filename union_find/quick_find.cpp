#include "quick_find.hpp"

quick_find::~quick_find()
{
}

bool quick_find::connectedUF(const int p, const int q) const
{
	return id_.at(p) == id_.at(q);
}

void quick_find::unionUF(const int p, const int q)
{
	int pid = id_.at(p);
	int qid = id_.at(q);
	for (int i = 0; i < id_.size(); ++i)
		if (id_.at(i) == pid) id_.at(i) = qid;
}

void quick_find::printUF() const
{
	std::vector<int> value;
	for (int j = 0; j < id_.size(); ++j)
		if (std::find(value.begin(), value.end(), id_.at(j)) != value.end());
		else	value.push_back(id_.at(j));

		for (int j = 0; j < value.size(); ++j)
	{
		int pid = value.at(j);
		for (int i = 0; i < id_.size(); ++i)
			if (pid == id_.at(i)) std::cout << i << " ";
		std::cout << std::endl;
	}
}
