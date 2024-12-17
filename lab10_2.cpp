#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main (){
	ifstream source;
	ofstream dest;
	source.open("cheerbook.txt");
	dest.open("cheerbook_copy.txt");
	
	// เพิ่มข้อความบรรทัดแรก
	dest << "-------------------- BOOM ---------------------\n";
	
	// คัดลอกข้อมูลจาก cheerbook.txt
	string line;
	while (getline(source, line)) {
		dest << line << "\n";
	}
	
	// เพิ่มข้อความบรรทัดสุดท้าย
	dest << "-------------------- HA!! ---------------------\n";

    source.close();
    dest.close();
	return 0;
}
