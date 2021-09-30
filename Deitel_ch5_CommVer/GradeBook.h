// Определение 11tJJacca GradeBook.Файл представляет собой открытый
// интерфейс GradeBook, не раскрывая реализации элемент - функций
// класса , которые определяются в GradeBook . cpp .
#pragma once
#include <string>
using namespace std;

class GradeBook
{
public:
	GradeBook(string);    // конструктор инициализирует courseName переданной строкой
	void setCourseName(string);   // функция , устанавливаацая название курса
	string getCourseName();       // функция , получаацая название курса
	void displayMessage();        // функция , выводящая сообщение - приветствие
	void inputGrades(); // ввести произвольное число оценок
	void averageGrades(); // function calculation average grades
	void displayGradeReport(); // вывести отчет по введенным оценкам
private:
	string courseName; // название курса для данноrо GradeBook
	int aCount; // число оценох А
	int bCount; // число оценох В
	int cCount; // число оценох С
	int dCount; // число оценох D
	int fCount; // число оценох F
	double countGrades; // counter of grades
}; // конец класса GradeBook