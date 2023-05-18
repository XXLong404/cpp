//#include <iostream>
//
//int main()
//{
//	// char < short < int ~ long < long long < float < double
//	// 数据类型自动类型转换
//	// 由取值范围小的数据类型向取值范围大的数据类型转换
//	// 转换过程不需要进行额外的操作，直接赋值就可以了
//	// 不存在精度丢失问题
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
//	// 强制数据类型转换
//	// 由取值范围大的数据类型向取值范围小的数据类型转换
//	// 可能存在丢失精度
//	// 在进行强制类型转换的时候，最好添加上类型转换操作
//	
//	int num4 = (int)num2;
//	std::cout << num4 << std::endl;
//
//	int num5 = 200;
//	char c2 = (char)num5;
//	std::cout << c2 << std::endl;
//
//	// 注意事项
//	// 1.在进行运算的时候，计算结果的数据类型向上对齐
//	auto res = num1 + num2;    // auto会根据右边的计算结果推导res的数据类型
//	
//	// 2.在进行运算时，char，short类型结果会自动转换成int类型
//	short s1 = 100, s2 = 100;
//	auto res2 = s1 + s2;
//
//	// 3.浮点型向整数类型转换时，会舍去小数点后面的所有部分，只保留整数部分
//	float f2 = 3.94f;
//	int i1 = (int)f2;
//	std::cout << i1 << std::endl;
//
//	return 0;
//}