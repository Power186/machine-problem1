#include <iostream>
using namespace std;

int main() {
    
    //ENTER STUDENT NAME
    string a = "Good Student";
    
    //ENTER PROGRAM/COURSE
    string b = "Bachelor of Science in Computer Science";
    
    cout<< "Student Name: " << a << endl;
    cout<< "Program/Course: " << b << endl;
    
    //ENTER YEAR LEVEL    
   int c = 4; 
    if (c < 2) {
        cout << "Year Name: Freshman" << endl;
    } else if (c < 3) {
        cout << "Year Name: Sophomore" << endl;
    } else if (c < 4) {
        cout << "Year Name: Junior" << endl;
    } else if (c < 5) {
        cout << "Year Name: Senior" << endl;
    } else {
        cout << "Year Name: Senior" << endl;
    }
    
    //ENTER YEAR LEVEL AGAIN
    int x = 4;
    switch(x) {
        case 1:
            x = 1500;
            break;
        case 2:
            x = 1800;
            break;
        case 3:
            x = 2000;
            break;
        case 4:
            x = 2300;
            break;
        default:
            x = 2300;
    }
    
    //ENTER NUMBER OF UNITS TO BE TAKEN
    float d = 16;
    cout<< "No. of Units: " << d << endl;
    
   int tuition = x * d;
   cout<< "Tuition Fee: " << tuition << endl;
   
   int downpay = tuition * 0.30;
   cout << "Down Payment: " << downpay << endl;
   
   int balance = tuition - downpay;
   cout << "Balance: " << balance << endl;
	return 0;
	
}
