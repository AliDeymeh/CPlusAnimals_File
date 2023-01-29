#include<iostream>
#include<fstream>
#include<conio.h>
#include<stdlib.h>
#include<string>
using namespace std;
class Function_File{
	public:
		void Add_File_Student(int id, string Name, string tozihat, string daste)
		{
			fstream fileObj;
			fileObj.open("Mohredar.txt", ios::app);
			fileObj << id << " " << Name << " " << tozihat << " " << daste  << endl;
		}

		void Add_File_Student(int id, string Name)
		{
			fstream fileObj;
			fileObj.open("Dars.txt", ios::app);
			fileObj << id << " " << Name << endl;
		}

		void Add_File_Entekhab(int Id, int Id_Dars, int Id_Stuent, string IdStudent)
		{
			fstream fileObj;
			fileObj.open("Entekhab.txt", ios::app);
			fileObj << Id << " " << Id_Dars << " " << Id_Stuent << " " << IdStudent << endl;
		}
};


struct Student
{
	int Id;
	string Name;
	string Lastname;
	string IDStudent;
	string Year;
	bool Flag;
public:
	void Add(int id, string name, string lastname, string  idstudent, string year)
	{
		Id = id;
		Name = name;
		Lastname = lastname;
		IDStudent = idstudent;
		Year = year;
		Flag = 0;
	}

	void Display()
	{
		if (Flag == 0)
		{
			cout << "\n ID : " << Id;
			cout << "\n Name : " << Name;
			cout << "\n Lastname : " << Lastname;
			cout << "\n IDStudent : " << IDStudent;
			cout << "\n Year : " << Year;
		}

	}
};
//-------------------------------------------------
int Count_Student = 0;
Student S[100];
//-------------------------------------------------
void Add_Student()
{
	int id = 1001 + Count_Student;
	string A, B, C, D, E;
	Function_File functions;
	cout << "\n Enter Name :";
	cin >> A;

	cout << "\n Enter Lastname :";
	cin >> B;

	cout << "\n Enter ID Student :";
	cin >> C;

	cout << "\n Enter Year Date :";
	cin >> D;

	S[Count_Student].Add(id, A, B, C, D);
	functions.Add_File_Student(id, A, B, C);
	Count_Student++;
}
//-------------------------------------------------
void Del_Student()
{
	string id = "";
	int flag = 0;
	cout << "\n Enter ID Student :";
	cin >> id;
	for (int i = 0; i < Count_Student; i++)
	{
		if (S[i].IDStudent == id)
		{
			cout << "\n";
			S[i].Flag = 1;
			S[i].Display();
			flag = 1;
		}
	}

	if (flag == 0)
	{
		cout << "\n Not find ";
	}
}
//-------------------------------------------------
void Search_Student()
{
	string id = "";
	int flag = 0;
	cout << "\n Enter ID Student :";
	cin >> id;
	for (int i = 0; i < Count_Student; i++)
	{
		if (S[i].IDStudent == id && S[i].Flag == 0)
		{
			cout << "\n";
			S[i].Display();
			flag = 1;
		}
	}

	if (flag == 0)
	{
		cout << "\n Not find ";
	}
}
//-------------------------------------------------
void Display_Student()
{
	cout << "\n Display All :";
	for (int i = 0; i < Count_Student; i++)
	{
		cout << "\n";
		S[i].Display();
	}
}
void Menu_Student()
{
	int choice = 0;

	while (choice != 5)
	{
		system(" ");
		cout << "\n 1. Add Student ";
		cout << "\n 2. Delete Student";
		cout << "\n 3. Search Student";
		cout << "\n 4. Display All Student ";
		cout << "\n 5. Back ";
		cout << "\n Enter your choice (1-5) : ";
		cin >> choice;

		switch (choice)
		{
		case 1:
			Add_Student();
			break;
		case 2:
			Del_Student();
			break;
		case 3:
			Search_Student();
			break;
		case 4:
			Display_Student();
			break;
		case 5:
			return;
			break;
		}

		cout << "\n ";
		system("pause");
	}
}
////////////////////////////////////////////////////////////////////
struct Dars
{
	int Id;
	string Name;
	bool Flag;
public:
	void Add(int id, string name)
	{
		Id = id;
		Name = name;
		Flag = 0;
	}

	void Display()
	{
		if (Flag == 0)
		{
			cout << "\n Id : " << Id;
			cout << "\n Name : " << Name;
		}
	}
};
//-------------------------------------------------
int Count_Dars = 0;
Dars D[100];
//-------------------------------------------------
void Add_Dars()
{
	int id = 100 + Count_Dars;
	string A;
	Function_File functions;
	cout << "\n Enter Name :";
	cin >> A;

	D[Count_Dars].Add(id, A);
	functions.Add_File_Student(id, A);
	Count_Dars++;

}
//-------------------------------------------------
void Del_Dars()
{
	int id = 0, flag = 0;

	cout << "\n Enter ID  Dars :";
	cin >> id;

	for (int i = 0; i < Count_Dars; i++)
	{
		if (D[i].Id == id)
		{
			cout << "\n";
			D[i].Flag = 1;
			D[i].Display();
			flag = 1;
		}
	}

	if (flag == 0)
	{
		cout << "\n Not find ";
	}
}
//-------------------------------------------------
void Search_Dars()
{
	int id = 0, flag = 0;

	cout << "\n Enter ID Dars : ";
	cin >> id;

	for (int i = 0; i < Count_Dars; i++)
	{
		if (D[i].Id == id)
		{
			cout << "\n";
			D[i].Display();
			flag = 1;
		}
	}

	if (flag == 0)
	{
		cout << "\n Not find ";
	}
}
//-------------------------------------------------
void Display_Dars()
{
	cout << "\n Display All :";
	for (int i = 0; i < Count_Dars; i++)
	{
		cout << "\n";
		D[i].Display();
	}
}
//-------------------------------------------------
void Menu_Dars()
{
	int choice = 0;

	while (choice != 5)
	{
		system(" ");
		cout << "\n 1. Add Dars ";
		cout << "\n 2. Delete Dars";
		cout << "\n 3. Search Dars";
		cout << "\n 4. Display All Dars ";
		cout << "\n 5. Exit ";
		cout << "\n Enter your choice (1-5) : ";
		cin >> choice;

		switch (choice)
		{
		case 1:
			Add_Dars();
			break;
		case 2:
			Del_Dars();
			break;
		case 3:
			Search_Dars();
			break;
		case 4:
			Display_Dars();
			break;
		case 5:
			return;
			break;
		}

		cout << "\n ";
		system("pause");
	}
}
//-------------------------------------------------
struct choice_Dars
{
	int Id = 0;
	int Id_Dars;
	int Id_Stuent;
	string IdStudent;
	int Number;
	bool Flag;

	void Add(int id1, int id2, int id3, string idstudent)
	{
		Id = id1;
		Id_Dars = id2;
		Id_Stuent = id3;
		IdStudent = idstudent;
		Number = -1;
		Flag = 0;
	}

};
//-------------------------------------------------
int Count_CD = 0;
choice_Dars CD[100];
//-------------------------------------------------
void Add_CD()
{	Function_File functions;
	int Id_Dars = 0, Id_Student = 0;;
	string IdStudent = "";
	int flag1 = 0;

	cout << "\n Enter ID Student :";
	cin >> IdStudent;

	for (int i = 0; i < Count_Student; i++)
	{
		if (S[i].IDStudent == IdStudent)
		{
			cout << "\n";
			S[i].Display();
			Id_Student = i;
			flag1 = 1;
		}
	}

	if (flag1 == 0)
	{
		cout << "\n Not find Student ";
		return;
	}

	//-----------------------------------
	int id_Dars = 0, flag2 = 0;

	cout << "\n\n Enter ID Dars : ";
	cin >> id_Dars;

	for (int i = 0; i < Count_Dars; i++)
	{
		if (D[i].Id == id_Dars)
		{
			cout << "\n ";
			D[i].Display();
			flag2 = 1;
		}
	}

	if (flag2 == 0)
	{
		cout << "\n Not find Dars ";
		return;
	}

	functions.Add_File_Entekhab(Count_CD + 1001, id_Dars, Id_Student, IdStudent);
	CD[Count_CD].Add(Count_CD + 1001, id_Dars, Id_Student, IdStudent);
	Count_CD++;
}
//-------------------------------------------------
void Del_CD()
{
	string IDStudent = "";
	int Id_Dars = 0, flag = 0;

	cout << "\n Enter ID  Dars :";
	cin >> Id_Dars;

	cout << "\n Enter ID  Student :";
	cin >> IDStudent;

	for (int i = 0; i < Count_CD; i++)
	{
		if (CD[i].Id_Dars == Id_Dars && CD[i].IdStudent == IDStudent)
		{
			cout << "\n";
			CD[i].Flag = 1;
			flag = 1;
		}
	}

	if (flag == 0)
	{
		cout << "\n Not find ";
	}
	else
	{
		cout << "\n Delete OK \n ";
	}
}
//-------------------------------------------------
void Insert_Number_CD()
{
	string IDStudent = "";
	int Id_Dars = 0, flag = 0, numder = 0;

	cout << "\n Enter ID  Dars :";
	cin >> Id_Dars;

	cout << "\n Enter ID  Student :";
	cin >> IDStudent;

	for (int i = 0; i < Count_CD; i++)
	{
		if (CD[i].Id_Dars == Id_Dars && CD[i].IdStudent == IDStudent)
		{
			cout << "\n";
			cout << "\n Enter Number : ";
			cin >> CD[i].Number;
			flag = 1;
		}
	}

	if (flag == 0)
	{
		cout << "\n Not find ";
	}
}
//-------------------------------------------------
void Display_Dars_CD()
{
	string IDStudent = "";
	int Id_Dars = 0, flag = 0, numder = 0;

	cout << "\n Enter ID  Dars :";
	cin >> Id_Dars;

	for (int i = 0; i < Count_CD; i++)
	{
		if (CD[i].Id_Dars == Id_Dars)
		{
			cout << "\n";
			cout << "\n ID Student :" << CD[i].IdStudent;
			cout << "\n Number : ";
			if (CD[i].Number == -1)
			{
				cout << " none";
			}
			else
			{
				cout << " " << CD[i].Number;
			}

			flag = 1;
		}
	}

	if (flag == 0)
	{
		cout << "\n Not find ";
	}
}
//-------------------------------------------------
void Display_CD()
{
	for (int i = 0; i < Count_CD; i++)
	{
		if (CD[i].Flag == 0)
		{
			cout << "\n";
			cout << "\n ID Student :" << CD[i].IdStudent;
			cout << "\n ID Dars :" << CD[i].Id_Dars;
			cout << "\n Number : ";
			if (CD[i].Number == -1)
			{
				cout << " none";
			}
			else
			{
				cout << " " << CD[i].Number;
			}
		}
	}
}
//-------------------------------------------------
void Menu_Entekhab()
{
	int choice = 0;

	while (choice != 4)
	{
		system(" ");
		cout << "\n 1. Add Entekhab";
		cout << "\n 2. Del Entekhab";
		cout << "\n 3. Insert Number for Student";
		cout << "\n 4. Display Whit ID Dars";
		cout << "\n 5. Display All";
		cout << "\n 6. Back";

		cout << "\n Enter your choice (1-4) : ";
		cin >> choice;

		switch (choice)
		{
		case 1:
			Add_CD();
			break;
		case 2:
			Del_CD();
			break;
		case 3:
			Insert_Number_CD();
			break;
		case 4:
			Display_Dars_CD();
			break;
		case 5:
			Display_CD();
			break;
		case 6:
			return;
			break;
		}

		cout << "\n ";
		system("pause");
	}
}
//-------------------------------------------------
void Menu()
{
	int choice = 0;

	while (choice != 4)
	{
		system(" ");
		cout << "\n 1. Management Student";
		cout << "\n 2. Management Dars";
		cout << "\n 3. Management Entekhab";
		cout << "\n 4. Exit";

		cout << "\n Enter your choice (1-4) : ";
		cin >> choice;

		switch (choice)
		{
		case 1:
			Menu_Student();
			break;
		case 2:
			Menu_Dars();
			break;
		case 3:
			Menu_Entekhab();
			break;
		case 4:
			exit(0);
			break;
		}

		cout << "\n ";
		system("pause");
	}
}

void Read_File_Student()
{
	int id = 0, oldid = -1;
	string Name, Lastname, IDStudent, Year;
	fstream fileObj;
	fileObj.open("Student.txt", ios::in);

	while (!fileObj.eof())
	{
		fileObj >> id >> Name >> Lastname >> IDStudent >> Year;

		if (id == 0)
		{
			return;
		}

		if (id != oldid)
		{
			oldid = id;
			S[Count_Student].Add(id, Name, Lastname, IDStudent, Year);
			Count_Student++;
		}

	}
}

void Read_File_Dars()
{
	int id = 0, oldid = -1;
	string Name;
	fstream fileObj;
	fileObj.open("Dars.txt", ios::in);

	while (!fileObj.eof())
	{
		fileObj >> id >> Name;


		if (id == 0)
		{
			return;
		}

		if (id != oldid)
		{
			oldid = id;
			D[Count_Dars].Add(id, Name);
			Count_Dars++;
		}
	}
}

void Read_File_Entekhab()
{
	int id = 0, oldid = -1;
	int Id, Id_Dars, Id_Stuent;
	string IdStudent;

	fstream fileObj;
	fileObj.open("Entekhab.txt", ios::in);

	while (!fileObj.eof())
	{
		fileObj >> id >> Id_Dars >> Id_Stuent >> IdStudent;

		if (id == 0)
		{
			return;
		}

		if (id != oldid)
		{
			oldid = id;
			CD[Count_CD].Add(id, Id_Dars, Id_Stuent, IdStudent);
			Count_CD++;
		}

	}
}
int main()
{
	Function_File functions;
	
	Read_File_Student();
	Read_File_Dars();
	Read_File_Entekhab();
	Menu();
	return 0;
}
