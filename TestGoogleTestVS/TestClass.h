#pragma once
#include<vector>
class TestClass{
public:
	TestClass(){
		
	}
	void RemoveElement(int i) {

			int count = 0;
			for (std::vector<int*>::iterator it = a.begin(); it != a.end();)
			{
				if (count == i)
				{
					a.erase(it);
					break;
				}
				else
				{
					count++;
				}
			}
	}
	~TestClass() {
		for (std::vector<int*>::iterator it = a.begin(); it != a.end();)
		{
			//int* tmp = *it;
			//a.erase(it);
			//std::cout << *tmp << " " << *it << endl;
			//delete *it;
			it = a.erase(it);
			//std::cout << *tmp << " " << *it << endl << endl;
			//delete tmp;
			
			
		}
		
	}
	std::vector<int*> a;
	int *b;
};