#include "SelectionSort.h"

void SelectionSort::PrintCounters()
{
	std::cout << "Selectionsort" << std::endl;
	ISort::PrintCounters();
}

void SelectionSort::Sort(std::vector<DigitsSum>& arr, int size)
{
	for (int i = 0; i < size - 1; i++)
	{
		DigitsSum tmp = arr[i];
		int tmpid = i;
		for (int j = i + 1; j < size; j++)
		{
			comparisonCounter++;
			if (arr[tmpid].GetValue() <  arr[j].GetValue())
			{
				tmp = arr[j];
				tmpid = j;
			}
		}
		if (tmpid != i)
		{
			swapCounter++;
			std::swap(arr[i], arr[tmpid]);
		}
	}
}
