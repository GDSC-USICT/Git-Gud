#include <iostream>
#include <vector>

int search(std::vector<int> &arr, int target)
{
	int i;
	for (i = 0; i < arr.size(); i++)
		if (arr[i] == target)
			return i;
	return -1;
}

int main(void)
{
	std::vector<int> v = { 1,2,3,4,5 };
	int target = 3;

	int index = search (v, target);
	if (index == -1)
		std::cout<<"element not found \n";
	else
		std::cout<<"element found at index = "<<index;
	return 0;
}
