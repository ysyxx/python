#include <iostream>
#include <list>
using namespace std;

int main()
{
	//创建空的list容器
	std::list<double> list;
	
	//向容器中添加元素
	list.push_back(3);
	list.push_back(1);
	list.push_back(2);
	
	//输出容器的大小
	cout << "list size: " << list.size() << endl;
	
	//对容器中的元素进行排序
	list.sort();
	
	//输出list容器中的元素
	for (auto const &i : list) {
		std::cout <<i << std::endl;
	}
	
	return 0;
}
