#pragma once
#include<vector>
class TestClass{
public:
	TestClass(){
		
	}
	void SetUp() {
		a.push_back(new int(0));
	}
	void TearDown() {

	}
	~TestClass() {

	}
	std::vector<int*> a;
	int *b;
};