#include<stdlib.h>
#include<locale.h>
#include<math.h>
#include<iostream>
#include<algorithm>
#include<locale.h>
using namespace std;
int main()

{
	setlocale(LC_ALL, "russian");
	using namespace std;
	int task;
	cin >> task;
	switch (task)
	{
	case 1:
		/*//1.	Локатор может быть ориентирован на одну из сторон света («C» – север, «Ю» – юг, «З» –  запад, «В» – восток)
		и может принимать команды: «1» – поворот направо (90º), «–1» –  поворот налево (–90º), «2» – поворот в обратную сторону
		(180º). Исходная ориентация локатора «C». Определить ориентацию локатора после выполнения последовательности вводимых
		команд N1, N2 */
	{
		int n1, n2;
		cout << "Введите команду 1 " << endl;
		cin >> n1;
		cout << "Введите команду 2 " << endl;
		cin >> n2;
		switch (n1 + n2)
		{
		case 0: cout << "север\n" << endl;
			break;
		case 1: cout << "запад\n" << endl;
			break;
		case 2: cout << "юг\n";
			break;
		case -1: cout << "восток\n" << endl;
			break;
		case -2: cout << "юг\n" << endl;
			break;
		case 3: cout << "восток\n" << endl;
			break;
		case 4: cout << "север\n" << endl;
			break;

		}
	}


	{
	case 2:
		/*/2.	Даны значения трех сторон треугольника a, b и c. Определить вид треугольника
		(прямоугольный, равносторонний или простой). Ответ вывести в виде сообщения.*/

		double a, b, c;
		cin >> a;
		cin >> b;
		cin >> c;
		if (a*a + b*b == c*c)
		{
			cout << "treugolnik prymougolniy" << endl;
		}
		else if (a == b && b == c)
		{
			cout << "treugolnik ravnostoronniy" << endl;
		}
		else
		{
			cout << "treugolnik prostoi" << endl;
		}
		break;
	}

	{
	case 3:
		/*//3.	Даны два числа A и B. Разработать и описать алгоритм, в результате которого числа меняют свой знак на
		противоположный, если они имеют разный знак и будут заменены на нули, если это не так.*/
		int a, b;
		cin >> a;
		cin >> b;
		if ((a < 0 && b>0) || (a > 0 && b < 0))
		{
			a = -a;
			b = -b;
			cout << a << endl;
			cout << b << endl;
		}
		else
		{
			a = 0;
			b = 0;
			cout << a << endl;
			cout << b << endl;
		}
		break;
	}

	{
	case 4:
		/*/4.	Дано целое число k (1<k<365). Определить, каким днем недели (понедельник, вторник, воскресенье)
		является k-день невысокосного года, если 1 января – понедельник.*/
	{
		int k;
		cin >> k;
		if (k % 7 == 1)
		{
			cout << "ponedelnik" << endl;
		}
		else if (k % 7 == 2)
		{
			cout << "vtornik" << endl;
		}
		else if (k % 7 == 3)
		{
			cout << "sreda" << endl;
		}
		else if (k % 7 == 4)
		{
			cout << "chetverg" << endl;
		}
		else if (k % 7 == 5)
		{
			cout << "pyatnica" << endl;
		}
		else if (k % 7 == 6)
		{
			cout << "subbota" << endl;
		}
		else if (k % 7 == 0)
		{
			cout << "voskresenie" << endl;
		}

	}
	break;
	}

	{
	case 5:
		/*/5.	Закажите гостиницу на курорте Трускавец, выбрав уровень гостиницы  количество мест в номере,
		проживание с питанием или без. Гостиница «Курортная» пять звезд, одноместная комната – 1000 тн
		в сутки (с питанием 1500 тн), двухместный – 1500 тн (с питанием 2500 тн). Гостиница «Верховина» четыре звезды,
		одноместная комната – 600 тн в сутки (с питанием 900 тн), двухместный - 900гр (с питанием 1500 тн).
		Гостиница «Гуцулка» три звезды, одноместная комната – 300 тн в сутки (с питанием 500тн), двухместный – 450 тн
		(с питанием 800 тн). Предусмотреть обработку ошибок ввода.*/
	{
		int a, b, c;
		cout << "vyberite uroven gostinicy" << endl;
		cin >> a;
		cout << "vyberite kolichestvo mest" << endl;
		cin >> b;
		cout << "vyberete s pitaniem (1) ili bez(2)" << endl;
		cin >> c;
		if (a == 5 && b == 1 && c == 1)
		{
			cout << "Gostinica Kurortnaya, 5 zvezd,mest 1, pitanie vklucheno, vsego cena=  1500 tn v sutki" << endl;
		}
		else if (a == 5 && b == 1 && c == 2)
		{
cout << "Gostinica Kurortnaya, 5 zvezd,mest 1, pitanie nevklucheno, vsego cena=  1000 tn v sutki" << endl;
		}

		else if (a == 5 && b == 2 && c == 1)
		{
			cout << "Gostinica Kurortnaya, 5 zvezd,mest 2, pitanie vklucheno, vsego cena=  2500 tn v sutki" << endl;
		}
		else if (a == 5 && b == 2 && c == 2)
		{
			cout << "Gostinica Kurortnaya, 5 zvezd,mest 1, pitanie nevklucheno, vsego cena=  1500 tn v sutki" << endl;
		}
		else if (a == 4 && b == 1 && c == 1)
		{
			cout << "Gostinica Verhovina, 4 zvezd,mest 1, pitanie vklucheno, vsego cena=  900 tn v sutki" << endl;
		}
		else if (a == 4 && b == 1 && c == 2)
		{
			cout << "Gostinica Verhovina, 4 zvezd,mest 1, pitanie nevklucheno, vsego cena=  600 tn v sutki" << endl;
		}
		else if (a == 4 && b == 2 && c == 1)
		{
			cout << "Gostinica Verhovina, 4 zvezd,mest 2, pitanie vklucheno, vsego cena=  1500 tn v sutki" << endl;
		}
		else if (a == 4 && b == 2 && c == 2)
		{
			cout << "Gostinica Verhovina, 4 zvezd,mest 2, pitanie nevklucheno, vsego cena=  900 tn v sutki" << endl;
		}
		else if (a == 3 && b == 1 && c == 1)
		{
			cout << "Gostinica Guculka, 3 zvezdy,mest 1, pitanie vklucheno, vsego cena=  500 tn v sutki" << endl;
		}
		else if (a == 3 && b == 1 && c == 2)
		{
			cout << "Gostinica Guculka, 3 zvezdy,mest 1, pitanie nevklucheno, vsego cena=  300 tn v sutki" << endl;
		}
		else if (a == 3 && b == 2 && c == 1)
		{
			cout << "Gostinica Guculka, 3 zvezdy,mest 2, pitanie vklucheno, vsego cena=  800 tn v sutki" << endl;
		}
		else if (a == 3 && b == 2 && c == 2)
		{
			cout << "Gostinica Guculka, 3 zvezdy,mest 2, pitanie nevklucheno, vsego cena=  450 tn v sutki" << endl;
		}
		else
		{
			cout << "Vy vveli ne pravilnie dannye" << endl;
		}

		break;
	}


	}

	{
	case 6:
		/*/6.	Напишите функцию int f(int x), которая принимает целое значение (не больше пяти знаков) и возвращает число
		с обратным порядком цифр. Например, принимается число 7631, возвращается число 1367.*/
	{
		int a, b, c, d, e, f;
		cin >> a;
		if (a < 100000 && a>10000)
		{
			b = a % 10;
			c = (a % 100) / 10;
			d = (a % 1000) / 100;
			e = (a % 10000) / 1000;
			f = (a % 100000) / 10000;
			cout << b << c << d << e << f << endl;
		}
		else if (a < 10000 && a>1000)
		{
			b = a % 10;
			c = (a % 100) / 10;
			d = (a % 1000) / 100;
			e = (a % 10000) / 1000;
			cout << b << c << d << e << endl;
		}
		else if (a < 1000 && a>100)
		{
			b = a % 10;
			c = (a % 100) / 10;
			d = (a % 1000) / 100;
			cout << b << c << d << endl;
		}
		else if (a < 100 && a>10)
		{
			b = a % 10;
			c = (a % 100) / 10;
			d = (a % 1000) / 100;
			cout << b << c << endl;
		}
		else
		{
			cout << a << endl;
		}
	}
	break;
	}
	}
	
	


	system("pause");
	return 0;
}
