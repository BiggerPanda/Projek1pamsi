#include "Divideandconquest.h"


void divideandsort(int *tab,int left,int right)
{
	if (right <= left) { return; }

	int mid = (left + right) / 2;

	divideandsort(tab, mid+1, right);
	divideandsort(tab, left, mid);
}
