#include"student.h"
int main() {
	student s1;
	s1.getdetails();
	s1.grade();
	student s2("yousaf", 19, "L1f24BSDS0091", 3.1);
	s2.getdetails();
	s2.grade();
	
	student s3;
	s3.setdetails("TEEfi", 35, "L1F24BSGS0015", 2.1);
	s3.getdetails();
	s3.grade();
	return 0;
	
	

}