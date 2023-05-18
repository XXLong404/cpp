//# include <iostream>
//
///*
//* 各种数据类型的定义
//*/
//int main()
//{
//	// 整形
//
//	short num1 = 10;       // 2字节
//	int num2 = 10;         // 4字节
//	long num3 = 10;        // 4字节
//	long long num4 = 10;   // 8字节
//	std::cout << "num1 = " << num1 << " num2 = " << num2 << " num3 = " << num3 << " num4 = " << num4 << std::endl;
//
//	// 浮点型
//	// 注意事项：浮点型的字面量，默认的类型推导double类型，如果给float类型的变量进行赋值的时候，会进行一次类型转换的操作。
//	//           如果出于效率的考虑，要给float类型的变量进行赋值，最好在浮点类型的字面量的最后，添加一个f。
//	// float--4字节，精度7位   double--8字节，精度15位
//	// 精度的位数包括小数点前后
//
//	float f1 = 3.14f;       
//	double f2 = 3.14;
//	std::cout << "f1=" << f1 << std::endl;
//	std::cout << "f2=" << f2 << std::endl;
//
//	// 布尔型
//	// 布尔型存在一个隐式的转换，以0作为false，非0作为true
//
//	bool b1 = true;
//	bool b2 = false;
//	std::cout << "b1=" << b1 << std::endl;
//	std::cout << "b2=" << b2 << std::endl;
//
//	// 字符型
//	// 已知所有的数据在计算机中进行存储和运算的时候，都是以0、1的形式进行的
//	// 因此每一个字符一定有一个数字与之对应
//	// 此时就需要有一个“表格”，来记录一个字符与数字之间的对应关系
//	// 这样的“表格”，称为“字符集”，常见的字符集：ASCII，GB2312，unicode，UTF-8
//
//	// 字符型：一般一对单引号内只写一个字符
//	
//	char c = 'a';
//	std::cout << c << std::endl;
//
//	// 字符串类型
//
//	std::string str = "hello word!";
//	std::cout << str << std::endl;
//
//	return 0;
//}