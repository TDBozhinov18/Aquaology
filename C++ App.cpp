#include <iostream>
using namespace std;
int main()
{
	int option;
	cout << "                                         " << "+ = = = = = = = = = = = = = = = = = = +" << endl;
	cout << "                                         " << "*   1. ????? ???????                  *" << endl;
	cout << "                                         " << "*   2. ???????? ????? ???????         *" << endl;
	cout << "                                         " << "*   3. ???????? ????? ?????????       *" << endl;
	cout << "                                         " << "*   4. ??????? ?? ??????? ????????    *" << endl;
	cout << "                                         " << "*   5. ???????? ?? ????????           *" << endl;
	cout << "                                         " << "+ = = = = = = = = = = = = = = = = = = +" << endl << endl;
	cout << "                                         " << "?????? ?????: ";
	cin >> option;
	if (option == 1)
	{
		int resourceOption;
		cout << "                                         " << "+ = = = = = = = = = = = = = = = = = = +" << endl;
		cout << "                                         " << "*   1. ?????? 1                       *" << endl;
		cout << "                                         " << "*   2. ?????? 2                       *" << endl;
		cout << "                                         " << "*   3. ?????? 3                       *" << endl;
		cout << "                                         " << "*   4. ??????? ??? ????               *" << endl;
		cout << "                                         " << "*   5. ?????                          *" << endl;
		cout << "                                         " << "+ = = = = = = = = = = = = = = = = = = +" << endl << endl;
		cout << "                                         " << "?????? ?????: ";
		cin >> resourceOption;

		if (resourceOption == 1)
		{
			cout << "?????? ? ???? ? ???? ???????? � ?????? ???? ????????? ?????, ?????????, ???????, ????? ?????? ? ???????. ???? ???? ?????? ?? ????????, ?????? ?????? ?????????????? ???? ??????????????? ???? ?? ?????? ? ???????????? ???? ?? ??????. ????? ?? ? ??????????????? ???? ?? ???? ????. ????????? ?? ?????? ? 472 km, ?? ????? ?? ????????? ????????? ?? ??????? 322 km ? ?? ???? ????? ?????? ? ?? ???????? ????? ?? ??????? ???? ??????????? ???? � ???? ?????, ????? ? ??????. ?? ? ???-??????? ????, ???????? ?? ??????????? ?? ????????, ? ???-??????? ?????????? ?????? (53 116 km�, ?? ????? ? ???????? � 21 084 km�) ? ? ???-????? ????? ????? (110 m�/s ?? ???????? ?? ????????, ??? ???????-???????? ???????).  ";
		}
		else if (resourceOption == 2)
		{
			cout << "????? ? ??????? ?? ??????? ???? ? ?????? ???? ?????. ?? ? ???????????? ?????? ???? ? ??????, ????? ???? ? ?????? ?? ????? ?? ????? ? ?? ????? ? ????? ????. ????? ???? ????? ? ??????, ????? ??????? ???? ???-????? ??????? ? ????? � 10 ?? ???? (????????, ???????, ????????, ???????, ????????, ??????, ????????, ???????, ??????? ? ???????.), ? ???????????? ? ?????? ?? ???????? ????? ?? ??????????? ?? ??????? 10 ??????? ? ?? ??????????? ?? ??? 9 ??????? (?????????, ??????, ?????, ?????, ????????, ????? ? ???????????, ????? ????, ??????? ? ??????). ??????? 2852 km. ???? ?? ??????????? ?????? 817 000 km�.";
		}
		else if (resourceOption == 3)
		{
			cout << "??????? (? ??????????? ?? ????????: Panisus, ???????, ????? ??? ????) ? ???? ? ????????????? ????????, ?????? ????? � ?????? ????????, ????? ?????? ? ?????, ??????? ?? ? ????? ????. ????????? ? ? 46 km, ? ?????? ? ?????? ????????? ? ???? ?????? ??????, ????? ? ?????? ?? ????? ?????? � 244,5 km (8-? ????? ?? ??????? ? ????????). ?????? ? ???-???????? ????????? ????, ??????? ?? ? ????? ????, ???? ????????? ????? ?????? ??????? ????? ??????? ? ????? ???? ?? ?????????? ???????.";
		}
		else if (resourceOption == 4)
		{
			int option1;
			cout << "                                         " << "+ = = = = = = = = = = = = = = = = = = +" << endl;
			cout << "                                         " << "*   1. ????? ???????                  *" << endl;
			cout << "                                         " << "*   2. ???????? ????? ???????         *" << endl;
			cout << "                                         " << "*   3. ???????? ????? ?????????       *" << endl;
			cout << "                                         " << "*   4. ??????? ?? ??????? ????????    *" << endl;
			cout << "                                         " << "*   5. ???????? ?? ????????           *" << endl;
			cout << "                                         " << "*   6. ?????                          *" << endl;
			cout << "                                         " << "+ = = = = = = = = = = = = = = = = = = +" << endl << endl;
			cout << "                                         " << "?????? ?????: ";
			cin >> option1;

			if (option1 == 6)
			{
				cout << endl;
			}
		}
		else if (resourceOption == 5)
		{
			cout << endl;
		}
	}
	else if (option == 2)
	{
		int jivotniOption;
		cout << "                                         " << "+ = = = = = = = = = = = = = = = = = = +" << endl;
		cout << "                                         " << "*   1. ??????? 1                      *" << endl;
		cout << "                                         " << "*   2. ??????? 2                      *" << endl;
		cout << "                                         " << "*   3. ??????? 3                      *" << endl;
		cout << "                                         " << "*   4. ??????? ??? ????               *" << endl;
		cout << "                                         " << "*   5. ?????                          *" << endl;
		cout << "                                         " << "+ = = = = = = = = = = = = = = = = = = +" << endl << endl;
		cout << "                                         " << "?????? ?????: ";
		cin >> jivotniOption;

		if (jivotniOption == 1)
		{
			cout << "????????????? ???????? ? ????? ?????? ????, ??????? 5 ?? ??????? ?? ??????. ?? ????? ??? 7-12, ???-????? 9 ?????? (????????????? ???? ?? ???????? ?????), ??????????, ???????? ? ???????? ?????? ??????????????. ???????? ????? ?? ??????????? ???? ? ??????????. ??????? ??????????? ??? ?????? ????. ????? ????????, ?? ???????? ????????? ?????? ? ????????. ";
		}
		else if (jivotniOption == 2)
		{
			cout << "?????????? ?????? ? ??? ?????? ?? ???? ???????????, ?????? ??????. ??????????????? ?? ???? ???? ?? ???-???????????? ????????? ? ???????????? ?????.????????? ???? ?? ??????????? ?? ???? ?????????? ?????? ? ????? ????, ???? ??????????????? ?? ?????????? ? ??????? ??????? ?????? ?? ????????? ? ?????????? ?? ????????? ?????. ??????? ?????? ???????? ? ?????? ?? ??????.";
		}
		else if (jivotniOption == 3)
		{
			cout << "????????? ? ???????????? ???????????? ?? ??????????? ?? ????????, ???????? ?????? ????. ?? ? ????????????? ????, ?????????? ????????? ??? ??????????? ?? ??????, ?? ??-?????? ?? 10 ???????, ? ?? ???? ??????? ???? ?????? ? ??????????? ?????????? ?? ???? ???????.";
		}
		else if (jivotniOption == 4)
		{
			int option2;
			cout << "                                         " << "+ = = = = = = = = = = = = = = = = = = +" << endl;
			cout << "                                         " << "*   1. ????? ???????                  *" << endl;
			cout << "                                         " << "*   2. ???????? ????? ???????         *" << endl;
			cout << "                                         " << "*   3. ???????? ????? ?????????       *" << endl;
			cout << "                                         " << "*   4. ??????? ?? ??????? ????????    *" << endl;
			cout << "                                         " << "*   5. ???????? ?? ????????           *" << endl;
			cout << "                                         " << "*   6. ?????                          *" << endl;
			cout << "                                         " << "+ = = = = = = = = = = = = = = = = = = +" << endl << endl;
			cout << "                                         " << "?????? ?????: ";
			cin >> option2;

			if (option2 == 6)
			{
				cout << endl;
			}
		}
		else if (jivotniOption == 5)
		{
			cout << endl;
		}
	}
	else if (option == 3)
	{
		int mestnostiOption;
		cout << "                                         " << "+ = = = = = = = = = = = = = = = = = = +" << endl;
		cout << "                                         " << "*   1. ???????? 1                     *" << endl;
		cout << "                                         " << "*   2. ???????? 2                     *" << endl;
		cout << "                                         " << "*   3. ???????? 3                     *" << endl;
		cout << "                                         " << "*   4. ??????? ??? ????               *" << endl;
		cout << "                                         " << "*   5. ?????                          *" << endl;
		cout << "                                         " << "+ = = = = = = = = = = = = = = = = = = +" << endl << endl;
		cout << "                                         " << "?????? ?????: ";
		cin >> mestnostiOption;

		if (mestnostiOption == 1)
		{
			cout << "?????????? ????? ???????? ? ???? ?? ????????? ?? ?????????. ? ?????? ????? ? ??????? ?????. ??? ?? ?????? ?? ?????? ???? ?? ???????? ????, ?? ?????????? ????? ? ??????? ??????, ? ??????????? ???? ?? ?????????.";
		}
		else if (mestnostiOption == 2)
		{
			cout << "?????????? ???????? ?????? ?? ?????? ?? 9 ?? ?? ???? ????? ? ?????? ? ???? ? ??? 42 ???????. ?????????? ? ?????????? ?? ???????? ???????, ????? ? ????? ????????????? ?? ????? ????, ???????? ?? ??????????????. ???? ?????? ? ?????? ????? ?? ????? ?????? ????? ??????? ?? ???????? ???.";
		}
		else if (mestnostiOption == 3)
		{
			cout << "?????????? ???????? ?????????? ?????? ?? ?????? ???? ???? ??????, ?????? ???????????. ?? ??????????? ?? ???????????? ?????? ?? ?????? ???-???????? ?????????? ? ?????????? ??????, ????? ?? ????? ?? ???????? ? ????????? ????? ?? ????????. ?????????? ???????? ? ???????????? ?????????? ???-???? ?? ????????? ???????? ?? ??????????? ????????, ??????? ???? ???????? ? ?????? ?????? ???? ?????? ? ???-??????????. ??????????, ????? ?? ???-?????????????? ?? ??????? ????????? ? ?????????.";
		}
		else if (mestnostiOption == 4)
		{
			int option3;
			cout << "                                         " << "+ = = = = = = = = = = = = = = = = = = +" << endl;
			cout << "                                         " << "*   1. ????? ???????                  *" << endl;
			cout << "                                         " << "*   2. ???????? ????? ???????         *" << endl;
			cout << "                                         " << "*   3. ???????? ????? ?????????       *" << endl;
			cout << "                                         " << "*   4. ??????? ?? ??????? ????????    *" << endl;
			cout << "                                         " << "*   5. ???????? ?? ????????           *" << endl;
			cout << "                                         " << "*   6. ?????                          *" << endl;
			cout << "                                         " << "+ = = = = = = = = = = = = = = = = = = +" << endl << endl;
			cout << "                                         " << "?????? ?????: ";
			cin >> option3;

			if (option3 == 6)
			{
				cout << endl;
			}
		}
		else if (mestnostiOption == 5)
		{
			cout << endl;
		}
	}
	else if (option == 4)
	{
		int resheniqOption;
		cout << "                                         " << "+ = = = = = = = = = = = = = = = = = = +" << endl;
		cout << "                                         " << "*   1. ??????? 1                      *" << endl;
		cout << "                                         " << "*   2. ??????? 2                      *" << endl;
		cout << "                                         " << "*   3. ??????? 3                      *" << endl;
		cout << "                                         " << "*   4. ??????? ??? ????               *" << endl;
		cout << "                                         " << "*   5. ?????                          *" << endl;
		cout << "                                         " << "+ = = = = = = = = = = = = = = = = = = +" << endl << endl;
		cout << "                                         " << "?????? ?????: ";
		cin >> resheniqOption;

		if (resheniqOption == 1)
		{
			cout << "tekst1";
		}
		else if (resheniqOption == 2)
		{
			cout << "tekst2";
		}
		else if (resheniqOption == 3)
		{
			cout << "tekst3";
		}
		else if (resheniqOption == 4)
		{
			int option4;
			cout << "                                         " << "+ = = = = = = = = = = = = = = = = = = +" << endl;
			cout << "                                         " << "*   1. ????? ???????                  *" << endl;
			cout << "                                         " << "*   2. ???????? ????? ???????         *" << endl;
			cout << "                                         " << "*   3. ???????? ????? ?????????       *" << endl;
			cout << "                                         " << "*   4. ??????? ?? ??????? ????????    *" << endl;
			cout << "                                         " << "*   5. ???????? ?? ????????           *" << endl;
			cout << "                                         " << "*   6. ?????                          *" << endl;
			cout << "                                         " << "+ = = = = = = = = = = = = = = = = = = +" << endl << endl;
			cout << "                                         " << "?????? ?????: ";
			cin >> option4;

			if (option4 == 6)
			{
				cout << endl;
			}
		}
		else if (resheniqOption == 5)
		{
			cout << endl;
		}
	}
	else if (option == 5)
	{
		int razvitiqOption;
		cout << "                                         " << "+ = = = = = = = = = = = = = = = = = = +" << endl;
		cout << "                                         " << "*   1. ???????? 1                     *" << endl;
		cout << "                                         " << "*   2. ???????? 2                     *" << endl;
		cout << "                                         " << "*   3. ???????? 3                     *" << endl;
		cout << "                                         " << "*   4. ??????? ??? ????               *" << endl;
		cout << "                                         " << "*   5. ?????                          *" << endl;
		cout << "                                         " << "+ = = = = = = = = = = = = = = = = = = +" << endl << endl;
		cout << "                                         " << "?????? ?????: ";
		cin >> razvitiqOption;

		if (razvitiqOption == 1)
		{
			cout << "tekst1";
		}
		else if (razvitiqOption == 2)
		{
			cout << "tekst2";
		}
		else if (razvitiqOption == 3)
		{
			cout << "tekst3";
		}
		else if (razvitiqOption == 4)
		{
			int option5;
			cout << "                                         " << "+ = = = = = = = = = = = = = = = = = = +" << endl;
			cout << "                                         " << "*   1. ????? ???????                  *" << endl;
			cout << "                                         " << "*   2. ???????? ????? ???????         *" << endl;
			cout << "                                         " << "*   3. ???????? ????? ?????????       *" << endl;
			cout << "                                         " << "*   4. ??????? ?? ??????? ????????    *" << endl;
			cout << "                                         " << "*   5. ???????? ?? ????????           *" << endl;
			cout << "                                         " << "*   6. ?????                          *" << endl;
			cout << "                                         " << "+ = = = = = = = = = = = = = = = = = = +" << endl << endl;
			cout << "                                         " << "?????? ?????: ";
			cin >> option5;

			if (option5 == 6)
			{
				cout << endl;
			}
		}
		else if (razvitiqOption == 5)
		{
			cout << endl;
		}
	}
}