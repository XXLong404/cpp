//#include <iostream>
//
//// ����һ�������ռ�
//namespace a {
//	int num1 = 10;
//
//	// �����ռ����Ƕ�������ռ�
//	namespace aa {
//		int num1 = 10;
//	}
//}
//
//namespace b {
//	int num1 = 10;
//}
//
//
//// �����ռ��ǿ��ŵģ�������ʱ��ص���һ�������ռ�����ӳ�Ա
//namespace a {
//	int num2 = 20;
//}
//
//namespace constant1 {
//	const int x = 100;
//}
//
//namespace constant2 {
//	const int x = 150;
//}
//
//int main()
//{
//	// 1.�����ռ�Ļ���ʹ��
//	std::cout << a::num1 << std::endl;
//	std::cout << b::num1 << std::endl;
//	std::cout << a::aa::num1 << std::endl;
//
//	// 2.usingָ�������ռ��е�ָ����Ա
//	using a::num1;
//	std::cout << num1 << std::endl;
//	std::cout << b::num1 << std::endl;
//
//	// 3.using�����ռ�
//	using namespace a;
//	std::cout << num1 << std::endl;
//	std::cout << num2 << std::endl;
//	std::cout << aa::num1 << std::endl;
//
//	// 4.ע������
//	//    1.������õ������ռ��д��ں͵�ǰ�������ռ���ͬ���ֵĳ�Ա��Ĭ��ʹ�õ�ǰ�������ռ��еĳ�Ա
//	//    2.������õĶ�������ռ��д�����ͬ���ֵĳ�Ա���ҵ�ǰ�������ռ���û�������Ա������ֶ�����
//	const int x = 200;
//	std::cout << x << std::endl;
//
//	using namespace constant1;
//	std::cout << x << std::endl;
//	return 0;
//}