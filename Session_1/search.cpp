#include <iostream>
#include <vector>

int search(std::vector<int> v, int l, int r, int target)
{
	while (l < r)
	{
		int mid = (l + r) / 2;
		if (v[mid] == target)
		{
			return mid;
		}
		else if (v[mid] > target)
		{
			r = mid - 1;
		}
		else if (v[mid] < target)
		{
			l = mid + 1;
		}
	}
	return -1;
}

int main(void)
{
	std::vector<int> v = {1, 2, 3, 4, 5};
	int target = 3;

	int index = search(v, 0, v.size() - 1, target);
	if (index == -1)
		std::cout << "element not found \n";
	else
		std::cout << "element found at index = " << index;
	return 0;
}
