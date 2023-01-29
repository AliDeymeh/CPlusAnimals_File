#include<iostream>
#include<fstream>
#include<conio.h>
#include<stdlib.h>
#include<string>
#include <string.h>
using namespace std;
//----------------------
void Menu_Avlie();
void Menu_Add();
void AddItem(string Daste);
void Deleted_Animal();
void ShowAll();
void  SearchAnimal();
class Function_File{
	public:
		
		void Add_File(string Daste ,string Name, string tozihat, string noe,string iDHeyvan)
		{
			fstream f;
			if(Daste=="Vertebrate"){
				f.open("Vertebrate.txt", ios::app);	
			}
			else if(Daste=="Invertebrate"){
			f.open("Invertebrate.txt", ios::app);	
			}
				f << Name << " " << tozihat << " " << noe <<" "<<iDHeyvan << endl;
				f.close();
		}
		//---------------
		void ShowAll(string Daste)
		{	
	
			string line;
		fstream f;
			if(Daste=="Vertebrate"){
				f.open("Vertebrate.txt",ios::in);
			}
			else if(Daste=="Invertebrate"){
			f.open("Invertebrate.txt",ios::in);
		
			}
			if(f.is_open()){
					while(f.good()){
					getline(f,line);
					if(line!=" ")
					cout<<line<<endl;
				}
			}
			else {
				cout<<"Error the open file!!!";
			}	
		}
		void Delete_Animal(){
			int IdDaste;
			string id,idAnimal;
			bool flag=false;
			string Name,tozihat,noe,iDHeyvan;
			cout<<"Enter 1=vertebrate && 2=Invertebrate \n";
			cin>>IdDaste;
			cout<<"Name or ID Animal\n";
			cin>>idAnimal;
				fstream f;
				fstream tf;
				tf.open("temp.txt", ios::app);
		
				if(IdDaste==1){
					f.open("Vertebrate.txt", ios::in);
				}
				else if(IdDaste==2) {
					f.open("Invertebrate.txt", ios::in);
				}
				if(f.is_open()) {
    				while(f>>Name >> tozihat>> noe>>iDHeyvan )  
    					{
    						if(idAnimal!=iDHeyvan){
    		
								if(IdDaste==1){
									tf <<Name << " " << tozihat << " " << noe <<" "<<iDHeyvan <<  endl;
								}
								else if(IdDaste==2){
								tf <<Name << " " << tozihat << " " << noe <<" "<<iDHeyvan <<  endl;
								}
								flag=false;
							}
    						else{
    						flag=true;
							}	
    					}
    					if(flag==false){
    						cout<<"File not Founded";
						}
					}
				else{
    				cout<< "file open fail" <<endl;
  				}	
  		f.close();
		tf.close();
			if(IdDaste==1){

					remove("Vertebrate.txt");
					rename("temp.txt", "Vertebrate.txt");	
				}
				else if(IdDaste==2) {					
					remove("Invertebrate.txt");
					rename("temp.txt", "Invertebrate.txt");
				}

	}
	void Search_Animal(){
		int IdDaste;
		bool flag=false;
		string Name,tozihat,noe,iDHeyvan,idAnimal;
		cout << "\n 1. Vertebrate "<<endl;
		cout << "\n 2. Invertebrate"<<endl;
		
		cin>>IdDaste;
		cout<<"Name Animal\n";
		cin>>idAnimal;
				fstream f;
				if(IdDaste==1){
					f.open("Vertebrate.txt", ios::in);
				}
				else {
					f.open("Invertebrate.txt", ios::in);
				}
			if(f.is_open()) 
				{
    			while(f >>Name >> tozihat >>noe>>iDHeyvan)  
    			{	
    				if(idAnimal==iDHeyvan)
    					{
    						flag=true;
    						cout << Name <<" "<<tozihat <<" "<<noe <<iDHeyvan <<endl;		
						}
    					else {
						flag=false;
						}
    			}
    			if(flag==true){
    						cout<<"File not Founded";
						}
				}
		else{
    		cout<< "file open fail" <<endl;
  		}
  		f.close();
	}		
};
//-------------------------------------------------
int main(int argc, char** argv) {
	Menu_Avlie();
	return 0;
}
//------------
void Menu_Avlie()
{
	int a = 0;

	while (a != 5)
	{
		system(" ");
		cout << "1. Add New Animal "<<endl;
		cout << "2. Deleted Animal"<<endl;
		cout << "3. Search animal"<<endl;
		cout << "4. Display All Animals "<<endl;
		cout << "5. Exit"<<endl;
		
		cin >> a;

		switch (a)
		{
		case 1:
		Menu_Add();
			break;
		case 2:
		Deleted_Animal();
			break;
		case 3:
		SearchAnimal();
			break;
		case 4:

	ShowAll();
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
void Menu_Add()
{
	int a = 0;
	while (a != 3)
	{
		system(" ");
		cout << "\n 1. Vertebrate ";
		cout << "\n 2. Invertebrate";
		cout << "\n 3. Back";
		cout << "\n  1 ta 3 entred  : ";
		cin >> a;
		switch (a)
		{
		case 1:
		AddItem("Vertebrate");		
			break;
		case 2:
		AddItem("Invertebrate");
			break;
	
		case 3:
			return;
			break;
		}

		cout << "\n ";
		system("pause");
	}
}
//-------------------------------------------------
void AddItem(string Daste){
	string Name,tozihat,noe,iDHeyvan;
	cout<<"Name:";
	cin>>Name;
	cout<<"Description : "<<endl;
	cin>>tozihat;
	cout<<"noe:"<<endl;
	cin>>noe;
	cout<<"iD Animal : ";
	cin>>iDHeyvan;
	Function_File functions;
	functions.Add_File(Daste,Name,tozihat,noe,iDHeyvan);
	
}
//--------------------------------------------
void Deleted_Animal()
{	
	Function_File func;
	func.Delete_Animal(); 
}
//---------------------
void SearchAnimal()
{	
	Function_File func;
	func.Search_Animal(); 
}
//--------------
void ShowAll()
{
	Function_File func;
	int a = 0;
	while (a != 3)
	{
		system(" ");
		cout << "1. Vertebrate "<<endl;
		cout << "2. Invertebrate"<<endl;
		cout << "3. Back"<<endl;
		cout << " 1 ta 3 entred  : "<<endl;
		cin >> a;
		switch (a)
		{
		case 1:
		func.ShowAll("Vertebrate"); 	
			break;
		case 2:
		func.ShowAll("Invertebrate");
			break;
		case 3:
			return;
			break;
		}
		cout << "\n ";
		system("pause");
	}
}
