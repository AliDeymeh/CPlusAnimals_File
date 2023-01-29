#include<iostream>
#include<fstream>
#include<conio.h>
#include<stdlib.h>
#include<string>
using namespace std;
//----------------------
struct Heyvan
{
	int Id;
	string Name;
	string Tozihat;
	string Daste;
	string IDHeyvan;
	bool Flag;
		public:
			void Add(int id, string name, string tozihat, string  daste,string iDHeyvan)
		{
			Id = id;
			Name = name;
			Tozihat = tozihat;
			Daste = daste;
			IDHeyvan=iDHeyvan;
			Flag = 0;
		}

			void Display()
		{
			if (Flag == 0)
			{
				cout << "\n ID : " << IDHeyvan;
				cout << "\n Name : " << Name;
				cout << "\n tozihat : " << Tozihat;
				cout << "\n daste : " << Daste;
				
			
			}

		}
};
//-------------------------------------------------
class Function_File{
	public:
		void Add_File_Bamohre(int id, string Name, string tozihat, string daste,string iDHeyvan)
		{
			fstream fileObj;
			fileObj.open("Mohredar.txt", ios::app);
			fileObj << id << " " << Name << " " << tozihat << " " << daste <<" "<<iDHeyvan << endl;
		}

		void Add_File_Bimohre(int id, string Name, string tozihat, string daste,string iDHeyvan)
		{
			fstream fileObj;
			fileObj.open("Bimohre.txt", ios::app);
		fileObj << id << " " << Name << " " << tozihat << " " << daste <<" "<<iDHeyvan<< endl;
		}

	
};
//-------------------------------------------------
int Count_Heyvan = 0;
Heyvan H[100];
//-------------------------------------------------
void Add_Heyvan_Bamohre()
{
	int id = 1001 + Count_Heyvan;
	string A, B, C,D;
	Function_File functions;
	cout << "\n Enter Name :";
	cin >> A;
	cout << "\n Enter tozihat :";
	cin >> B;
	cout << "\n Enter daste :";
	cin >> C;
	cout << "\n Enter Id Heyvan :";
	cin >> D;
	H[Count_Heyvan].Add(id, A, B, C,D);
	functions.Add_File_Bamohre(id, A, B, C,D);
	Count_Heyvan++;
}
//-------------------------------------------------
void Add_Heyvan_Bimohre()
{
	int id = 1001 + Count_Heyvan;
	string A, B, C,D;
	Function_File functions;
	cout << "\n Enter Name :";
	cin >> A;
	cout << "\n Enter tozihat :";
	cin >> B;
	cout << "\n Enter daste :";
	cin >> C;
	cout << "\n Enter IDHeyvan :";
	cin >> D;
	H[Count_Heyvan].Add(id, A, B, C,D);
	functions.Add_File_Bimohre(id, A, B, C,D);
	Count_Heyvan++;
}
//-------------------------------------------------
void Del_Heyvan()
{
	string id = "";
	int flag = 0;
	cout << "\n Enter ID Heyvan :";
	cin >> id;
	for (int i = 0; i < Count_Heyvan; i++)
	{
		if (H[i].IDHeyvan == id)
		{
			cout << "\n";
			H[i].Flag = 1;
			H[i].Display();
			flag = 1;
		}
	}

	if (flag == 0)
	{
		cout << "\n Heyvan Peydanashod! ";
	}
}
//-------------------------------------------------
void Jostojo_Heyvan()
{
	string id = "";
	int flag = 0;
	cout << "\nID Heyvan ra Vared konid :";
	cin >> id;
	for (int i = 0; i < Count_Heyvan; i++)
	{
		if (H[i].IDHeyvan == id && H[i].Flag == 0)
		{
			cout << "\n";
			H[i].Display();
			flag = 1;
		}
	}

	if (flag == 0)
	{
		cout << "\n Not find ";
	}
}
//-------------------------------------------------
void Display_All()
{
	cout << "\n Display All :";
	for (int i = 0; i < Count_Heyvan; i++)
	{
		cout << "\n";
		H[i].Display();
	}
}
//-------------------------------
void Menu_Ezafekardan()
{
	int choice = 0;
	while (choice != 3)
	{
		system(" ");
		cout << "\n 1. Mohredar ";
		cout << "\n 2. Bimohre";
		cout << "\n 3. Bargasht";
		cout << "\n az 1 ta 3 entekhab Konid  : ";
		cin >> choice;

		switch (choice)
		{
		case 1:
		Add_Heyvan_Bamohre();		
			break;
		case 2:
			Add_Heyvan_Bimohre();
			break;
	
		case 3:
			return;
			break;
		}

		cout << "\n ";
		system("pause");
	}
}
//------------
void Menu_Avlie()
{
	int choice = 0;

	while (choice != 5)
	{
		system(" ");
		cout << "\n 1. EzafeKardan Heyvan jadid ";
		cout << "\n 2. Hazf Heyvan";
		cout << "\n 3. Jostojo Heyvan";
		cout << "\n 4. Namayesh Hame Heyvanat ";
		cout << "\n 5. Bargasht ";
		cout << "\n az 1 ta 5 entekhab Konid (1-5) : ";
		cin >> choice;

		switch (choice)
		{
		case 1:
		Menu_Ezafekardan();
			break;
		case 2:
			Del_Heyvan();
			break;
		case 3:
			Jostojo_Heyvan();
			break;
		case 4:
			Display_All();
			break;
		case 5:
			return;
			break;
		}

		cout << "\n ";
		system("pause");
	}
}
//--------------------------

class Files{
	public:
		void Mohredar()
{
	int id = 0, oldid = -1;
	string Name, tozihat, daste, iDHeyvan;
	fstream fileObj;
	fileObj.open("Mohredar.txt", ios::in);
	Function_File functions;
	while (!fileObj.eof())
	{
		fileObj >> id >> Name >> tozihat  >>daste>> iDHeyvan;

		if (id == 0)
		{
			return;
		}

		if (id != oldid)
		{
			oldid = id;
			H[Count_Heyvan].Add(id, Name, tozihat, daste, iDHeyvan);
			Count_Heyvan++;
		}

	}
}

void Bimohre()
{
	int id = 0, oldid = -1;
	string Name,tozihat,daste,iDHeyvan;
	fstream fileObj;
	fileObj.open("Bimohre.txt", ios::in);

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
			H[Count_Heyvan].Add(id, Name, tozihat, daste, iDHeyvan);
			Count_Heyvan++;
		}
	}
}
};
//--------------
int main()
{
	Files file;
	file.Bimohre();
	file.Mohredar();

	Menu_Avlie();
	return 0;
}
