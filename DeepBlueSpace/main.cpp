#include "main.h"

void main()
{
	cout << "==============================================================" << endl;
	cout << "=                       ��������                      =" << endl;
	cout << "==============================================================" << endl;
	cout << "=                                                            =" << endl;
	cout << "=                                                            =" << endl;
	cout << "=        1. �ϻ���ҵ01           2. �ϻ���ҵ02       =" << endl;
	cout << "=                                                            =" << endl;
	cout << "=        3. �ϻ���ҵ03           4. �ϻ���ҵ04       =" << endl;
	cout << "=                                                            =" << endl;
	cout << "=        5. �ϻ���ҵ05           6. �ϻ���ҵ06       =" << endl;
	cout << "=                                                            =" << endl;
	cout << "=                                                            =" << endl;
	cout << "==============================================================" << endl;
	cout << "�����Ž���ָ���ĳ��򼯣�0 �˳�����";
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
	default:system("cls"), cout << "�����������������룡" << endl; break;
	}
	main();
}

void test1()
{
	cout << "==============================================================" << endl;
	cout << "=                        �ϻ���ҵ 1                      =" << endl;
	cout << "==============================================================" << endl;
	cout << "=                                                            =" << endl;
	cout << "=                                                            =" << endl;
	cout << "=        2. ��Ŀ02            4. ��Ŀ04                  =" << endl;
	cout << "=                                                            =" << endl;
	cout << "=        5. ��Ŀ05                                         =" << endl;
	cout << "=                                                            =" << endl;
	cout << "=                                                            =" << endl;
	cout << "==============================================================" << endl;
	cout << "�����Ž���ָ���ĳ���0 �����˵�����";
	int m;
	cin >> m;
	switch (m) {
	case 0:break;
	case 2:system("cls"), test102(), test1(); break;
	case 4:system("cls"), test104(), test1(); break;
	case 5:system("cls"), test105(), test1(); break;
	default:system("cls"), cout << "�����������������룡" << endl, test1(); break;
	}
	system("cls");
}

void test2()
{
	cout << "==============================================================" << endl;
	cout << "=                        �ϻ���ҵ 2                      =" << endl;
	cout << "==============================================================" << endl;
	cout << "=                                                            =" << endl;
	cout << "=                                                            =" << endl;
	cout << "=        2. ��Ŀ02            4. ��Ŀ04                  =" << endl;
	cout << "=                                                            =" << endl;
	cout << "=        6. ��Ŀ06            8. ��Ŀ08                  =" << endl;
	cout << "=                                                            =" << endl;
	cout << "=        9. ��Ŀ09                                         =" << endl;
	cout << "=                                                            =" << endl;
	cout << "=                                                            =" << endl;
	cout << "==============================================================" << endl;
	cout << "�����Ž���ָ���ĳ���0 �����˵�����";
	int m;
	cin >> m;
	switch (m) {
	case 0:break;
	case 2:system("cls"), test202(), test2(); break;
	case 4:system("cls"), test204(), test2(); break;
	case 6:system("cls"), test206(), test2(); break;
	case 8:system("cls"), test208(), test2(); break;
	case 9:system("cls"), test209(), test2(); break;
	default:system("cls"), cout << "�����������������룡" << endl, test1(); break;
	}
	system("cls");
}
void test3()
{
	cout << "==============================================================" << endl;
	cout << "=                        �ϻ���ҵ 3                      =" << endl;
	cout << "==============================================================" << endl;
	cout << "=                                                            =" << endl;
	cout << "=                                                            =" << endl;
	cout << "=        2. ��Ŀ02            4. ��Ŀ04                  =" << endl;
	cout << "=                                                            =" << endl;
	cout << "=        6. ��Ŀ06            7. ��Ŀ07                  =" << endl;
	cout << "=                                                            =" << endl;
	cout << "=                                                            =" << endl;
	cout << "==============================================================" << endl;
	cout << "�����Ž���ָ���ĳ���0 �����˵�����";
	int m;
	cin >> m;
	switch (m) {
	case 0:break;
	case 2:system("cls"), test302(), test3(); break;
	case 4:system("cls"), test304(), test3(); break;
	case 6:system("cls"), test306(), test3(); break;
	case 7:system("cls"), test307(), test3(); break;
	default:system("cls"), cout << "�����������������룡" << endl, test1(); break;
	}
	system("cls");
}
void test4()
{
	cout << "==============================================================" << endl;
	cout << "=                        �ϻ���ҵ 4                      =" << endl;
	cout << "==============================================================" << endl;
	cout << "=                                                            =" << endl;
	cout << "=                                                            =" << endl;
	cout << "=        2. ��Ŀ02            4. ��Ŀ04                  =" << endl;
	cout << "=                                                            =" << endl;
	cout << "=        6. ��Ŀ06            8. ��Ŀ08                  =" << endl;
	cout << "=                                                            =" << endl;
	cout << "=       10. ��Ŀ10           11. ��Ŀ11                  =" << endl;
	cout << "=                                                            =" << endl;
	cout << "=       12. ��Ŀ12           13. ��Ŀ13                  =" << endl;
	cout << "=                                                            =" << endl;
	cout << "=                                                            =" << endl;
	cout << "=                                                            =" << endl;
	cout << "==============================================================" << endl;
	cout << "�����Ž���ָ���ĳ���0 �����˵�����";
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
	default:system("cls"), cout << "�����������������룡" << endl, test4(); break;
	}
	system("cls");
}
void test5()
{
	cout << "==============================================================" << endl;
	cout << "=                        �ϻ���ҵ 5                      =" << endl;
	cout << "==============================================================" << endl;
	cout << "=                                                            =" << endl;
	cout << "=                                                            =" << endl;
	cout << "=        2. ��Ŀ02            4. ��Ŀ04                  =" << endl;
	cout << "=                                                            =" << endl;
	cout << "=        6. ��Ŀ06            8. ��Ŀ08                  =" << endl;
	cout << "=                                                            =" << endl;
	cout << "=        9. ��Ŀ09           10. ��Ŀ10                  =" << endl;
	cout << "=                                                            =" << endl;
	cout << "=       11. ��Ŀ11           13. ��Ŀ13                  =" << endl;
	cout << "=                                                            =" << endl;
	cout << "=       14. ��Ŀ14                                         =" << endl;
	cout << "=                                                            =" << endl;
	cout << "=                                                            =" << endl;
	cout << "==============================================================" << endl;
	cout << "�����Ž���ָ���ĳ���0 �����˵�����";
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
	default:system("cls"), cout << "�����������������룡" << endl, test5(); break;
	}
	system("cls");
}
void test6()
{
	cout << "==============================================================" << endl;
	cout << "=                        �ϻ���ҵ 6                      =" << endl;
	cout << "==============================================================" << endl;
	cout << "=                                                            =" << endl;
	cout << "=                                                            =" << endl;
	cout << "=        2. ��Ŀ02            4. ��Ŀ04                  =" << endl;
	cout << "=                                                            =" << endl;
	cout << "=        6. ��Ŀ06            8. ��Ŀ08                  =" << endl;
	cout << "=                                                            =" << endl;
	cout << "=        9. ��Ŀ09           10. ��Ŀ10                  =" << endl;
	cout << "=                                                            =" << endl;
	cout << "=       12. ��Ŀ12           15. ��Ŀ15                  =" << endl;
	cout << "=                                                            =" << endl;
	cout << "=       16. ��Ŀ16           18. ��Ŀ18                  =" << endl;
	cout << "=                                                            =" << endl;
	cout << "=       20. ��Ŀ20           21. ��Ŀ21                  =" << endl;
	cout << "=                                                            =" << endl;
	cout << "=       22. ��Ŀ22                                         =" << endl;
	cout << "=                                                            =" << endl;
	cout << "==============================================================" << endl;
	cout << "�����Ž���ָ���ĳ���0 �����˵�����";
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
	default:system("cls"), cout << "�����������������룡" << endl, test6(); break;
	}
	system("cls");
}