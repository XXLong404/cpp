//#include <iostream>
//
//int main()
//{
//	// 控制台输入：读取控制台上输入的内容，并给某一变量进行赋值
//	// cin
//
//	// 整形的输入，其他类型相似
//	/*int num1 = 0;
//	std::cout << "入一个整形的数字：";
//	std::cin >> num1;
//	std::cout << num1 << std::endl;*/
//
//	// 1.缓冲区的问题
//	// 在控制台上的输入内容，是被暂存到缓冲区，cin从缓冲区收到数据给变量进行赋值
//	// cin.ignore() 忽略缓存区中的内容，括号中的参数为忽略几位，默认1位
//	// std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n') 忽略缓冲区所有内容
//	/*int num2 = 0;
//	float f1 = 0;
//	std::string str1 = "";
//	std::cin >> num2;
//	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
//	std::cin >> f1;
//	std::cin >> str1;
//	std::cout << num2 << " " << f1 << " " << str1 << std::endl;*/
//
//	// 2.连续输入
//	/*int num1 = 0, num2 = 0, num3 = 0;
//	std::cin >> num1 >> num2 >> num3;
//	std::cout << num1 << num2 << num3 << std::endl;*/
//
//	/*
//	3.错误处理
//	  cin内部会维护一个状态，用来记录本次读取操作是否正常
//	  cin.good()
//	  cin.fail()
//	  
//	  如果被标记为fail状态，则会影响后续的读取操作
//	  cin.clear()   恢复状态，清除错误状态
//	*/ 
//
//	int num1 = 0, num2 = 0, num3 = 0;
//	std::cin >> num1 >> num2 >> num3;
//	std::cout << std::cin.good() << " " << std::cin.fail() << std::endl;
//	std::cout << num1 << num2 << num3 << std::endl;
//	
//	return 0;
//}