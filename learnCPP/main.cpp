#include<iostream>
#include<vector>
template<typename T>
void printX(T t)
{
	std::cout << t << std::endl;
}

template<typename T,typename ...args>
void printX(T t, args ...a)
{
	std::cout << t << std::endl;
	printX(a...);
}
int main()
{
	std::vector<int> list{ 0,1,2,3,4,5,6,8 };
	printX(1);
	return 1;
}