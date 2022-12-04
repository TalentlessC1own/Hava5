#pragma once
#include "ISort.h"

class ShellSort : public ISort
{
public:


	void PrintCounters() override;

	void Sort(std::vector<DigitsSum>& arr, int size) override;

	
};

