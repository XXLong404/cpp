//#include <iostream>
//
//int main()
//{
//	// ����̨���룺��ȡ����̨����������ݣ�����ĳһ�������и�ֵ
//	// cin
//
//	// ���ε����룬������������
//	/*int num1 = 0;
//	std::cout << "��һ�����ε����֣�";
//	std::cin >> num1;
//	std::cout << num1 << std::endl;*/
//
//	// 1.������������
//	// �ڿ���̨�ϵ��������ݣ��Ǳ��ݴ浽��������cin�ӻ������յ����ݸ��������и�ֵ
//	// cin.ignore() ���Ի������е����ݣ������еĲ���Ϊ���Լ�λ��Ĭ��1λ
//	// std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n') ���Ի�������������
//	/*int num2 = 0;
//	float f1 = 0;
//	std::string str1 = "";
//	std::cin >> num2;
//	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
//	std::cin >> f1;
//	std::cin >> str1;
//	std::cout << num2 << " " << f1 << " " << str1 << std::endl;*/
//
//	// 2.��������
//	/*int num1 = 0, num2 = 0, num3 = 0;
//	std::cin >> num1 >> num2 >> num3;
//	std::cout << num1 << num2 << num3 << std::endl;*/
//
//	/*
//	3.������
//	  cin�ڲ���ά��һ��״̬��������¼���ζ�ȡ�����Ƿ�����
//	  cin.good()
//	  cin.fail()
//	  
//	  ��������Ϊfail״̬�����Ӱ������Ķ�ȡ����
//	  cin.clear()   �ָ�״̬���������״̬
//	*/ 
//
//	int num1 = 0, num2 = 0, num3 = 0;
//	std::cin >> num1 >> num2 >> num3;
//	std::cout << std::cin.good() << " " << std::cin.fail() << std::endl;
//	std::cout << num1 << num2 << num3 << std::endl;
//	
//	return 0;
//}