#include <iostream>


using namespace std;

void systemTitle(){
        cout << "                    WELCOME TO\n";
        cout << "              PAYROLL MANAGEMENT SYSTEM\n";
        cout << "                 FLOYDSTONES COMPANY\n";
	
}  

int main() {
	systemTitle();
	char choice;
	string firstname,lastname,gender;
	int age;
	int hour;
	float rate;
	float otr;
	float ot;
	int sss;
	int phil;
	int pgibg;
	int day;
	int salary;
	int usnum;
	
	cout <<"\n\nEnter Employees first name:";
	cin >>firstname;
	cout <<"\n\nEnter Employees last name:";
	cin >>lastname;
	cout <<"\nEnter Employees gender:";
	cin >>gender;
	cout <<"\nEnter Employees age:";
	cin >>age;
	cout <<"\nEnter Employees number:";
	cin >> usnum;
	cout <<"\n\tBasic Rate\n";
	cout <<"\nEnter No.of days worked:";
	cin >>day;
    cout <<"\nEnter Rate/hour:";
	cin >>rate;
	cout <<"\nEnter No.of hours work:";
	cin >>hour;
	cout <<"\n\tOvertime:\n";
	cout <<"\nEnter Overtime rate per hour:";
	cin >>otr;
	cout <<"\nEnter No.of hours overtime:";
	cin >>ot;
	cout <<"\nGross pay: \t\t\t\t\t\tPhp" <<((rate * hour) * (otr * ot)) * day;
	cout <<"\n\n\tMONTHLY DEDUCTION\n";
	cout <<"\nSSSMonthly contribution:";
	cin >>sss;
	cout <<"\nPhlihealth Monthly contribution:";
	cin >>phil;
	cout <<"\nPAGIBIG Monthly contribution:";
	cin >>pgibg;
	cout <<"\nTotal Monthly Deduction:\t\t\t\tPhp" << sss + pgibg + phil;
	cout <<"\n              GENERATED REPORT       ";
	cout <<"\n\n" <<lastname << "'s" <<"PAYSLIP";
	cout <<"\n\nEmployees name:" << "\t\t\t\t\t" << firstname <<" " << lastname;
	cout <<"\n\nEmployees number:"<< "\t\t\t\t\t" << usnum;
	cout <<"\n\nGross pay:\t\t\t\t\tPhp " << ((rate * hour) * (otr * ot)) * day;
	cout <<"\n\nTotal Monthly Deduction:\t\t\t\tPhp " << sss + pgibg + phil;
	cout <<"\n\nNet Pay:\t\t\t\t\t\tPhp"<<((((rate * hour) * (otr * ot)) * day) - (sss + pgibg + phil));
	
	
	cin >> choice; 
	
	while ((choice)=='c' || (choice == 'C'));
	
	
	
	return 0;
}
