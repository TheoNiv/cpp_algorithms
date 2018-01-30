#include <stdlib.h>
#include "quick_find.hpp"
#include "quick_union.hpp"

int main()
{
	/* Quick-find (eager approach) */
	std::vector<int> id = { 0, 1, 1, 8, 8, 0, 0, 1, 8, 8}; // {0, 5, 6} {1, 2, 7} {3, 4, 8, 9}
	quick_find uf_quick = quick_find(id);
	std::cout << uf_quick.connectedUF(1, 2) << " TRUE " << uf_quick.connectedUF(2, 3) << " FALSE" << std::endl;
	uf_quick.printUF();
	uf_quick.unionUF(2, 3);
	uf_quick.printUF();
	/* Quick-union (lazy approach) */
	std::vector<int> idu = { 0, 1, 1, 2, 4, 4, 3, 5, 8, 9}; // {1, 2, 3, 6} {4, 5, 7} {8} {9}
	quick_union uf_quickunion = quick_union(idu);
	std::cout << uf_quickunion.connectedUF(1, 2) << " TRUE " << uf_quickunion.connectedUF(2, 7) << " FALSE" << std::endl;
	uf_quickunion.printUF();
	uf_quickunion.unionUF(6, 4);
	uf_quickunion.printUF();

	return 0;
}