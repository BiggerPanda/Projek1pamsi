#pragma once

template<typename I>
void divideandsort(I* tab, I left, I right)
{
	if (right <= left) { return; }

	I mid = (left + right) / 2;

	divideandsort(tab, mid + 1, right);
	divideandsort(tab, left, mid);
}
