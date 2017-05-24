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
	cout << "=        8. 上机作业8、9                                =" << endl;
	cout << "=                                                            =" << endl;
	cout << "=                                                            =" << endl;
	cout << "==============================================================" << endl;
	cout << "输入编号进入指定的程序集（0 退出）：";
	int m;
	cin >> m;
	switch (m) {
	case 0:return;
	case 1:system("cls"), tesk1(); break;
	case 2:system("cls"), tesk2(); break;
	case 3:system("cls"), tesk3(); break;
	case 4:system("cls"), tesk4(); break;
	case 5:system("cls"), tesk5(); break;
	case 6:system("cls"), tesk6(); break;
	case 8:system("cls"), tesk8(); break;
	default:system("cls"), cout << "输入有误，请重新输入！" << endl; break;
	}
	main();
}

void tesk1()
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
	case 2:system("cls"), tesk102(), tesk1(); break;
	case 4:system("cls"), tesk104(), tesk1(); break;
	case 5:system("cls"), tesk105(), tesk1(); break;
	default:system("cls"), cout << "输入有误，请重新输入！" << endl, tesk1(); break;
	}
	system("cls");
}

void tesk2()
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
	case 2:system("cls"), tesk202(), tesk2(); break;
	case 4:system("cls"), tesk204(), tesk2(); break;
	case 6:system("cls"), tesk206(), tesk2(); break;
	case 8:system("cls"), tesk208(), tesk2(); break;
	case 9:system("cls"), tesk209(), tesk2(); break;
	default:system("cls"), cout << "输入有误，请重新输入！" << endl, tesk1(); break;
	}
	system("cls");
}
void tesk3()
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
	case 2:system("cls"), tesk302(), tesk3(); break;
	case 4:system("cls"), tesk304(), tesk3(); break;
	case 6:system("cls"), tesk306(), tesk3(); break;
	case 7:system("cls"), tesk307(), tesk3(); break;
	default:system("cls"), cout << "输入有误，请重新输入！" << endl, tesk1(); break;
	}
	system("cls");
}
void tesk4()
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
	case 2:system("cls"), tesk402(), tesk4(); break;
	case 4:system("cls"), tesk404(), tesk4(); break;
	case 6:system("cls"), tesk406(), tesk4(); break;
	case 8:system("cls"), tesk408(), tesk4(); break;
	case 10:system("cls"), tesk410(), tesk4(); break;
	case 11:system("cls"), tesk411(), tesk4(); break;
	case 12:system("cls"), tesk412(), tesk4(); break;
	case 13:system("cls"), tesk413(), tesk4(); break;
	default:system("cls"), cout << "输入有误，请重新输入！" << endl, tesk4(); break;
	}
	system("cls");
}
void tesk5()
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
	case 2:system("cls"), tesk502(), tesk5(); break;
	case 4:system("cls"), tesk504(), tesk5(); break;
	case 6:system("cls"), tesk506(), tesk5(); break;
	case 8:system("cls"), tesk508(), tesk5(); break;
	case 9:system("cls"), tesk509(), tesk5(); break;
	case 10:system("cls"), tesk510(), tesk5(); break;
	case 11:system("cls"), tesk511(), tesk5(); break;
	case 13:system("cls"), tesk513(), tesk5(); break;
	case 14:system("cls"), tesk514(), tesk5(); break;
	default:system("cls"), cout << "输入有误，请重新输入！" << endl, tesk5(); break;
	}
	system("cls");
}
void tesk6()
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
	case 2:system("cls"), tesk602(), tesk6(); break;
	case 4:system("cls"), tesk604(), tesk6(); break;
	case 6:system("cls"), tesk606(), tesk6(); break;
	case 8:system("cls"), tesk608(), tesk6(); break;
	case 10:system("cls"), tesk610(), tesk6(); break;
	case 12:system("cls"), tesk612(), tesk6(); break;
	case 15:system("cls"), tesk615(), tesk6(); break;
	case 16:system("cls"), tesk616(), tesk6(); break;
	case 18:system("cls"), tesk618(), tesk6(); break;
	case 20:system("cls"), tesk620(), tesk6(); break;
	case 21:system("cls"), tesk621(), tesk6(); break;
	case 22:system("cls"), tesk622(), tesk6(); break;
	default:system("cls"), cout << "输入有误，请重新输入！" << endl, tesk6(); break;
	}
	system("cls");
}
void tesk8()
{
	cout << "==============================================================" << endl;
	cout << "=                        上机作业 8                     =" << endl;
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
	case 2:system("cls"), tesk802(), tesk8(); break;
	case 4:system("cls"), tesk804(), tesk8(); break;
	case 6:system("cls"), tesk806(), tesk8(); break;
	case 8:system("cls"), tesk808(), tesk8(); break;
	//case 10:system("cls"), tesk810(), tesk8(); break;
	//case 12:system("cls"), tesk812(), tesk8(); break;
	//case 15:system("cls"), tesk815(), tesk8(); break;
	//case 16:system("cls"), tesk816(), tesk8(); break;
	//case 18:system("cls"), tesk818(), tesk8(); break;
	//case 20:system("cls"), tesk820(), tesk8(); break;
	//case 21:system("cls"), tesk821(), tesk8(); break;
	//case 22:system("cls"), tesk622(), tesk6(); break;
	default:system("cls"), cout << "输入有误，请重新输入！" << endl, tesk6(); break;
	}
	system("cls");
}