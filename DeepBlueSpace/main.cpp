#include "main.h"

void main()
{
	cout << "==============================================================" << endl;
	cout << "=                       深蓝程序集                      =" << endl;
	cout << "==============================================================" << endl;
	cout << "=                                                            =" << endl;
	cout << "=                                                            =" << endl;
	cout << "=        1. 上机作业01           2. 上机作业02       =" << endl;
	cout << "=                                                            =" << endl;
	cout << "=        3. 上机作业03           4. 上机作业04       =" << endl;
	cout << "=                                                            =" << endl;
	cout << "=        5. 上机作业05           6. 上机作业06       =" << endl;
	cout << "=                                                            =" << endl;
	cout << "=                                                            =" << endl;
	cout << "==============================================================" << endl;
	cout << "输入编号进入指定的程序集（0 退出）：";
	int m;
	cin >> m;
	switch (m) {
	case 0:return;
	case 1:system("cls"), test1(); break;
	case 2:system("cls"), test2(); break;
	case 3:system("cls"), test3(); break;
	case 4:system("cls"), test4(); break;
	case 5:system("cls"), test5(); break;
	case 6:system("cls"), test6(); break;
	default:system("cls"), cout << "输入有误，请重新输入！" << endl; break;
	}
	main();
}

void test1()
{
	cout << "==============================================================" << endl;
	cout << "=                        上机作业 1                      =" << endl;
	cout << "==============================================================" << endl;
	cout << "=                                                            =" << endl;
	cout << "=                                                            =" << endl;
	cout << "=        2. 题目02            4. 题目04                  =" << endl;
	cout << "=                                                            =" << endl;
	cout << "=        5. 题目05                                         =" << endl;
	cout << "=                                                            =" << endl;
	cout << "=                                                            =" << endl;
	cout << "==============================================================" << endl;
	cout << "输入编号进入指定的程序（0 回主菜单）：";
	int m;
	cin >> m;
	switch (m) {
	case 0:break;
	case 2:system("cls"), test102(), test1(); break;
	case 4:system("cls"), test104(), test1(); break;
	case 5:system("cls"), test105(), test1(); break;
	default:system("cls"), cout << "输入有误，请重新输入！" << endl, test1(); break;
	}
	system("cls");
}

void test2()
{
	cout << "==============================================================" << endl;
	cout << "=                        上机作业 2                      =" << endl;
	cout << "==============================================================" << endl;
	cout << "=                                                            =" << endl;
	cout << "=                                                            =" << endl;
	cout << "=        2. 题目02            4. 题目04                  =" << endl;
	cout << "=                                                            =" << endl;
	cout << "=        6. 题目06            8. 题目08                  =" << endl;
	cout << "=                                                            =" << endl;
	cout << "=        9. 题目09                                         =" << endl;
	cout << "=                                                            =" << endl;
	cout << "=                                                            =" << endl;
	cout << "==============================================================" << endl;
	cout << "输入编号进入指定的程序（0 回主菜单）：";
	int m;
	cin >> m;
	switch (m) {
	case 0:break;
	case 2:system("cls"), test202(), test2(); break;
	case 4:system("cls"), test204(), test2(); break;
	case 6:system("cls"), test206(), test2(); break;
	case 8:system("cls"), test208(), test2(); break;
	case 9:system("cls"), test209(), test2(); break;
	default:system("cls"), cout << "输入有误，请重新输入！" << endl, test1(); break;
	}
	system("cls");
}
void test3()
{
	cout << "==============================================================" << endl;
	cout << "=                        上机作业 3                      =" << endl;
	cout << "==============================================================" << endl;
	cout << "=                                                            =" << endl;
	cout << "=                                                            =" << endl;
	cout << "=        2. 题目02            4. 题目04                  =" << endl;
	cout << "=                                                            =" << endl;
	cout << "=        6. 题目06            7. 题目07                  =" << endl;
	cout << "=                                                            =" << endl;
	cout << "=                                                            =" << endl;
	cout << "==============================================================" << endl;
	cout << "输入编号进入指定的程序（0 回主菜单）：";
	int m;
	cin >> m;
	switch (m) {
	case 0:break;
	case 2:system("cls"), test302(), test3(); break;
	case 4:system("cls"), test304(), test3(); break;
	case 6:system("cls"), test306(), test3(); break;
	case 7:system("cls"), test307(), test3(); break;
	default:system("cls"), cout << "输入有误，请重新输入！" << endl, test1(); break;
	}
	system("cls");
}
void test4()
{
	cout << "==============================================================" << endl;
	cout << "=                        上机作业 4                      =" << endl;
	cout << "==============================================================" << endl;
	cout << "=                                                            =" << endl;
	cout << "=                                                            =" << endl;
	cout << "=        2. 题目02            4. 题目04                  =" << endl;
	cout << "=                                                            =" << endl;
	cout << "=        6. 题目06            8. 题目08                  =" << endl;
	cout << "=                                                            =" << endl;
	cout << "=       10. 题目10           11. 题目11                  =" << endl;
	cout << "=                                                            =" << endl;
	cout << "=       12. 题目12           13. 题目13                  =" << endl;
	cout << "=                                                            =" << endl;
	cout << "=                                                            =" << endl;
	cout << "=                                                            =" << endl;
	cout << "==============================================================" << endl;
	cout << "输入编号进入指定的程序（0 回主菜单）：";
	int m;
	cin >> m;
	switch (m) {
	case 0:break;
	case 2:system("cls"), test402(), test4(); break;
	case 4:system("cls"), test404(), test4(); break;
	case 6:system("cls"), test406(), test4(); break;
	case 8:system("cls"), test408(), test4(); break;
	case 10:system("cls"), test410(), test4(); break;
	case 11:system("cls"), test411(), test4(); break;
	case 12:system("cls"), test412(), test4(); break;
	case 13:system("cls"), test413(), test4(); break;
	default:system("cls"), cout << "输入有误，请重新输入！" << endl, test4(); break;
	}
	system("cls");
}
void test5()
{
	cout << "==============================================================" << endl;
	cout << "=                        上机作业 5                      =" << endl;
	cout << "==============================================================" << endl;
	cout << "=                                                            =" << endl;
	cout << "=                                                            =" << endl;
	cout << "=        2. 题目02            4. 题目04                  =" << endl;
	cout << "=                                                            =" << endl;
	cout << "=        6. 题目06            8. 题目08                  =" << endl;
	cout << "=                                                            =" << endl;
	cout << "=        9. 题目09           10. 题目10                  =" << endl;
	cout << "=                                                            =" << endl;
	cout << "=       11. 题目11           13. 题目13                  =" << endl;
	cout << "=                                                            =" << endl;
	cout << "=       14. 题目14                                         =" << endl;
	cout << "=                                                            =" << endl;
	cout << "=                                                            =" << endl;
	cout << "==============================================================" << endl;
	cout << "输入编号进入指定的程序（0 回主菜单）：";
	int m;
	cin >> m;
	switch (m) {
	case 0:break;
	case 2:system("cls"), test502(), test5(); break;
	case 4:system("cls"), test504(), test5(); break;
	case 6:system("cls"), test506(), test5(); break;
	case 8:system("cls"), test508(), test5(); break;
	case 9:system("cls"), test509(), test5(); break;
	case 10:system("cls"), test510(), test5(); break;
	case 11:system("cls"), test511(), test5(); break;
	case 13:system("cls"), test513(), test5(); break;
	case 14:system("cls"), test514(), test5(); break;
	default:system("cls"), cout << "输入有误，请重新输入！" << endl, test5(); break;
	}
	system("cls");
}
void test6()
{
	cout << "==============================================================" << endl;
	cout << "=                        上机作业 6                      =" << endl;
	cout << "==============================================================" << endl;
	cout << "=                                                            =" << endl;
	cout << "=                                                            =" << endl;
	cout << "=        2. 题目02            4. 题目04                  =" << endl;
	cout << "=                                                            =" << endl;
	cout << "=        6. 题目06            8. 题目08                  =" << endl;
	cout << "=                                                            =" << endl;
	cout << "=        9. 题目09           10. 题目10                  =" << endl;
	cout << "=                                                            =" << endl;
	cout << "=       12. 题目12           15. 题目15                  =" << endl;
	cout << "=                                                            =" << endl;
	cout << "=       16. 题目16           18. 题目18                  =" << endl;
	cout << "=                                                            =" << endl;
	cout << "=       20. 题目20           21. 题目21                  =" << endl;
	cout << "=                                                            =" << endl;
	cout << "=       22. 题目22                                         =" << endl;
	cout << "=                                                            =" << endl;
	cout << "==============================================================" << endl;
	cout << "输入编号进入指定的程序（0 回主菜单）：";
	int m;
	cin >> m;
	switch (m) {
	case 0:break;
	case 2:system("cls"), test602(), test6(); break;
	case 4:system("cls"), test604(), test6(); break;
	case 6:system("cls"), test606(), test6(); break;
	case 8:system("cls"), test608(), test6(); break;
	case 10:system("cls"), test610(), test6(); break;
	case 12:system("cls"), test612(), test6(); break;
	case 15:system("cls"), test615(), test6(); break;
	case 16:system("cls"), test616(), test6(); break;
	case 18:system("cls"), test618(), test6(); break;
	case 20:system("cls"), test620(), test6(); break;
	case 21:system("cls"), test621(), test6(); break;
	case 22:system("cls"), test622(), test6(); break;
	default:system("cls"), cout << "输入有误，请重新输入！" << endl, test6(); break;
	}
	system("cls");
}