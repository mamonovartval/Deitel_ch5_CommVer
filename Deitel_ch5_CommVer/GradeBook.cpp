// ����������� ������� - ������� GradeBook.���� ��������
// ���������� �������, ��������� ������� ��������� � GradeBook.h .
#include <iostream>
#include <iomanip> // ����������������� ������������ ������
using namespace std;

#include "GradeBook.h" //�������� ����������� ������ GradeBook
// ����������� �������������� courseName ���������� �������
GradeBook::GradeBook(string name )
{
	setCourseName(name); // ���������������� ������� s�t- �������
	aCount = 0; // ���������������� ����� ������� �����k �
	bCount = 0; // ���������������� ����� ������� �����k B
	cCount = 0; // ���������������� ����� ������� �����k �
	dCount = 0; // ���������������� ����� ������� �����k D
	fCount = 0; // ���������������� ����� ������� �����k F
	countGrades = 0; // initialize counter of grades whole class
} // ����� ������������ GradeBook

// ������� , �������������� �������� ����� ;
// ����������� , ��� �������� ����� �������� �� ����� 2 5 ��������
void GradeBook::setCourseName(string name)
{
	if (name.length() <= 25) // ���� �� ����� 2 5 ��������
	courseName = name; // ��������� �������� ����� � �������
	else // ���� � �������� ����� 2 5 ��������
	{
		// �������� � courseName ������ 25 �������� ��������� name
		courseName = name.substr(0, 25); // ������ � � , ����� 2 5

		cout << "Name \"" << name << "\" exceeds maximum length.\n"
			 "Limiting courseName to first 25 characters.\n" << endl;
	} // ����� if...else
} // ����� ������� se tCourseName

// ������� ��� ��������� �������� �����
string GradeBook::getCourseName()
{
	return courseName; // ���������� courseName �������
} // ����� ������� getCourseName

// ������� ��������� -����������� ������������ GradeBook
void GradeBook::displayMessage()
{
	// ������� ge tCourseName ��� ��������� courseName
	cout << "Welcome to the grade book for\n" << getCourseName()
		<< "!\n" << endl;
} // ����� ������� displayMessage

// ������ ������������ ����� ������; �������� ������� ������
void GradeBook::inputGrades()
{
	int grade; // ������, ��������� �������������

	cout << "Enter the letter grades." << endl
		<< "Enter the EOF character to end input." << endl;
	// ����, ���� ������������ �� ������ ���������� ��� ����� �����
		while((grade = cin.get()) != EOF)
		{			
			// ����������, ����� ������� ������
			switch(grade) // �������� switch , ��������� � while
			{
			case 'A': // ������ � � ������� ��������
			case 'a': // ��� � � ������ ��������
				aCount++; // ��������� aCount
				countGrades += 4; // add A - equivalent equal "4"
				break; // ��������� ��� �:w���� �� switch

			case 'B': // ������ � � ������� ��������
			case 'b': // ��� � � ������ ��������
				bCount++; // ��������� bCount
				countGrades += 3; // add B - equivalent equal "3"
				break; // �:w��� �� switch

			case 'C': // ������ � � ������� ��������
			case 'c': // ��� � � ������ ��r�����
				cCount++; // ��������� cCount
				countGrades += 2; // add C - equivalent equal "2"
				break; // �:w��� �� switch
			
			case 'D': // ������ D � ������� ��������
			case 'd': // ��� d � ��1���� ��������
				dCount++; // ��������� dCount
				countGrades += 1; // add D - equivalent equal "1"
				break; // ����� �� switch
			
			case 'F': // ������ F � ������� ��������
			case 'f': // ��� f � ������ ��������
				fCount++; // ��������� fCount
				break; // ����� �� switch
			
			case '\n': // ������������ �������� ������� ����� ������,
			case '\t': // ���������
			case ' ': // � �������
				break; // ����� �� switch
			
			default: // ������������� ��� ��������� �������
			 cout << "Incorrect letter grade entered."
			 << " Enter a new grade." << endl;
				break; // �� ����������; ����� �� switch � ���o� ������
			} // ����� switch
		} // ����� while
}// ����� ������� inputGrades

// ������� ����� � � ������� , ��������� �������������
void GradeBook::displayGradeReport()
{
	// �w����� ������ �����������
		cout << "\n\nNumber of students who received each letter grade:"
		<< " \nA: " << aCount // �w����� ����� ������ �
		<< " \nB: " << bCount // �w����� ����� ������ �
		<< " \nC: " << cCount // �w����� ����� ������ �
		<< " \nD: " << dCount // �w����� ����� ������ D
		<< " \nF: " << fCount // �w����� ����� ������ F
		<< endl;
}// ����� ������� di splayGradeReport

 // calculate average of grades whole class
void GradeBook::averageGrades()
{
	countGrades /= (aCount + bCount + cCount + dCount + fCount); // calculate average grade whole class
	cout << "\nAverage grade whole class: " << fixed << setprecision(1) << countGrades << endl; // print average grade whole class
}