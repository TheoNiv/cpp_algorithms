#pragma once
#include <vector>
#include "iostream"

class quick_union
{
	std::vector<int> id_;

public:
	quick_union(std::vector<int> id) : id_(id) {};
	~quick_union();

	bool connectedUF(const int p, const int q) const;
	void unionUF(const int p, const int q);
	void printUF() const;
	int getRoot(const int p) const;
};

