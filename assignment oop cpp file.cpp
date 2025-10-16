#include"student.h"
student::student() {
	name = "ahmad";
	age = 17;
	rollno = "l1f26";
	cgpa = 1.1;
}
student::student(string n, int a, string r, float c) {
	name = n;
	age = a;
	rollno = r;
	cgpa = c;

}
student::~student() {
	cout << "\n*RECORDS DELETED*  "<<name<<"\t "<<rollno<<"\t"<<age<<"\t"<<cgpa;
}
void student::setdetails(string n, int a, string r, float c) {
	name = n;
	age = a;
	rollno = r;
	cgpa = c;
}
void student::getdetails() {
	cout << "Your name is:  " << name << endl;
	cout << "Your age is:  " << age << endl;
	cout << "Your rollno is:  " << rollno << endl;
	cout << "Your cgpa is:  " << cgpa << endl;
}
void student::grade() {
	if (cgpa >= 4) {
		cout << "Grade: A" << endl;
	}
	else if (cgpa >= 3.0) {
		cout << "Grade: B" << endl;
	}
	else if (cgpa >= 2.0) {
		cout << "Grade: C" << endl;
	}
	else {
		cout << "Grade: F" << endl;;
	}
}