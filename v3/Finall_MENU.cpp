#include<iostream>
#include<fstream>
#include<conio.h>
#include<stdlib.h>
#include<string>
#include<cstdlib>
#include<time.h>

using namespace std;

//-----------------------
class MohreDaran{
	public:
	void Add_File( string Daste,int id, string name,string description)
	{
	fstream fileObj;
		if(Daste=="Fish"){
			fileObj.open("Fish.txt", ios::app);
			fileObj << id << " " << Daste << " " << name <<" "<< description << endl;
		} 
		if(Daste=="Dozistan"){
			fileObj.open("Dozistan.txt", ios::app);
			fileObj << id << " " << Daste << " " << name <<" "<< description << endl;
		}
		if(Daste=="PestanDaran"){
			fileObj.open("PestanDaran.txt", ios::app);
			fileObj << id << " " << Daste << " " << name <<" "<< description << endl;
		}
		if(Daste=="Parandegan"){
			fileObj.open("Parandegan.txt", ios::app);
			fileObj << id << " " << Daste << " " << name <<" "<< description << endl;
		}
		if(Daste=="Khazandegan"){
			fileObj.open("Khazandegan.txt", ios::app);
			fileObj << id << " " << Daste << " " << name <<" "<< description << endl;
		}
		fstream fileOb;
		fileOb.open("MohreDaran.txt", ios::app);
		fileOb << id << " " << Daste << " " << name << " "<< description << endl;	
	}	
};
//--------------
class Bimoohreha{
	public:
	void Add_File( string Daste,int id, string name,string description)
	{
	fstream fileObj;
	
		if(Daste=="Esfanj"){
			fileObj.open("Esfanj.txt", ios::app);
			fileObj << id << " " << Daste << " " << name <<" "<<description << endl;
		} 
		if(Daste=="Kisetanan"){
			fileObj.open("Kisetanan.txt", ios::app);
			fileObj << id << " " << Daste << " " << name <<" "<< description << endl;
		}
		if(Daste=="Kerm"){
			fileObj.open("Kerm.txt", ios::app);
			fileObj << id << " " << Daste << " " << name <<" "<< description << endl;
		}
		if(Daste=="Narmtanan"){
			fileObj.open("Narmtanan.txt", ios::app);
			fileObj << id << " " << Daste << " " << name <<" "<< description << endl;
		}
		if(Daste=="Bandpayan"){
			fileObj.open("Bandpayan.txt", ios::app);
			fileObj << id << " " << Daste << " " << name <<" "<< description << endl;
		}	
		if(Daste=="Kharpostan"){
			fileObj.open("Kharpostan.txt", ios::app);
			fileObj << id << " " << Daste << " " << name <<" "<< description << endl;
		}
		fstream fileOb;
		fileOb.open("Bimoohreha.txt", ios::app);
		fileOb << id << " " << Daste << " " << name <<" "<< description << endl;
			
	}	
};
//---------------
void deletedAnimalMohredar(string daste,string idFile){
	string id,idAnimal,name,Daste,description;
	int choise=0;
	if(daste=="Fish")choise=1;
	if(daste=="Dozistan")choise=2;
	if(daste=="PestanDaran")choise=3;
	if(daste=="Parandegan")choise=4;
	if(daste=="Khazandegan")choise=5;
	
	fstream fileObj;
			fstream fileOb;	
			fstream fileObWrite;
			ofstream tempfile("tempAnimalMohredar.txt");	
			switch(choise){
				case 1:fileOb.open("Fish.txt",ios::in);break;
				case 2:fileOb.open("Dozistan.txt",ios::in);break;
				case 3:fileOb.open("PestanDaran.txt",ios::in);break;
				case 4:fileOb.open("Parandegan.txt",ios::in);break;
				case 5:fileOb.open("Khazandegan.txt",ios::in);break;
				
				
			}
			if(fileOb.is_open()) {
    			while(fileOb  >>id >>Daste>>name>>description)  
    			{
    				if(idFile!=id){
					tempfile << id << " " << Daste << " " << name <<" "<<description << endl;
					}
    						
    			}
		
			}
			fileObj.close();
  			fileOb.close();
			tempfile.close();
			switch(choise){
				case 1:	
				remove("Fish.txt");
				rename("tempAnimalMohredar.txt", "Fish.txt");
				break;
				case 2:
				remove("Dozistan.txt");
				rename("tempAnimalMohredar.txt", "Dozistan.txt");
				break;
				case 3:
				remove("PestanDaran.txt");
				rename("tempAnimalMohredar.txt", "PestanDaran.txt");
				break;
				case 4:
				remove("Parandegan.txt");
				rename("tempAnimalMohredar.txt", "Parandegan.txt");
				break;
				case 5:
				remove("Khazandegan.txt");
				rename("tempAnimalMohredar.txt", "Khazandegan.txt");
				break;
				case 6:
				remove("Kharpostan.txt");
				rename("tempAnimalMohredar.txt", "Kharpostan.txt");
				break;		
			}
						
}

//---------------
void deletedAnimalBimohre(string daste,string idFile){
	string id,idAnimal,name,Daste,description;
	int choise=0;
	if(daste=="Esfanj")choise=1;
	if(daste=="Kisetanan")choise=2;
	if(daste=="Kerm")choise=3;
	if(daste=="Narmtanan")choise=4;
	if(daste=="Bandpayan")choise=5;
	if(daste=="Kharpostan")choise=6;
	fstream fileObj;
			fstream fileOb;	
			fstream fileObWrite;
			ofstream tempfile("tempAnimalBimohre.txt");	
			switch(choise){
				case 1:fileOb.open("Esfanj.txt",ios::in);break;
				case 2:fileOb.open("Kisetanan.txt",ios::in);break;
				case 3:fileOb.open("Kerm.txt",ios::in);break;
				case 4:fileOb.open("Narmtanan.txt",ios::in);break;
				case 5:fileOb.open("Bandpayan.txt",ios::in);break;
				case 6:fileOb.open("Kharpostan.txt",ios::in);break;
				
			}
			if(fileOb.is_open()) {
    			while(fileOb  >>id >>Daste>>name>>description)  
    			{
    				if(idFile!=id){
					tempfile<<endl << id << " " << Daste << " " << name <<" "<<description << endl;
					}
    						
    			}
		
			}
			fileObj.close();
  		fileOb.close();
		tempfile.close();
			switch(choise){
				case 1:	
				remove("Esfanj.txt");
				rename("tempAnimalBimohre.txt", "Esfanj.txt");
				break;
				case 2:remove("Kisetanan.txt");
				rename("tempAnimalBimohre.txt", "Kisetanan.txt");
				break;
				case 3:remove("Kerm.txt");
				rename("tempAnimalBimohre.txt", "Kerm.txt");
				break;
				case 4:remove("Narmtanan.txt");
				rename("tempAnimalBimohre.txt", "Narmtanan.txt");
				break;
				case 5:remove("Bandpayan.txt");
				rename("tempAnimalBimohre.txt", "Bandpayan.txt");
				break;
				case 6:remove("Kharpostan.txt");
				rename("tempAnimalBimohre.txt", "Kharpostan.txt");
				break;		
			}
						
}
//----------------
//---------------
class Functions{
	public:
	
	void Show_Animals(int IdDaste)
	{
			string Daste;
			int id;
			string name;
			string description,line;
				fstream fileObj;
				if(IdDaste==1){
			
				fstream file("MohreDaran.txt");
					while(file.good()){
					getline(file,line);
					if(line!=" ")
					cout<<line<<endl;
				}
				}
				else {
			
					fstream file("Bimoohreha.txt");
					while(file.good()){
					getline(file,line);
					if(line!=" ")
					cout<<line<<endl;
				}
				}
			
			
	}
	void Delete_Animal(){
		int IdDaste;
		string id,idAnimal,name,Daste,description;
		cout<<"Daste entekhab konid\nMohredar(1)\nBimohreha(2)\n";
		cin>>IdDaste;
		cout<<"Name or ID Animal\n";
		cin>>idAnimal;
				fstream fileObj;
				fstream fileOb;	
				fstream fileObWrite;
				
				fstream tempfile;
				fstream tempfile2;
				tempfile.open("temp.txt", ios::app);
		
				if(IdDaste==1){
					fileObj.open("MohreDaran.txt", ios::in);
				}
				else if(IdDaste==2) {
					fileObj.open("Bimoohreha.txt", ios::in);
				}
				if(fileObj.is_open()) {
    				while(fileObj>>id>>Daste>>name>>description)  
    					{
    						if(idAnimal!=id){
    		
								if(IdDaste==1){
									deletedAnimalMohredar(Daste,id);
									tempfile << id << " " << Daste << " " << name <<" "<<description << endl;
								}
								else if(IdDaste==2){
								deletedAnimalBimohre(Daste,id);
								tempfile << id << " " << Daste << " " << name <<" "<<description << endl;
								}
								
    							
								
							}
    						else{
    							cout<<"Animal not founded!";
							}
							
    					}
		
					}
				else{
    				cout<< "file open fail" <<endl;
  				}	
  		fileObj.close();
  		fileOb.close();
		tempfile.close();

		
			if(IdDaste==1){
			
					remove("MohreDaran.txt");
					rename("temp.txt", "MohreDaran.txt");	
				}
				else if(IdDaste==2) {
					
					remove("Bimoohreha.txt");
					rename("temp.txt", "Bimoohreha.txt");
				}
	
		
		
		

	}
	void Search_Animal(){
		int IdDaste;
		string id,idAnimal,name,Daste,description,line;
		cout<<"Daste entekhab konid\nMohredar(1)\nBimohreha(2)\n";
		cin>>IdDaste;
		cout<<"Name Animal\n";
		cin>>idAnimal;
		
				fstream fileObj;
				
				if(IdDaste==1){
					fileObj.open("MohreDaran.txt", ios::in);
				}
				else {
					fileObj.open("Bimoohreha.txt", ios::in);
				}
			if(fileObj.is_open()) 
		{
    	while(fileObj >>id >> Daste >>name>>description)  
    			{
    			
    				if(idAnimal==id)
    					{
    						cout << id <<" "<<Daste <<" "<<name <<description <<endl;
    					
						}
    					else {cout<<"Animal not founded";
						}
        
    			}
		}
	else{
    		cout<< "file open fail" <<endl;
  		}
  		fileObj.close();
	}

};
//----------------
class Fish{
	public:
		MohreDaran Noe;
		string name;
		string desc;
		int id;	
		Fish(int id,string name,string description){
			name=name;
			id=id;
			desc=description;
				Noe.Add_File("Fish",id,name,desc);
		}		
};
class Khazandegan{
	public:
		MohreDaran Noe;
		string name;
		string desc;
		int id;	
		Khazandegan(int id,string name,string description){
			name=name;
			id=id;
			desc=description;
				Noe.Add_File("Khazandegan",id,name,desc);
		}
	
};
class Dozistan{
	public:
		MohreDaran Noe;
		string name;
		string desc;
		int id;	
		Dozistan(int id,string name,string description){
			name=name;
			id=id;
			desc=description;
				Noe.Add_File("Dozistan",id,name,desc);
		}
	
};
class PestanDaran{
		public:
		MohreDaran Noe;
		string name;
		string desc;
		int id;	
		PestanDaran(int id,string name,string description){
			name=name;
			id=id;
			desc=description;
				Noe.Add_File("PestanDaran",id,name,desc);
		}
	
};
class Parandegan{
		public:
		MohreDaran Noe;
		string name;
		string desc;
		int id;	
		Parandegan(int id,string name,string description){
			name=name;
			id=id;
			desc=description;
				Noe.Add_File("Parandegan",id,name,desc);
		}
	
};
//----------------------------------------


class Esfanj{
		public:
		Bimoohreha Noe;
		string name;
		string desc;
		int id;	
		Esfanj(int id,string name,string description){
			name=name;
			id=id;
			desc=description;
				Noe.Add_File("Esfanj",id,name,desc);
		}
	
};
class Kisetanan{
		public:
		Bimoohreha Noe;
		string name;
		string desc;
		int id;	
		Kisetanan(int id,string name,string description){
			name=name;
			id=id;
			desc=description;
				Noe.Add_File("Kisetanan",id,name,desc);
		}
	
};
class Kerm{
		public:
		Bimoohreha Noe;
		string name;
		string desc;
		int id;	
		Kerm(int id,string name,string description){
			name=name;
			id=id;
			desc=description;
				Noe.Add_File("Kerm",id,name,desc);
		}
	
};
class Narmtanan{
		public:
		Bimoohreha Noe;
		string name;
		string desc;
		int id;	
		Narmtanan(int id,string name,string description){
			name=name;
			id=id;
			desc=description;
				Noe.Add_File("Narmtanan",id,name,desc);
		}
	
};
class Bandpayan{
		public:
		Bimoohreha Noe;
		string name;
		string desc;
		int id;	
		Bandpayan(int id,string name,string description){
			name=name;
			id=id;
			desc=description;
				Noe.Add_File("Bandpayan",id,name,desc);
		}
	
};
class Kharpostan{
		public:
		Bimoohreha Noe;
		string name;
		string desc;
		int id;	
		Kharpostan(int id,string name,string description){
			name=name;
			id=id;
			desc=description;
				Noe.Add_File("Kharpostan",id,name,desc);
		}
	
};

//--------------
void addNewIteam(string Daste){
	string name,desc;
		
srand(time(0));
    int my_rand = rand();
		cout<<"\nname  =";
		cin>>name;
		cout<<"desc  =";
		cin>>desc;
		
	if(Daste=="Fish"){
			Fish fCategory(my_rand ,name,desc);	
		}
	if(Daste=="Khazandegan"){
			Khazandegan fCategory(my_rand ,name,desc);	
	}
	if(Daste=="Parandegan"){
			Parandegan fCategory(my_rand ,name,desc);	
	}
	if(Daste=="PestanDaran"){
			PestanDaran fCategory(my_rand ,name,desc);	
	}	
	if(Daste=="Dozistan"){
			Dozistan fCategory(my_rand ,name,desc);	
	}

}
//---------------------
void addNewIteamBimohre(string Daste){
	string name,desc;
		
srand(time(0));
    int my_rand = rand();
		cout<<"\nname  =";
		cin>>name;
		cout<<"desc  =";
		cin>>desc;
		
	if(Daste=="Esfanj"){
			Esfanj fCategory(my_rand ,name,desc);	
		}
	if(Daste=="Kerm"){
			Kerm fCategory(my_rand ,name,desc);	
	}
	if(Daste=="Narmtanan"){
			Narmtanan fCategory(my_rand ,name,desc);	
	}
	if(Daste=="Bandpayan"){
			Bandpayan fCategory(my_rand ,name,desc);	
	}	
	if(Daste=="Kharpostan"){
			Kharpostan fCategory(my_rand ,name,desc);	
	}
	if(Daste=="Kisetanan"){
			Kisetanan fCategory(my_rand ,name,desc);
	}

}


//--------
void 	menuCategoryMohreDaran(int choise){
	int choiseCategory;
	
		switch(choise){
				case 1:
					cout<<"Daste Entekhabi Fish ";
					addNewIteam("Fish");
					break;
				case 2: 
					cout<<"Daste Entekhabi Khazandegan ";
					addNewIteam("Khazandegan");
					break;
				case 3: 
					cout<<"Daste Entekhabi Parandegan ";
					addNewIteam("Parandegan");
					break;
				
				case 4: 
					cout<<"Daste Entekhabi PestanDaran ";
					addNewIteam("PestanDaran");
					break;
				
				case 5: 
				cout<<"Daste Entekhabi Dozistan ";
					addNewIteam("Dozistan");
					break;
				
			case 6:cout<<"Exit !!";return;break;
				}
		cout << "\n ";
		
		
		system ("CLS");
	
				
}
//---------
void menuCategoryBimohreha(int choise){
		
				

switch(choise){
				case 1:
					cout<<"Daste Entekhabi Esfanj ";
					addNewIteamBimohre("Esfanj");
					break;
				case 2: 
					cout<<"Daste Entekhabi Kisetanan ";
					addNewIteamBimohre("Kisetanan");
					break;
				case 3: 
					cout<<"Daste Entekhabi Kerm ";
					addNewIteamBimohre("Kerm");
					break;
				case 4: 
					cout<<"Daste Entekhabi Narmtanan ";
					addNewIteamBimohre("Narmtanan");
					break;
				
				case 5: 
				cout<<"Daste Entekhabi Bandpayan ";
					addNewIteamBimohre("Bandpayan");
					break;
				case 6: 
				cout<<"Daste Entekhabi Kharpostan ";
					addNewIteamBimohre("Kharpostan");
					break;
				case 7:cout<<"Exit !!";return;break;
				
				}
		cout << "\n ";
		
		
		system ("CLS");
	
				
	
}
//-------
void menuAsli(){
		int choise,choiseCategory;

	while (choise != 3)
	{
	system(" ");
	cout<<"Entekhab Daste (Mohredaran=1 -*- Bimohre=2)Exit=3 :";
    cin>>choise;
	switch(choise){
		case 1:
			cout<<"\nDaste Bandi =\n Fish=(1) **\n Khazandegan=(2) **\n Parandegan=(3) **\n PestanDaran=(4) **\n Dozistan=(5) **\nExit(6)\n";
			cin>>choiseCategory;
			menuCategoryMohreDaran(choiseCategory);
		break;
		case 2:
			cout<<"\nDaste Bandi =\n Esfanj=(1) **\n Kisetanan=(2) **\n Kerm=(3) **\n Narmtanan=(4) **\n Bandpayan=(5) **\n Kharpostan=(6) **\nExit(7)\n";
			cin>>choiseCategory;
			menuCategoryBimohreha(choiseCategory);
			
		break;
		case 3:return;break;

	}
	
		cout << "\n ";
		
		system("pause");
		system ("CLS");
	}
		
	
}
//------------------
void ShowAll(){
	int choise;
	cout<<"Mohredaran =1 \n";
	cout<<"Bimohreha = 2\n";
	cin>>choise;
	Functions func;
	func.Show_Animals(choise);
}
//---------------------
void Mohredaran_Menu(){
	int choise=0;
	
while (choise != 4)
	{
	system(" ");
	cout<<"Add new animal(1)\n";
	cout<<"Display all animlas(2)\n";
	cout<<"Delete animall (3)\n";
	cout<<"Search animall (4)\n";
	cin>>choise;
	Functions func;
	switch(choise){
		case 1:menuAsli();
		break;
		case 2:ShowAll();break;
		case 3:func.Delete_Animal();break;
		case 4:	Functions func;
		func.Search_Animal();break;
	
	}
	
		cout << "\n ";
		
		system("pause");
		system ("CLS");
	}
	
}

//---------
int main() {
	Mohredaran_Menu();
  return 0;
}
