#include<Windows.h>
#include <string.h>
#include<iostream>
using namespace std;

class Student
{
private:
	char name;     //姓名
	char id[15];    //学号
	int age;        //年龄
	string address[50];    //住址
public:
	Student(char, char, int, char);//无参构造函数
	Student(char name, char id[15], int age, char address[50]); //有参构造函数，设四个参数分别对应类中四个学生信息
	Student(const Student &Student); //拷贝构造函数

	~Student();//声明一个在类内的析构函数，生存期结束时释放资源

	void scanf();//输入学生信息
	void printf();//输出学生信息
	void newname(char *name);//普通函数，获取姓名
	void newid(char id[15]);//普通函数，获取学号
	void newage(int age);//普通函数，获取年龄
	void newaddress(string address[50]);//普通函数，获取地址
	char getname();//公有成员函数，提取姓名变量值
	char getid();//公有成员函数，提取学号变量值
	int getage();//公有成员函数，提取年龄变量值
	string getaddress();//公有成员函数，提取地址变量值
};

Student::scanf()
{
	cout << "请输入学生姓名：";
	cin >> this->name;
	cout << "请输入学生学号：";
	cin >> this->id;
	cout << "请输入学生年龄：";
	cin >> this->age;
	cout << "请输入学生家庭住址:";
	cin >> this->address;
}

	char Student::getname()
	{
		return name;
	}
	char Student::getid()
	{
		return id;
	}
	int Student::getage()
	{
		return age;
	}
	string Student::getaddress()
	{
		return address;
	}

	student::~student()
	{
		cout << "已删除" << endl;
	}

void Student::printf()
{
	cout << "学生信息：姓名：" << name<< endl;
	cout << "学号:" << id << endl;
	cout << "年龄：" << age << endl;
	cout << "家庭住址:" << address << endl;
}

int main()
{
	Student s1;
	s1.scanf();
	s1.printf();
	Student s2(s1);
	s2.scanf();
	s2.printf();
	system("pause");
}