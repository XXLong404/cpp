//#include <iostream>
//
//int main()
//{
//	// char < short < int ~ long < long long < float < double
//	// ���������Զ�����ת��
//	// ��ȡֵ��ΧС������������ȡֵ��Χ�����������ת��
//	// ת�����̲���Ҫ���ж���Ĳ�����ֱ�Ӹ�ֵ�Ϳ�����
//	// �����ھ��ȶ�ʧ����
//	
//	int num1 = 100;
//	long long num2 = num1;
//	std::cout << num2 << std::endl;
//
//	char c1 = 'a';
//	int num3 = c1;
//	std::cout << num3 << std::endl;
//
//	float f1 = num1;
//	std::cout << f1 << std::endl;
//
//	// ǿ����������ת��
//	// ��ȡֵ��Χ�������������ȡֵ��ΧС����������ת��
//	// ���ܴ��ڶ�ʧ����
//	// �ڽ���ǿ������ת����ʱ��������������ת������
//	
//	int num4 = (int)num2;
//	std::cout << num4 << std::endl;
//
//	int num5 = 200;
//	char c2 = (char)num5;
//	std::cout << c2 << std::endl;
//
//	// ע������
//	// 1.�ڽ��������ʱ�򣬼������������������϶���
//	auto res = num1 + num2;    // auto������ұߵļ������Ƶ�res����������
//	
//	// 2.�ڽ�������ʱ��char��short���ͽ�����Զ�ת����int����
//	short s1 = 100, s2 = 100;
//	auto res2 = s1 + s2;
//
//	// 3.����������������ת��ʱ������ȥС�����������в��֣�ֻ������������
//	float f2 = 3.94f;
//	int i1 = (int)f2;
//	std::cout << i1 << std::endl;
//
//	return 0;
//}