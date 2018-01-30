#include <stdlib.h>
#include "quick_find.hpp"

int main()
{
	/* Quick-find (eager approach) */
	std::vector<int> id = { 0, 1, 1, 8, 8, 0, 0, 1, 8, 8}; // {0, 5, 6} {1, 2, 7} {3, 4, 8, 9}
	quick_find uf_quick = quick_find(id);
	std::cout << uf_quick.connectedUF(1, 2) << " TRUE " << uf_quick.connectedUF(2, 3) << " FALSE" << std::endl;
	uf_quick.printUF();
	uf_quick.unionUF(2, 3);
	uf_quick.printUF();

	return 0;
}