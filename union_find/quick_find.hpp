#pragma once
#include <vector>
#include "iostream"

class quick_find
{
	std::vector<int> id_;

public:
	quick_find(std::vector<int> id) : id_(id) {};
	~quick_find();

	bool connectedUF(const int p, const int q) const;
	void unionUF(const int p, const int q);
	void printUF() const;
};

