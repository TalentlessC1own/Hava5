#pragma once
#include "ISort.h"
#include <iostream>

class QuickSort : public ISort
{
public:
	void PrintCounters() override;

	void Sort(std::vector<DigitsSum>& arr, int size) override;
	void Quicksort(std::vector<DigitsSum>& arr, int start, int end);

	int Partition(std::vector<DigitsSum>& arr, int start, int end);
};

