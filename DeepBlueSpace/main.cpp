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
	cout << "=        8. �ϻ���ҵ8��9                                =" << endl;
	cout << "=                                                            =" << endl;
	cout << "=                                                            =" << endl;
	cout << "==============================================================" << endl;
	cout << "�����Ž���ָ���ĳ��򼯣�0 �˳�����";
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
	default:system("cls"), cout << "�����������������룡" << endl; break;
	}
	main();
}

void tesk1()
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
	case 2:system("cls"), tesk102(), tesk1(); break;
	case 4:system("cls"), tesk104(), tesk1(); break;
	case 5:system("cls"), tesk105(), tesk1(); break;
	default:system("cls"), cout << "�����������������룡" << endl, tesk1(); break;
	}
	system("cls");
}

void tesk2()
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
	case 2:system("cls"), tesk202(), tesk2(); break;
	case 4:system("cls"), tesk204(), tesk2(); break;
	case 6:system("cls"), tesk206(), tesk2(); break;
	case 8:system("cls"), tesk208(), tesk2(); break;
	case 9:system("cls"), tesk209(), tesk2(); break;
	default:system("cls"), cout << "�����������������룡" << endl, tesk1(); break;
	}
	system("cls");
}
void tesk3()
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
	case 2:system("cls"), tesk302(), tesk3(); break;
	case 4:system("cls"), tesk304(), tesk3(); break;
	case 6:system("cls"), tesk306(), tesk3(); break;
	case 7:system("cls"), tesk307(), tesk3(); break;
	default:system("cls"), cout << "�����������������룡" << endl, tesk1(); break;
	}
	system("cls");
}
void tesk4()
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
	case 2:system("cls"), tesk402(), tesk4(); break;
	case 4:system("cls"), tesk404(), tesk4(); break;
	case 6:system("cls"), tesk406(), tesk4(); break;
	case 8:system("cls"), tesk408(), tesk4(); break;
	case 10:system("cls"), tesk410(), tesk4(); break;
	case 11:system("cls"), tesk411(), tesk4(); break;
	case 12:system("cls"), tesk412(), tesk4(); break;
	case 13:system("cls"), tesk413(), tesk4(); break;
	default:system("cls"), cout << "�����������������룡" << endl, tesk4(); break;
	}
	system("cls");
}
void tesk5()
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
	case 2:system("cls"), tesk502(), tesk5(); break;
	case 4:system("cls"), tesk504(), tesk5(); break;
	case 6:system("cls"), tesk506(), tesk5(); break;
	case 8:system("cls"), tesk508(), tesk5(); break;
	case 9:system("cls"), tesk509(), tesk5(); break;
	case 10:system("cls"), tesk510(), tesk5(); break;
	case 11:system("cls"), tesk511(), tesk5(); break;
	case 13:system("cls"), tesk513(), tesk5(); break;
	case 14:system("cls"), tesk514(), tesk5(); break;
	default:system("cls"), cout << "�����������������룡" << endl, tesk5(); break;
	}
	system("cls");
}
void tesk6()
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
	default:system("cls"), cout << "�����������������룡" << endl, tesk6(); break;
	}
	system("cls");
}
void tesk8()
{
	cout << "==============================================================" << endl;
	cout << "=                        �ϻ���ҵ 8                     =" << endl;
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
	default:system("cls"), cout << "�����������������룡" << endl, tesk6(); break;
	}
	system("cls");
}