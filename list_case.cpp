#include <iostream>
#include <list>
using namespace std;

int main()
{
	//�����յ�list����
	std::list<double> list;
	
	//�����������Ԫ��
	list.push_back(3);
	list.push_back(1);
	list.push_back(2);
	
	//��������Ĵ�С
	cout << "list size: " << list.size() << endl;
	
	//�������е�Ԫ�ؽ�������
	list.sort();
	
	//���list�����е�Ԫ��
	for (auto const &i : list) {
		std::cout <<i << std::endl;
	}
	
	return 0;
}
