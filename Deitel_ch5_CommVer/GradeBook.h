// ����������� 11tJJacca GradeBook.���� ������������ ����� ��������
// ��������� GradeBook, �� ��������� ���������� ������� - �������
// ������ , ������� ������������ � GradeBook . cpp .
#pragma once
#include <string>
using namespace std;

class GradeBook
{
public:
	GradeBook(string);    // ����������� �������������� courseName ���������� �������
	void setCourseName(string);   // ������� , ��������������� �������� �����
	string getCourseName();       // ������� , ���������� �������� �����
	void displayMessage();        // ������� , ��������� ��������� - �����������
	void inputGrades(); // ������ ������������ ����� ������
	void averageGrades(); // function calculation average grades
	void displayGradeReport(); // ������� ����� �� ��������� �������
private:
	string courseName; // �������� ����� ��� �����r� GradeBook
	int aCount; // ����� ������ �
	int bCount; // ����� ������ �
	int cCount; // ����� ������ �
	int dCount; // ����� ������ D
	int fCount; // ����� ������ F
	double countGrades; // counter of grades
}; // ����� ������ GradeBook