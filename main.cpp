#include <iostream>

int main()
{
	int inputSize{};

	std::cout << "Array Size : ";
	std::cin >> inputSize;

	if (inputSize <= 0)
	{
		std::cout << "Please Input > 0 " << std::endl;
		return 0;
	}

	int* pArray = new int[inputSize];
	// Runtime�� �Ͼ�� ���� �޸� �Ҵ��� �̿�

	if (pArray == nullptr)
	{
		std::cout << "Out of Memory" << std::endl;
	}

	for (int i = 0; i < inputSize; i++)
	{
		pArray[i] = 1;
	}

	delete[] pArray;
	pArray = nullptr;
}
