// Deitel_ch5_CommVer.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <cmath>
#include "GradeBook.h"
#include "DollarAmount.h"

using namespace std;

// 5.2

//int main()
//{
//	int counter = 0; // объ€вить и инициапизировать управп€ацую переменную
//
//	while (++counter <= 10) // условие продолжени€ цикла
//		cout << counter << " ";
//				
//	cout << endl; // вывести символ новой строки
//	
//	return 0; // успешное зааершеиие
//}// конец main

// 5.4

//int main()
//{
//	double amount = 0.0; // amount on account in the end of year
//	double principal = 10000.0; // initial amount
//	double rate = 0.05; // interest rate
//
//	//
//	cout << "Year" << setw(21) << "Amount on deposit" << endl;
//
//	//
//	cout << fixed << setprecision(2);
//
//	//
//	for (int year = 1; year <= 10; year++)
//	{
//		principal += amount; // deposit amount each year
//		//
//		amount = principal * pow(1.0 + rate, year);
//
//		//
//		cout << setw(4) << year << setw(21) << amount << endl;
//	}
//
//	return 0;
//}

//5.5

/*int main()
{
	int counter = 1; // инициализировать счетчих
		
	do
	{
		cout << counter << " "; // вывести счетчик
		counter++; // увеличить счетчик
	} while (counter <= 10); // конец do . . . while

	cout << endl; // вывести новую строку
	return 0;
}*/

//5.6

/*int main()
{
	// создать 06'1.ехт GradeBook
	GradeBook myGradeBook("CS101 C++ Programming");
	
	myGradeBook.displayMessage(); // вывести приветственное сообщение
	myGradeBook.inputGrades(); // прочитать вводимые оценки
	myGradeBook.displayGradeReport(); // вывести отчет по оценкам
	return 0; // успешное завершение
} // конец main*/

//5.7

/*int main()
{
	int count; // счетчик, испопьзуеный также поспе выхода из цикла

	for (count = 1; count <= 10; count++) // повторить 10 раз
	{
		if (count == 5) // еспи count равен 5,
			continue; // продолжить цикл
			//break;завершить цикл

			cout << count << " ";
	} // конец for
	   	 
	cout << "\nBroke out of loop at count = " << count << endl;
	return 0; // успешное завершение
} // конец main*/

//5.7 Deitel 10-th edition C++14 Standard

/*int main() {
	DollarAmount d1{ 12345 }; // $123.45
	DollarAmount d2{ 1576 }; // $15.76

	cout << "After adding d2 (" << d2.toString() << ") into d1 ("
		<< d1.toString() << "), d1 = ";
	d1.add(d2); // modifies object d1
	cout << d1.toString() << "\n";

	cout << "After subtruct d2 (" << d2.toString() << ") from d1 ("
		<< d1.toString() << "), d1 = ";
	d1.subtract(d2); // modifies object d1
	cout << d1.toString() << "\n";

	cout << "After subtracting d1 (" << d1.toString() << ") from d2 ("
		<< d2.toString() << "), d2 = ";
	d2.subtract(d1); // modifies d2
	cout << d2.toString() << "\n\n";

	cout << "Enter integer interest rate and divisor. For example:\n"
		<< "for 2%, enter: 2 100\n"
		<< "for 2.3%, enter: 23 1000\n"
		<< "for 2.37%, enter: 237 10000\n"
		<< "for 2.375%, enter: 2375 100000\n> ";
	int rate; // whole-number interest rate
	int divisor; // divisor for rate
	cin >> rate >> divisor;

	DollarAmount balance{ 100000 }; // initial principal amount in pennies
	cout << "\nInitial balance: " << balance.toString() << endl;

	// display headers
	cout << "\nYear" << setw(20) << "Amount on deposit" << endl;

	//calculate amount on deposit for each of ten years
	for (unsigned int year{ 1 }; year <= 10; year++) {
		// increase balance by rate % (i.e., rate / divisor)
		balance.addInterest(rate, divisor);

		//display the year and the amount
		cout << setw(4) << year << setw(20) << balance.toString() << endl;
	}
}*/

// ”пражнени€

//5.5

/*int main()
{
	int counter{ 0 }; // define counter
	int quaNum; // define quantity entered numbers
	int entNum; // define entered number
	int sumNum{ 0 }; // initialize sum of numbers

	cout << "Enter the integer numbers, first value will mean\n "
		"how much will be put in further.\n";

	// While entering numbers goes to make sum of entered numbers
	while (cin >> entNum) {
		// if counter == 1 to make initialize the sum of numbers
		if (counter == 0) {
			quaNum = entNum; // assign quantity of entered numbers
		}
		else
			sumNum += entNum; // make sum of entered numbers

		// if quantity of numbers = counter to break cycle
		if (quaNum == counter) {
			cout << "Sum of numbers: " << sumNum; // print sum of entered numbers
			break;
		}
		counter++; // add 1 to counter
	}
	return 0;
}*/

//5.6

/*int main()
{
	int counter{ 0 }; // initialize counter by 0
	int num; // define number
	int sumNum{ 0 }; // initialize sum by 0
	int aveVal; // define average value

	cout << "Enter integer value.\n"
		"For indicate terminate to enter control value 9999.\n";

	// while not enter control value
	while (cin >> num) {
		// if entered control value 9999
		if (num == 9999)
			break; // exit from cycle

		sumNum += num; // sum entered numbers
		counter += 1; // add 1
	}

	aveVal = sumNum / counter; // compute average value

	cout << "Average value: " << aveVal;

	return 0;
}*/

//5.7

/*int main()
{
	int х; // объ€вить х
	int у; // объ€вить у
	
	// запросить ввод пользовател€
	cout << " Enter two integers in the range 1 -20: ";
	cin >> х >> у; // прочитать значени€ дл€ х и у
	
	for (int i = 1; i <= у; i++ )  // считать от 1 до у
		{
			for (int j = 1; j <= х; j++) // считать от 1 до х
			cout << '@'; // вwаести @
			cout << endl; // начать нов”JQ строку
		}	// конец внешнеrо fo r
return 0; // успешное sавершеиие
}// конец main*/

//5.8

/*int main()
{
	int num; // define entering number
	int quaNum{ 1 }; // initialize quantity entered numbers 1
	int counter{ 0 }; // initialize counter 0
	int lowNum{ 0 }; // initialize lowest number 0
	
	cout << "Enter numbers where first value means quantity of next numbers.\n";
	
	// while entering numbers
	// to find lowest value from all of them entered numbers
	while (cin >> num) {
		if (counter == 0)
			quaNum = num; // assign first value of number to quantity of numbers
		
		if (counter == 1)
			lowNum = num; // assign entered value to lowest value
				
		if (counter > 1 && num < lowNum) 
			lowNum = num; // assign entered value to lowest number
					
		// if counter equal quantity of enetered numbers
		if (counter == quaNum) {
			cout << "Lowest number is : " << lowNum; // print lowest value
			break; // out of cycle
		}
		counter++; // add 1 to counter
	}
	return 0;
}*/

//5.9

/*int main()
{
	int mulNum{ 1 }; // initialize multiplication of value

	//for numbers from 1 till 15 make multiply each other
	for (int i = 1; i <= 15; i += 2) {
		mulNum *= i; // multiplication calculate
	}

	cout << "Multiplication of numbers from 1 till 15 is: " << mulNum;

	return 0;
}*/

//5.10

/*int main()
{
	unsigned int firstVal = 1; // declare first value
	int factorial; // define factorial 1
	
	cout << setw(9) << "Factorial" << setw(25) << "Factorial values\n"; // print header of table

	// for numbers from 1 to 5 calculate factorial
	for (int i = 1; i <= 20; i++) {
		firstVal = i; // asssign i to first value
		factorial = 1;
		// while first value not equal 0
		while (firstVal != 0)
		{
			factorial *= firstVal; // compute factorial
			firstVal--; // subtruct 1 from first value
		}
		cout << setw(8) << i << "!" << setw(24) << factorial << endl; // print factorial and factorial values
	}
	return 0;
}*/

//5.11

/*int main()
{
	double amount = 0.0; // amount on account in the end of year
	double principal = 8000.0; // initial amount
	double rate; // defineinterest rate
	
	cout << fixed << setprecision(2);

	//for rate from 5% to 10% calculate compaund interest amount
	for (rate = 5; rate <= 10; rate++) 
	{
		cout << "Interest rate of year " << rate << "%.\n";
		cout << "Year" << setw(24) << "Amount on deposit" << endl; // print header of table

		// for year from 1 to 10 calculate compaund interest amount
		for (int year = 1; year <= 10; year++)
		{
			amount = principal * pow(1.0 + (rate / 100), year); // calculate interest

			cout << setw(4) << year << setw(24) << amount << endl; // print interest amount
		}
		cout << endl; // print empty row
	}
	return 0;
}*/

//5.12

/*int main()
{
	/*int i, j, k;
	//print asterisk (a) version
	cout << "(a)\n";
	for (i = 1; i <= 10; i++)
	{
		for (j = 1; j <= i; j++)
		{
			cout << '*';
		}


		cout << endl;
	}
	//print asterisk (b) version
	cout << "(b)\n";
	for (i = 10; i >= 1; i--)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << '*';
		}
		cout << endl;
	}
	//print asterisk (c) version
	cout << "(c)\n";
	for (i = 10; i >= 1; i--)
	{
		for (j = 1; j <= i; j++)
		{
			cout << '*'; // 
		}

		cout << endl;

		for (k = 0; k <= (10 - i); k++)
		{
			cout << " ";
		}
	}
	//print asterisk (d) version
	cout << "\n(d)\n";
	for (i = 1; i <= 10; i++)
	{
		for (k = 1; k <= (10 - i); k++)
		{
			cout << " ";
		}
		for (j = 1; j <= i; j++)
		{
			cout << '*';
		}
		cout << endl;
	}

	//facultative task
	int i, j, k;
	//print asterisk (a) version
	cout << setw(5) << "(a)" << setw(10) << "(b)" << setw(10) << "(c)" << setw(10) << "(d)\n";
	for (i = 1; i <= 10; i++)
	{
		// ========== (a)==========
		// 1. increasing asterisk
		for (j = 1; j <= i; j++)
		{
			cout << '*';		}
		// 2. decreasing space
		for (k = 0; k <= (10 - i); k++)
		{
			cout << " ";
		}
		// ========== (b)==========
		// 3. decreasing asterisk
		for (int j = 0; j <= (10 - i); j++)
		{
			cout << '*';
		}
		// 4. increasing space
		for (k = 1; k < i; k++)
		{
			cout << " ";
		}
		// ========== (c)==========
		// 5. incresing space 
		for (k = 1; k < i; k++)
		{
			cout << " ";
		}
		// 6. decreasing asterisk
		for (j = 0; j <= (10 - i); j++)
		{
			cout << '*'; // 
		}
		// ========== (d)==========
		// 7. decreasing space 
		for (k = 0; k <= (10 - i); k++)
		{
			cout << " ";
		}
		// 8. increasing asterisk
		for (j = 1; j <= i; j++)
		{
			cout << '*';
		}
		cout << endl;
	}
	return 0;
}*/

//5.13

/*int main()
{
	int quaAsterisk; // define quantity of Asterisk
	
	cout << "Enter wishing quantity of asterisk (from 1 to 30): "; // suggestion to enter asterisk
	
	// while reading 5 numbers print rows with asterisks
	while (cin >> quaAsterisk)
	{
		for (int i = 1; i <= quaAsterisk; i++)
		{
			cout << '*'; // print line with asterisk
		}
		cout << endl; // print empty row
	}
	return 0;
}*/

//5.14

/*int main()
{
	int numProd; // define number of product
	double priceProd; // define price of product
	int quaProd; // define quantity of product
	int day{ 7 }; // initialize number of day
	int counter{ 1 }; // initialize counter

	cout << "Enter number and quantity of product per day: "; // Suggestion to enter data

	// while reading are
	while (cin >> numProd >> quaProd)
	{
		// print top of header
		if (counter == 1)
			cout << setw(7) << "Product" << setw(20) << "Retail value\n";

		switch(numProd)
		{
		case 1: // 
		{
			priceProd = 2.98; // inintialize price of product in $
			// calculate common price for all week
			priceProd *= static_cast<double>(quaProd) * static_cast<double>(day); 
			// print number and retail value of  product
			cout << setw(7) << numProd << setw(18) << priceProd << '$' << endl; 
			break;
		}
		case 2:
		{
			priceProd = 4.50; // inintialize price of product in $
			// calculate common price for all week
			priceProd *= static_cast<double>(quaProd) * static_cast<double>(day);
			// print number and retail value of  product
			cout << setw(7) << numProd << setw(18) << priceProd << '$' << endl;
			break;
		}
		case 3:
		{
			priceProd = 9.98; // inintialize price of product in $
			// calculate common price for all week
			priceProd *= static_cast<double>(quaProd) * static_cast<double>(day);
			// print number and retail value of  product
			cout << setw(7) << numProd << setw(18) << priceProd << '$' << endl;
			break;
		}
		case 4:
		{
			priceProd = 4.49; // inintialize price of product in $
			// calculate common price for all week
			priceProd *= static_cast<double>(quaProd) * static_cast<double>(day);
			// print number and retail value of  product
			cout << setw(7) << numProd << setw(18) << priceProd << '$' << endl;
			break;
		}
		case 5:
		{
			priceProd = 2.98; // inintialize price of product in $
			// calculate common price for all week
			priceProd *= static_cast<double>(quaProd) * static_cast<double>(day);
			// print number and retail value of  product
			cout << setw(7) << numProd << setw(18) << priceProd << '$' << endl;
			break;
		}
		}
		// if counter equal 5 to break out of cycle
		if (counter == 5)
			break;
		counter++; // add 1 to counter
	}
	return 0;
}*/

// 5.15

//int main()
//{
//	GradeBook myBook("CS101 Programming"); // define object of class Grade Book
//
//	myBook.displayMessage(); // print name of course
//	myBook.inputGrades(); // enter students grade
//	myBook.displayGradeReport(); // print whole grade of class
//	myBook.averageGrades(); // print average grade whole class
//
//	return 0;
//}

//5.16

/*int main()
{
	double amount = 0; // amount on account in the end of year
	double principal = 1000; // initial amount
	double rate = 5; // interest rate
	int remDoll; // define remain dollar
	int remCent; // define remain cent

	// print top header
	cout << "Year" << setw(21) << "Amount on deposit" << endl;

	// set precision value
	//cout << fixed << setprecision(3);

	// for year from 1 to 10 make calculation and print
	for (int year = 1; year <= 10; year++)
	{
		// calculate amount of interest
		amount = principal * pow(1 + rate / 100, year) * 100;

		remDoll = amount / 100; // calculate whole part
		remCent = static_cast<int>(amount) % remDoll; // calculate remain

		// print results
		cout << setw(4) << year << setw(18) << remDoll << '.' << remCent << endl;
	}

	return 0;
}*/

//5.17

//int main()
//{
//	int i{ 1 };
//	int j{ 2 };
//	int k{ 3 };
//	int m{ 2 };
//
//	cout << boolalpha << (!(j - m)) << endl;
//
//	return 0;
//}

//5.18

/*int main()
{
	int x2{ 2 }; // initialize base of binary the number system
	int x8{ 8 }; // initialize base of octal the number system
	int x16{ 16 }; // initialize base of hexadecimal the number system
	int counter{ 1 }; // initialize counter of numbers
	string bin{ ' ' }; // define binary
	string oct{ ' ' }; // define octal 
		
	cout << setw(7) << "Decimal" << setw(12) << "Binary" << setw(10) << "Octal"
		<< setw(15) << "Hexadecimal\n"; // print top header

	// while numbers less 256 print equivalent bin, oct, hex
	while (counter != 256)
	{
		cout << setw(7) << counter; // print decimal value

		// Binary system
		cout << setw(13); // set row width
		// for value from 1 to 256 
		for (int i = counter; i != 0; i /= x2)
		{
			bin += to_string(i % x2); // calculation remains
		}
		reverse(bin.begin(), bin.end()); // reverse string
		cout << bin; // print bin result
		bin = ' '; // assign empty sign

		// Octal system
		cout << setw(10); // set row width
		for (int i = counter; i != 0; i /= x8)
		{
			oct += to_string(i - x8 * (i / x8)); // calculation remains
		}
		reverse(oct.begin(), oct.end()); // reverse string
		cout << oct; // print bin result
		oct = ' '; // assign empty sign


		// Hexadecimal system
		cout << setw(14); // set row width
		
		cout.unsetf(ios::dec); // // unset flag in decimal number system
		cout.setf(ios::hex | ios::uppercase);; // set flag in hexadecimal number system

		cout << counter; // print hex value
		
		cout << endl; // print empty row
		counter++; // add 1 to counter

		cout.setf(ios::dec); // set flag in decimal number system
	}
return 0;
}*/

//5.19

/*int main()
{
	double pi{ 3.14159 }; // initialize pi number
	double a{ 4 }; // initialize member of row
	double s{ 0 }; // initialize sum of row
	int sign{ -1 }; // initialize sign
	int n{ 1 }; // initialize n - counter
		
	for (; fabs(a) >= 0.01; n++) 
		// for accuracy 1e-5 - 2e+5 iteration
		// for accuracy 1e-4 - 2e+4 iteration
		// for accuracy 1e-3 - 2e+3 iteration
		// for accuracy 1e-2 - 2e+2 iteration
	{
		s += a; // sum
		a = sign * 4. / (2 * n + 1); // calculate member of row
		sign = -sign; // inverse sign

		cout << n << "\t" << "Pi: " << s << endl; // print number of itieration and value Pi 
	}
	return 0;
}*/

// 5.20

/*int main()
{
	int a{ 1 }; // initialize side a
	int b; // define side b
	int c; // define side c

	cout << "Pifagor threes:\n";

	// for values from 1 to 500 find Pifagor threes
	for (; a <= 500; a++)
	{
		b = 1;
		for (; b <= 500; b++)
		{
			c = 1;
			for (; c <= 500; c++)
			{
				if (pow(c, 2) == pow(a, 2) + pow(b, 2))
				{
					cout << a << "\t" << b << "\t" << c << endl;
				}
			}
		}
	}

	return 0;
}*/

// 5.21

/*int main()
{
	int typeEmpl; // define input data type of employe
	double day; // define input data quantity of working day
	int hours; // define input data quantity of working hours
	double sumSaleWeek; // define input data sum of sale week
	int quaProd; // define input data quantity of product
	double salaryEmpl; // define salary each employe
	int overWorkHours; // define quantity over working hours

	double workWeek{ 7 }; // initialize working day per week
	int workHours{ 40 }; // initialize general quantity working hours
	double rateManager{ 600.0 }; // initialize week salary rate of manager ($)
	double rateHourly{ 10.0 }; // initialize hourly rate salary of hourly employes ($)
	double rateComis{ 250.0 }; // initialize week salary rate of employe(commission type)($)
	double priceProd{ 14.5 }; // initialize price of each product
	double percRate{ 5.7 }; // initialize percentage rate of salary for commission type employe
	double overWorkRate{ 50.0 }; // initialize overwork percentage rate of salary for hourly type employe

	cout << "Enter data of employes for calculate week salary.\n"
		"Enter number type of emloyes (1 - manager, 2 - hourly, 3 - commission, 4 - pieceworkers): ";

	while (cin >> typeEmpl)
	{
		salaryEmpl = 0; // inintialize salary of employe

		switch (typeEmpl) 
		{
		case 1: // for manager
		{
			cout << "\n====== Manager's salary ======\nEnter numbers of day worked: "; // suggestion to enter days
			cin >> day; // enter quantity of day
			salaryEmpl = rateManager * (day / workWeek); // calculation salary for manager
			cout << "Weekly salary is: " << fixed << setprecision(2) << salaryEmpl << endl; // print result of salary
			break;
		}
		case 2: // for hourly
		{
			cout << "\n====== Hourly's salary ======\nEnter number of working hours: "; // suggestion to enter hours
			cin >> hours; // enter hours
			if (hours <= workHours) // verifying exceed hours
			{
				salaryEmpl = hours * rateHourly; // calculation salary for hourly employe
			}
			else
			{	// calculation salary for hourly employe if there is overwork
				salaryEmpl = workHours * rateHourly + (hours - workHours) * (rateHourly + rateHourly * (overWorkRate / 100));
			}
			cout << "Weekly salary is: " << fixed << setprecision(2) << salaryEmpl << endl; // print result of salary
			break;
		}
		case 3: // For commission
		{
			cout << "\n====== Commission's salary ======\nEnter weekly sum: "; // suggestion to enter weekly sum
			cin >> sumSaleWeek; // enter weekly sum
			salaryEmpl = rateComis + sumSaleWeek * (percRate / 100); // calculation salary for commission employe
			cout << "Weekly salary is: " << fixed << setprecision(2) << salaryEmpl << endl; // print result of salary
			break;
		}
		case 4: // For pieceworker
		{
			cout << "\n====== Pieceworker's salary ======\nEnter quantity of product: "; // suggestion to enter data
			cin >> quaProd; // enter
			salaryEmpl = quaProd * priceProd; // calculation salary for pieceworker
			cout << "Weekly salary is: " << fixed << setprecision(2) << salaryEmpl << endl; // print result of salary
			break;
		}
		}
		cout << "\nEnter number type of emloyes (1 - manager, 2 - hourly, 3 - commission, 4 - pieceworkers): ";
	}
	return 0;
}*/

//5.22

/*int main()
{
	int x{ 6 }, y{ 8 };
	int a{ 2 }, b{ 1 }, g{ 5 };

	cout << (!(x < 5) && !(y >= 7));
	cout << endl;
	cout << !((x < 5) || (y >= 7));
	cout << endl;
	cout << !(a == b) || !(g != 5);
	cout << endl;
	cout << !((a == b) && (g != 5));


	return 0;
}*/

// 5.23

/*int main()
{
	int rowCounter{ 0 }; // initialize rows counter 1
	char asterisk{ '*' }; // initialize sign asterisk
	char whiteSpace{ ' ' }; // initialize sign whitespace
	int numSign{ 9 }; // initialize number signs in rows and column of romb
	int numAster{ 1 }; // initialize number of asterisk 1
	int numSpace; // define number of whitespace
	int midRow; // define number middle row
	
	while (rowCounter < numSign)
	{
		midRow = numSign - numSign / 2; // calculate number moddle row

		if (rowCounter < midRow)
		{
			numAster = 2 * rowCounter + 1; // increase number of asterisk
		}
		else
		{
			numAster -= 2; // decrease number of asterisk
		}

		numSpace = (numSign - numAster) / 2; // calculation number of whitespace

		for (int i = 1; i <= numSpace; i++)
		{
			cout << whiteSpace; // print whitespace
		}
		for (int i = 1; i <= numAster; i++)
		{
			cout << asterisk; // print asterisk
		}
		cout << endl;
		rowCounter++; // add 1 to rows counter
	}
	return 0;
}*/

// 5.24

/*int main()
{
	int rowCounter{ 0 }; // initialize rows counter 1
	char asterisk{ '*' }; // initialize sign asterisk
	char whiteSpace{ ' ' }; // initialize sign whitespace
	int numSign; // define number signs in rows and column of romb
	int numAster{ 1 }; // initialize number of asterisk 1
	int numSpace; // define number of whitespace
	int midRow; // define number middle row

	cout << "Enter wishinig odd number of rows (from 1 to 19): "; // suggestion to enter number of rows
	cin >> numSign; // enter number of rows

	while (rowCounter < numSign)
	{
		midRow = numSign - numSign / 2; // calculate number moddle row

		if (rowCounter < midRow)
		{
			numAster = 2 * rowCounter + 1; // increase number of asterisk
		}
		else
		{
			numAster -= 2; // decrease number of asterisk
		}

		numSpace = (numSign - numAster) / 2; // calculation number of whitespace

		for (int i = 1; i <= numSpace; i++)
		{
			cout << whiteSpace; // print whitespace
		}
		for (int i = 1; i <= numAster; i++)
		{
			cout << asterisk; // print asterisk
		}
		cout << endl;
		rowCounter++; // add 1 to rows counter
	}
	return 0;
}*/

// 5.25

// 5.26

/*int main()
{
	int i, j, k;

	for (i = 1; i <= 5; i++) {
		for (j = 1; j <= 3; j++) {
			for (k = 1; k <= 4; k++)
				cout << '*';
			cout << endl;
		} // конец внутреннего for
			cout << endl;
	}// конец внешнего for

	return 0;
}*/

// 5.27

/*int main()
{
	for (int count = 1; count <= 10; count++) // повторить 1 0 раз
	{
		if(count == 5)// если count равен 5 ,
			;// пропустить оставшийс€ код цикла
		else
			cout << count << " ";
	}// конец for
	cout << " \nUsed continue to skip printing 5" << endl;
	return 0; // успешное завершение
}// конец main*/

// 5.28

/*int main()
{
	int dayCount{ 1 }; // initialize day counter
	int christmasDay{ 12 }; // initialize christmas day
	string song; // define text of song

	cout << "The twelve days of christmas!";
	cout << endl;

	while (dayCount <= christmasDay)
	{
		song += "\nOn the ";
		switch (dayCount) // print name of day by letter
		{
		case 1:
		{
			song += "first ";
			break;
		}
		case 2:
		{
			song += "second ";
			break;
		}
		case 3:
		{
			song += "third ";
			break;
		}
		case 4:
		{
			song += "forth ";
			break;
		}
		case 5:
		{
			song += "fifth ";
			break;
		}
		case 6:
		{
			song += "sixth ";
			break;
		}
		case 7:
		{
			song += "seventh ";
			break;
		}
		case 8:
		{
			song += "eight ";
			break;
		}
		case 9:
		{
			song += "ninth ";
			break;
		}
		case 10:
		{
			song += "tenth ";
			break;
		}
		case 11:
		{
			song += "eleventh ";
			break;
		}
		case 12:
		{
			song += "twelfth ";
			break;
		}
		}

		switch (dayCount) // print remaining text of each verse
		{
		case 1:
		{
			song += "day of Christmas\n"
					"My true love sent to me\n"
					"A partridge in a pear tree.\n";
			break;
		}
		case 2:
		{
			song += "day of Christmas\n"
				"My true love sent to me\n"
				"Two turtle doves and\n"
				"A partridge in a pear tree.\n";
			break;
		}
		case 3:
		{
			song += "day of Christmas\n"
				"My true love sent to me\n"
				"Three french hens\n"
				"Two turtle doves and\n"
				"A partridge in a pear tree.\n";
			break;
		}
		case 4:
		{
			song += "day of Christmas\n"
				"My true love sent to me\n"
				"Four calling birds\n"
				"Three french hens\n"
				"Two turtle doves and\n"
				"A partridge in a pear tree.\n";
			break;
		}
		case 5:
		{
			song += "day of Christmas\n"
				"My true love sent to me :\n"
				"Five gold rings\n"
				"Four calling birds\n"
				"Three french hens\n"
				"Two turtle doves and\n"
				"A partridge in a pear tree.\n";
			break;
		}
		case 6:
		{
			song += "day of Christmas,\n"
				"My true love sent to me\n"
				"Six geese a - laying\n"
				"Five gold rings\n"
				"Four calling birds\n"
				"Three french hens\n"
				"Two turtle doves and\n"
				"A partridge in a pear tree.\n";
			break;
		}
		case 7:
		{
			song += "day of Christmas\n"
				"My true love sent to me\n"
				"Seven swans a - swimming\n"
				"Six geese a - laying\n"
				"Five gold rings\n"
				"Four calling birds\n"
				"Three french hens\n"
				"Two turtle doves and\n"
				"A partridge in a pear tree.\n";
			break;
		}
		case 8:
		{
			song += "day of Christmas,\n"
				"My true love sent to me\n"
				"Eight maids a - milking\n"
				"Seven swans a - swimming\n"
				"Six geese a - laying\n"
				"Five gold rings\n"
				"Four calling birds\n"
				"Three french hens\n"
				"Two turtle doves and\n"
				"A partridge in a pear tree.\n";
			break;
		}
		case 9:
		{
			song += "day of Christmas,\n"
				"My true love sent to me\n"
				"Nine ladies dancing\n"
				"Eight maids a - milking\n"
				"Seven swans a - swimming\n"
				"Six geese a - laying\n"
				"Five gold rings\n"
				"Four calling birds\n"
				"Three french hens\n"
				"Two turtle doves and\n"
				"A partridge in a pear tree.\n";
			break;
		}
		case 10:
		{
			song += "day of Christmas\n"
				"My true love sent to me\n"
				"Ten lords a - leaping\n"
				"Nine ladies dancing\n"
				"Eight maids a - milking\n"
				"Seven swans a - swimming\n"
				"Six geese a - laying\n"
				"Five gold rings\n"
				"Four calling birds\n"
				"Three french hens\n"
				"Two turtle doves and\n"
				"A partridge in a pear tree.\n";
			break;
		}
		case 11:
		{
			song += "day of Christmas\n"
				"My true love sent to me\n"
				"Eleven pipers piping\n"
				"Ten lords a - leaping\n"
				"Nine ladies dancing\n"
				"Eight maids a - milking\n"
				"Seven swans a - swimming\n"
				"Six geese a - laying\n"
				"Five gold rings\n"
				"Four calling birds\n"
				"Three french hens\n"
				"Two turtle doves and\n"
				"A partridge in a pear tree.\n";
			break;
		}
		case 12:
		{
			song += "day of Christmas\n"
				"My true love sent to me\n"
				"Twelve drummers drumming\n"
				"Eleven pipers piping\n"
				"Ten lords a - leaping\n"
				"Nine ladies dancing\n"
				"Eight maids a - milking\n"
				"Seven swans a - swimming\n"
				"Six geese a - laying\n"
				"Five gold rings\n"
				"Four calling birds\n"
				"Three french hens\n"
				"Two turtle doves and\n"
				"A partridge in a pear tree.\n";
			break;
		}
		}
		dayCount++; // add 1 to day counter
	}
	cout << song; // print song
	
	return 0;
}*/

// 5.29

/*int main()
{
	double amount = 0.0; // amount on account in the end of year
	double principal = 24.0; // initial amount
	double rate; // define interest rate
	int yearPer; // define year period

	cout << fixed << setprecision(2);
	yearPer = 2021 - 1626; // calculation period of year

	//for rate from 5% to 10% calculate compaund interest amount
	for (rate = 5; rate <= 10; rate++)
	{
		cout << "Interest rate of year " << rate << "%.\n";
		cout << "Year" << setw(24) << "Amount on deposit" << endl; // print header of table

		// for year from 1 to 10 calculate compaund interest amount
		for (int year = 1; year <= yearPer; year++)
		{
			amount = principal * pow(1.0 + (rate / 100), year); // calculate interest

			cout << setw(4) << year << setw(24) << amount << endl; // print interest amount
		}
		cout << endl; // print empty row
	}
	return 0;
}*/

// 5.30

