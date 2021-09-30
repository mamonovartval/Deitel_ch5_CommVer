// Определения элемент - функций GradeBook.Файл содержит
// реализацию фунхций, прототипы которых объявлены в GradeBook.h .
#include <iostream>
#include <iomanip> // параметризованные манипуляторы потока
using namespace std;

#include "GradeBook.h" //Включить определение хласса GradeBook
// конструктор инициализирует courseName переданной строхой
GradeBook::GradeBook(string name )
{
	setCourseName(name); // инициализировать вызовом sеt- фунхции
	aCount = 0; // инициализировать нулем счетчих оценоk А
	bCount = 0; // инициализировать нулем счетчих оценоk B
	cCount = 0; // инициализировать нулем счетчих оценоk с
	dCount = 0; // инициализировать нулем счетчих оценоk D
	fCount = 0; // инициализировать нулем счетчих оценоk F
	countGrades = 0; // initialize counter of grades whole class
} // конец конструктора GradeBook

// функция , устаналиваацая название курса ;
// гарантирует , что название курса содержит не более 2 5 символов
void GradeBook::setCourseName(string name)
{
	if (name.length() <= 25) // если не более 2 5 символов
	courseName = name; // сохранить название хурса в объекта
	else // если в названии более 2 5 символов
	{
		// записать в courseName первые 25 символов параметра name
		courseName = name.substr(0, 25); // начать с О , длина 2 5

		cout << "Name \"" << name << "\" exceeds maximum length.\n"
			 "Limiting courseName to first 25 characters.\n" << endl;
	} // конец if...else
} // хонец фунхции se tCourseName

// функция для получения названия хурса
string GradeBook::getCourseName()
{
	return courseName; // возвратить courseName объекта
} // конец функции getCourseName

// вывести сообщение -приветствие пользователя GradeBook
void GradeBook::displayMessage()
{
	// вызвать ge tCourseName для получения courseName
	cout << "Welcome to the grade book for\n" << getCourseName()
		<< "!\n" << endl;
} // конец фунхции displayMessage

// ввести произвольное число оценок; обновить счетчик оценок
void GradeBook::inputGrades()
{
	int grade; // оценка, введенная пользователем

	cout << "Enter the letter grades." << endl
		<< "Enter the EOF character to end input." << endl;
	// цикл, пока пользователь не введет комбинацию дпя конца файла
		while((grade = cin.get()) != EOF)
		{			
			// определить, какая введена оценка
			switch(grade) // оператор switch , вложенный в while
			{
			case 'A': // оценка А в верхнем регистре
			case 'a': // или а в нижнем регистре
				aCount++; // увеличить aCount
				countGrades += 4; // add A - equivalent equal "4"
				break; // необходим дпя в:wхода из switch

			case 'B': // оценка В в верхнем регистре
			case 'b': // или Ь в нижнеи регистре
				bCount++; // увеличить bCount
				countGrades += 3; // add B - equivalent equal "3"
				break; // в:wход из switch

			case 'C': // оценха С в верхнем регистре
			case 'c': // или с в нижнем реrистре
				cCount++; // увеличить cCount
				countGrades += 2; // add C - equivalent equal "2"
				break; // в:wход из switch
			
			case 'D': // оценка D в верхнем регистре
			case 'd': // ипи d в НЮ1СНем регистре
				dCount++; // увеличить dCount
				countGrades += 1; // add D - equivalent equal "1"
				break; // выход из switch
			
			case 'F': // оценка F в верхнем регистре
			case 'f': // ипи f в нижнем регистре
				fCount++; // увеличить fCount
				break; // выход из switch
			
			case '\n': // игнорировать вводимые символы новой строки,
			case '\t': // табуляции
			case ' ': // и пробела
				break; // выход из switch
			
			default: // перехватывает все остальные символы
			 cout << "Incorrect letter grade entered."
			 << " Enter a new grade." << endl;
				break; // не обязателен; выход из switch в любoм случае
			} // конец switch
		} // конец while
}// конец функции inputGrades

// вывести отчет п о оценкам , введенным пользователем
void GradeBook::displayGradeReport()
{
	// вwвести сводку результатов
		cout << "\n\nNumber of students who received each letter grade:"
		<< " \nA: " << aCount // вwвести число оценок А
		<< " \nB: " << bCount // вwвести число оценок В
		<< " \nC: " << cCount // вwвести число оценок С
		<< " \nD: " << dCount // вwвести число оценок D
		<< " \nF: " << fCount // вwвести число оценок F
		<< endl;
}// конец функции di splayGradeReport

 // calculate average of grades whole class
void GradeBook::averageGrades()
{
	countGrades /= (aCount + bCount + cCount + dCount + fCount); // calculate average grade whole class
	cout << "\nAverage grade whole class: " << fixed << setprecision(1) << countGrades << endl; // print average grade whole class
}