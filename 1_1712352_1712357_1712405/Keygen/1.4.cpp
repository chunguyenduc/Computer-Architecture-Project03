#include <iostream>
#include <string.h>
using namespace std;
void main()
{
	int temp = 0;
	char name[100], serial[100];
	cout << "Name\t\t: ";
	cin.getline(name, 100); //Nhập name
	_strrev(name); //Đảo chuỗi name
	for (int i = 0; i < strlen(name); i++) //Lấy ra từng ký tự của name để tính toán
	{
		temp = temp - (name[i] - 0x20);
	}
	sprintf_s(serial,"%08X", temp);//Đổi temp thành dạng hexa rồi chuyển thành chuỗi để lưu vào serial
	_strrev(serial);//Đảo chuỗi serial.
	cout << "Your serial is  : " << serial << endl;
	system("pause");
}
