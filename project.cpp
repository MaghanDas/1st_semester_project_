// checkout project documentation to understand the program better.

#include<iostream>
#include<conio.h>
#include<windows.h>

using namespace std;

 int total=0;
 char key;
 string name[20], rollno[20], section[20], age[20], cno[20];

void printAsterisk(int times) {    // function used to print "*"
	
    for (int i = 0; i < times; i++) {
        cout << '*';
    }
}
void printNewLine(int times) {     // function used to print "\n"
	
    for (int i = 0; i < times; i++) {
        cout << endl;
    }
}

void printTab(int times) {          // function used to print "\t"
	
    for (int i = 0; i < times; i++) {
        cout << '\t';
    }
}
void printstyle(){
	
	cout <<"\n\t\t\t\t\t\t";          // function used to print "\t\n\n\n\n\n\n\n"
}

 

class managementsystem{

	public:
   		   void choice();
		   void insertData();
		   void show();
		   void update();
		   void search();
		   void del();
		  
		
};

int main(){
	
	managementsystem b;
	 b.choice();

	return 0;
}

void managementsystem::choice(){

system("color f4");

   int input;
   system("cls"); 
 
  do{
  
  system("cls");
 
   printNewLine(12); printTab(6); printAsterisk(65);
   
   printNewLine(3); printTab(7); cout << "SOFTWARE ENGINEERING DEPT: MANAGEMENT SYSTEM  ";
  
   printNewLine(3); printTab(6); printAsterisk(65); printNewLine(1);
      
   printTab(6); cout << " PRESS! " << endl;
   printTab(6); cout << " -------------------------------  " << endl; 
   printTab(6); cout << " ENTER--> 1. TO INSERT STUDENT'S DATA      " << endl;
   printTab(6); cout << " -------------------------------  " << endl;
   printTab(6); cout << " ENTER--> 2. TO SHOW   STUDENT'S DATA      " << endl;
   printTab(6); cout << "-------------------------------   " << endl;
   printTab(6); cout << " ENTER--> 3. TO SEARCH STUDENT'S DATA      " << endl;
   printTab(6); cout << "-------------------------------   " << endl;
   printTab(6); cout << " ENTER--> 4. TO UPDATE STUDENT'S DATA      " << endl;
   printTab(6); cout << "-------------------------------   " << endl;
   printTab(6); cout << " ENTER--> 5. TO DELETE STUDENT'S DATA      " << endl;
   printTab(6); cout << "-------------------------------   " << endl;
   printTab(6); cout << " ENTER--> 6. TO EXIT  FROM THE SYSTEM      " << endl;
   printTab(6); cout << "__________________________________" << endl;

	input=getch();
	
	switch(input){

		case '1':
			    managementsystem::insertData();
			    break;

		case '2':
			    managementsystem::show();
		    	break;
			
		case '3':		
			    managementsystem::search();
		     	break;
			
		case '4':
		     	managementsystem::update();
		    	break;

		case '5': 
			    managementsystem::del();
		      	break;

		case '6':
      			system("CLS");
 	     	    
				printNewLine(12); printTab(6); printAsterisk(65);
 	     	    
                printNewLine(3); printTab(7); cout << "THANKS FOR VISITNG! HOPE U LIKE IT.  ";
                
				printNewLine(3); printTab(6); printAsterisk(65); 
			    break;
			  
    	default:
    	       cout << endl;
   	           printTab(6); cout << "INVALID INPUT  " << endl;
 	           printTab(6); cout << "PRESS ANY KEY TO GO BACK AND TRY AGAIN:";
	           getch(); 		   	
     break;
			  
}
}
     while(input != '6'); 
}

void managementsystem::insertData(){
 
     system("cls");
     
	 int st;

 	       printNewLine(12); printTab(6); printAsterisk(65); printNewLine(3); printTab(8);
           
		   cout << "WELCOME TO ENTROLLMENT  SYSTEM  ";
           
		   printNewLine(3); printTab(6); printAsterisk(65); printstyle();
		
		   cout << "How many studens you want to enroll: ";
 	       cin  >> st;
	
       	    printstyle(); printAsterisk(36);
 	
			if( total==0 ){
			total=st+total;	
		
			for( int i=0; i<st; i++ ){
		   
			printstyle(); cout << "ENTER THE DATA OF STUDENT " <<i+1;
			printstyle(); cout << "____________________________";
			
			printstyle(); cout << "ENTER NAME    : ";
			cin >>name[i];	
		
			printTab(6); cout << "ENTER ROLL NO : ";	
			cin >>rollno[i];
		
			printTab(6); cout << "ENTER SECTON  : ";
			cin >>section[i];
		
			printTab(6); cout << "ENTER AGE     : ";
			cin >>age[i];
		
			printTab(6); cout << "ENTER CONTACT :";
			cin >>cno[i];	
        
		    printTab(6); cout << "**************************** ";		
 			}
		
		}	
			else
		{
			total=st+total;
		
					for( int i=total; i<=total+st; i++ ){
		
			printstyle(); cout << "ENTER THE DATA OF STUDENT " <<i+1;
			printstyle(); cout << "____________________________";
			
			printstyle(); cout << "ENTER NAME    : ";
			cin >>name[i];	
		
			printTab(6); cout << "ENTER ROLL NO : ";	
			cin >>rollno[i];
		
			printTab(6); cout << "ENTER SECTON  : ";
			cin >>section[i];
		
			printTab(6); cout << "ENTER AGE     : ";
			cin >>age[i];
		
			printTab(6); cout << "ENTER CONTACT :";
			cin >>cno[i];	
        
		    printTab(6); cout << "**************************** ";
}	
			
   }	
 	 printstyle(); cout << "DATA HAS BEEN SUCCESSFULLY INSERTED : ";
  	 printstyle(); cout << "**************************************"; 	
     printstyle(); cout << "Press any key to return back to MANAGEMENT PORTAL: ";
     getch();
     
 	system("cls");
 
 }
void managementsystem::show(){

	 system("cls");
	 
 	       cout << "\n\n\t\t\t\t\t****************************************************** ";
           cout << "\n\n\t\t\t\t\t\t        WELCOME TO THE MIS PORTAL   ";
           cout << "\n\n\t\t\t\t\t****************************************************** ";  
 	 
	   if(total==0){
 	  
	   	cout << "\n\t\t\t\t\t SORRY! NO DATA HAS BEEN INSERTED YET. ";
 }
      
	  else{
       	     cout << "\n\n\n\t\t\t\t\t\t********************************************** ";
		     cout << "\n\t\t\t\t\t\t HERE IS THE COMPLETE DATA OF ALL STUDENTS.  ";
             cout << "\n\t\t\t\t\t\t**********************************************\n ";
	  
	  for(int i=0; i<total; i++){
	  	  	    
            cout << "\n\t\t\t\t\t Data OF Student " << i+1 << endl;
            cout << "\n\t\t\t\t\t----------------------";
		 	cout << "\n\t\t\t\t\t NAME    : "       << name[i];
		    cout << "\n\t\t\t\t\t ROLL NO : "    << rollno[i];
			cout << "\n\t\t\t\t\t SECTION : "    << section[i]; 
			cout << "\n\t\t\t\t\t AGE     : "        << age[i]; 
			cout << "\n\t\t\t\t\t CONTACT : " << cno[i];
            cout << "\n\t\t\t\t\t----------------------";
         	
   }	 
 }

        cout << "\n\t\t\t\t\t Press any key to return back to MANAGEMENT PORTAL: ";
        getch();
        
system("cls"); 
}

void managementsystem::update(){

 system("cls");
  
  	       cout << "\n\n\t\t\t\t\t****************************************************** ";
           cout << "\n\n\t\t\t\t\t\t        WELCOME TO THE UPDATION PORTAL   ";
           cout << "\n\n\t\t\t\t\t****************************************************** ";

	if(total==0)

	{
	    	cout << "\n\t\t\t\t\tNo data is entered"<<endl;
	}

	else{
		        string roll;
        		
				cout << "\n\t\t\t\t\tEnter the roll no of student which you want to update ";
				cin  >> roll;
				
					for(int i=0;i<total;i++)
				{
					if(roll==rollno[i])
				
				{
					cout << "\n\t\t\t\t\t----------------------";	
					cout << "\n\t\t\t\t\t Previous data"  ;
					cout << "\n\t\t\t\t\t----------------------";
				
					cout << "\n\t\t\t\t\t Data of Student "<< i+1  ;
					cout << "\n\t\t\t\t\t----------------------";
				
					cout << "\n\t\t\t\t\t Name    :" << name[i]    ;
	    	       	cout << "\n\t\t\t\t\t Roll no :" << rollno[i]  ;
	    		    cout << "\n\t\t\t\t\t AGE     :" << rollno[i]  ;
					cout << "\n\t\t\t\t\t SECTION :" << section[i] ;
	    	       	cout << "\n\t\t\t\t\t Contact :" << cno[i]     ;
	            
				    cout << "\n\t\t\t\t\t----------------------";
			        cout << "\n\t\t\t\t\t Enter new data";
			        cout << "\n\t\t\t\t\t----------------------";
				
					cout << "\n\t\t\t\t\t Enter name  :";
				    cin  >> name[i];
				    cout << "\t\t\t\t\t Enter Roll no :";
				    cin  >> rollno[i];
			        cout << "\t\t\t\t\t Enter AGE     :";
				    cin  >> age[i];
				    cout << "\t\t\t\t\t Enter section :";
				    cin  >> section[i];
				    cout << "\t\t\t\t\t Enter contact :";
				    cin  >> cno[i];
				    cout << "\t\t\t\t\t----------------------";
				}
			}
		}
}


void managementsystem::search(){

 system("cls");
 	
           cout << "\n\n\t\t\t\t\t****************************************************** ";
           cout << "\n\n\t\t\t\t\t\t      WELCOME TO THE SEARCHBAR PORTAL   ";
           cout << "\n\n\t\t\t\t\t****************************************************** ";
	 
           if ( total ==0 ){
   
              cout << "\n\t\t\t\t\t NO DATA IS ENTERED YET  ";
              cout << "\n\t\t\t\t\t Press any key to return back to MANAGEMENT PORTAL: ";
	          getch();   
		}
            else {
                   string rollnum;
                   char EnKEY;
	          
			do{
	            cout << "\n\t\t\t\t\t ENTER THE ROLL NO OF STUDENT WHOSE DATA YOU WANT TO SEE ";
                cin >>rollnum;
    
             	for(int i=0; i<total; i++){
		
	        	if ( rollnum==rollno[i] ) {
		    
		       printstyle(); cout << "----------------";
		       printstyle(); cout << "Data OF Student ";
               printstyle(); cout << "----------------";		
		 	
			   printstyle(); cout << " NAME    : " << name[i];
		       printstyle(); cout << " ROLL NO : " << rollno[i];
			   printstyle(); cout << " SECTION : " << section[i]; 
			   printstyle(); cout << " AGE     : " << age[i]; 
			   printstyle(); cout << " CONTACT : " << cno[i];
			   printstyle(); cout << "----------------";
		}
		
		else {
	
			   cout << "\n\t\t\t\t\t INCORRECT ROLL NO:" ; 
	           cout << endl;	
	
  }
  } 
   	  cout <<"\n\t\t\t\t\t PRESS 'Y'  OR  'y' TO SEARCH AGAIN ? : OR " ;
      cout << "\n\t\t\t\t\t Press any key to return back to MANAGEMENT PORTAL: ";
      EnKEY=getch();
      cout << "\n\n\t\t\t\t\t ***********************************************: ";
  }
 
   while(EnKEY=='Y' || EnKEY=='y');
 }
    system("cls");
}

void managementsystem::del(){

 system("cls");
 
           cout << "\n\n\t\t\t\t\t****************************************************** ";
           cout << "\n\n\t\t\t\t\t\t      WELCOME TO THE DELETEBAR PORTAL   ";
           cout << "\n\n\t\t\t\t\t****************************************************** ";
            
	if(total==0)
	{
	   cout << "\n\t\t\t\t\t No data is entered"<<endl;
    }

	else{
    
		int x;
	        	cout << "\n\t\t\t\t\t Press 1 to delete all record " <<endl;
         		cout << "\n\t\t\t\t\t Press 2 to delete specific record ";

				cin >> x;

				if(x==1)
			{
				total=0;
				cout << "\n\t\t\t\t\t All record are deleted..!!"<<endl;
			}
				else if(x==2)
			{
				string rollnu;
				cout << "\n\t\t\t\t\t Enter the roll no of student which you wanted to delete";
				cin >> rollnu;
				
				for(int i=0;i<total;i++)
			{
					if(rollnu==rollno[i])
					{
					   	for(int j=i;j<total;j++)
						{
					  	  name[j]=name[j+1];
					 	  rollno[j]=rollno[j+1];
					      section[j]=section[j+1];
					 	  age[j]=age[j+1];
						  cno[j]=cno[j+1];
				     	}
				     	
					total--;
					cout << "\n\t\t\t\t\t Your required record is deleted"<<endl;
					}
			}
			}
			
			   else 
			{
				cout << "\n\t\t\t\t\t Invalid input";
			}
}
      cout << "\n\t\t\t\t\t Press any key to return back to MANAGEMENT PORTAL: ";
     char EnKEY=getch();
      cout << "\n\n\t\t\t\t\t ***********************************************: ";
} 
