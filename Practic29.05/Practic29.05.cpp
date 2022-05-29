#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "");
	/*
	float dol_rub = 65;
	float eur_rub = 67;
	float dol_eur = 1.03;
	int i, temp; 
	char flag;
	while (true) {
		cout << "Меню:\n"
			<< "------------------\n"
			<< "Из рублей в доллары(1)\n"
			<< "Из рублей в евро(2)\n"
			<< "Из долларов в рубли(3)\n"
			<< "Из евро в рубли(4)\n"
			<< "Из долларов в евро(5)\n"
			<< "Из евро в доллары(6)\n"
			<< "------------------\n";
		cin >> i;

		switch (i) {
		case 1:
			cout << "Рубли: ";
			cin >> temp;
			cout << "Результат: " << temp * dol_rub / 100 << endl;
			break;
		case 2:
			cout << "Рубли: ";
			cin >> temp;
			cout << "Результат: " << temp * eur_rub / 100 << endl;
			break;
		case 3:
			cout << "Доллары: ";
			cin >> temp;
			cout << "Результат: " << temp * dol_rub << endl;
			break;
		case 4:
			cout << "Евро: ";
			cin >> temp;
			cout << "Результат: " << temp * eur_rub << endl;
			break;
		case 5:
			cout << "Доллары: ";
			cin >> temp;
			cout << "Результат: " << temp * dol_eur / 100 << endl;
			break;
		case 6:
			cout << "Евро: ";
			cin >> temp;
			cout << "Результат: " << temp * dol_eur << endl;
			break;
		default:
			break;
		}
		
		cout << "Хотите произвести конвертацию заново? да - 1/нет - любая кнопка\n";
		cin >> flag;
		if (flag != '1') break;

		system("cls");
	}
	cout << "Конец программы:)";
	*/

	/*
	
	********************
	********************
	********************
	********************

	*/
/*
	int a, b;
	cin >> a >> b;

	for (int i = 0; i < b; i++) { // цикл для каджой строки
		for (int j = 0; j < a; j++) { // цикл для каждого символа в строке
			cout << '*';
		}
		cout << endl;
	}
	
	
	*
	**
	***
	****
	*****
	******
	*******
	

	for (int i = 1; i <= b; i++) { // цикл для каджой строки
		for (int j = 0; j < i; j++) { // цикл для каждого символа в строке
			cout << '*';
		}
		cout << endl;
	}

	высота 5, ширина 9
	----*
	---***
	--*****
	-*******
	*********
 

int h = 5, w = 9, space = w / 2;
for (int i = 0, j = 1; i < h; i++, space--, j += 2) {
		cout << string(space, ' ') << string(j,'*') << endl;
}


	----*
	---***
	--*****
	-*******
	*********
	 *******
	  *****
	   ***
		*


int h = 5, w = 9, space = w / 2;
for (int i = 0, j = 1; i < h; i++, space--, j += 2) {
	cout << string(space, ' ') << string(j, '*') << endl;
}

space++;
space++;
for (int i = 1, j = w-2; i < h; i++, space++, j -= 2) {
	cout << string(space, ' ') << string(j, '*') << endl;
}

for (int i = 1, j = w - 2; i < h; i++, space--, j -= 2) {
	cout << string(abs(space), ' ') << string(j, '*') << endl;
	
}*/

/*

	************
	*          *
	*          *
	************



int w = 9, h = 4;

for (int i = 0; i < h; i++) {
	if (i == 0 || i == h-1) cout << string(w, '*') << endl;
	else cout << '*' << string(w - 2, ' ') << '*' << endl;
}


 
*
**
* *
*  *
*   *
*    *
*******


int h = 7, w = 7;

cout << '*' << endl;
for (int i = 0; i < h - 2; i++) {
	cout << '*' << string(i, ' ') << '*' << endl;
}
cout << string(w,'*') << endl;



    *
   * *
  *   *
 *     *
*********

*/
int h = 6, w = 11;
int space1 = w / 2;
cout << string(space1--, ' ') << '*' << endl;
for (int i = 1; i <= 2*(h - 2); i += 2, space1--) {
//for (int i = 1, j = 1; i <= h - 2; i++, j+= 2, space1--) {
	cout << string(space1, ' ') << '*' << string(i, ' ') << '*' << endl;
}
cout << string(w, '*');
}
