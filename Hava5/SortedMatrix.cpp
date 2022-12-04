#include "SortedMatrix.h"

std::vector<std::vector<int>> SortedMatrix::SortEvenColums(std::vector<std::vector<int>> matrixValue, std::shared_ptr<ISort> sort)
{
	for (int i = 0;  i < digitSums.size();  i++)
	{
		sort->Sort(digitSums[i], static_cast<int>(digitSums[i].size()));
	}
	int counter = 0;
	for (int  j = 0; j < numberOfLines; j++)
	{
		
			for (int i = 0; i < numberOfColums; i++)
			{

				matrixValue[j][i] = digitSums[counter][i].GetDigit();
			}
			counter++;
	
	}
	return matrixValue;
}

std::vector<std::vector<DigitsSum>> SortedMatrix::GetDigitSum(std::vector<std::vector<int>> matrixValue)
{
	int counter = 0;
	std::vector<std::vector<DigitsSum>> tmp;
	for (int i = 0; i < numberOfLines; i++)
	{
		
		tmp.push_back(std::vector<DigitsSum>{});
		for (int j = 0; j < numberOfColums; j++)
		{
			tmp[counter].emplace_back(DigitsSum(i, j, matrixValue[i][j]));
		}
		counter++;
	}
	return tmp;
}


int SortedMatrix::GetNumberOflines()
{
	return numberOfLines;
}

int SortedMatrix::GEtNumberOfColums()
{
	return numberOfColums;
}

std::vector<std::vector<int>> SortedMatrix::GetMatrix()
{
	return matrix;
}

void SortedMatrix::Show()
{
	
	std::cout <<  std::endl;
	for (int i = 0; i < numberOfLines; i++)
	{
		for (int j = 0; j < numberOfColums; j++)
		{
			std::cout << matrix[i][j] << "\t";
		}
		std::cout << std::endl;
	}
	std::cout << "\n\n" << std::endl;
	
	std::cout << "\n\n" << std::endl;
}
