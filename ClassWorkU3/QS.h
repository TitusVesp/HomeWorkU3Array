#pragma once
#include <iostream>
#include <math.h>

using namespace std;

void MyQSort(int* begin, int* end)
{
	if (end - begin < 2) return;

	int* left = begin;
	int* right = end - 1;

	// Initially find a random pivot
	int* pivot = left + rand() % (right - left + 1);

	while (left != right)
	{
		// Find the lowest bound number to swap
		while (*left < *pivot) ++left;
		while (*right >= *pivot && left < right) --right;

		// Do the swap
		if (pivot == left) { pivot = right; }
		swap(*left, *right);
	}

	// Here l == r and numbers in the interval [begin, r) are lower and in the interval [l, end) are greater or equal than the pivot
	// Move pivot to the position
	swap(*pivot, *left);

	// Sort left
	MyQSort(begin, left);
	// Sort right
	MyQSort(left + 1, end);
}