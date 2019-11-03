#include<Windows.h>
#include <string>
#include<iostream>
using namespace std;

class Student
{
private:
	char *name;     //����
	char id[15];    //ѧ��
	int age;        //����
	string address[50];    //סַ
public:
	Student(char *, char, int, char);//�޲ι��캯��
	Student(char *name, char id[15], int age, char address[50]); //�вι��캯�������ĸ������ֱ��Ӧ�����ĸ�ѧ����Ϣ
	Student(const Student &Student); //�������캯��

	~Student();//����һ�������ڵ����������������ڽ���ʱ�ͷ���Դ

	void scanf();//����ѧ����Ϣ
	void printf();//���ѧ����Ϣ
	void changename(char *name);//��ͨ��������ȡ����
	void changeid(char id[15]);//��ͨ��������ȡѧ��
	void changeage(int age);//��ͨ��������ȡ����
	void changeadd(string address[50]);//��ͨ��������ȡ��ַ
	char *getname();//���г�Ա��������ȡ��������ֵ
	char getid();//���г�Ա��������ȡѧ�ű���ֵ
	int getage();//���г�Ա��������ȡ�������ֵ
	string getaddress();//���г�Ա��������ȡ��ַ����ֵ

};

Student::scanf()
{
	cout << "������ѧ��������";
	cin >> this->name;
	cout << "������ѧ��ѧ�ţ�";
	cin >> this->id;
	cout << "������ѧ�����䣺";
	cin >> this->age;
	cout << "������ѧ����ͥסַ:";
	cin >> this->address;
}


~Student()
{
	char *Student::getname()
	{
		return name;
	}
	char* Student::getid()
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
};//���������ͷŶ���ռ�õ���Դ


void Student::printf()
{
	cout << "ѧ����Ϣ��������" << endl;
	cout << "ѧ��:" << id[15] << endl;
	cout << "���䣺" << age << endl;
	cout << "��ͥסַ:" << address << endl;
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