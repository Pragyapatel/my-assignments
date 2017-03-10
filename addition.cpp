`#include<iostream>
#include<fstream>
#include<string>

using namespace std;
int main()
{  
	char name;	
	char choice,choice2,choice3;
	 
/*	 string  data;
ofstream file1;

	file1.open("abc.txt");
	
	cout<<"writing to a file  ";
	getline(cin,data);
	
	file1<<data<<endl;
	
	//file1.close();
*/	
	fstream file2;
	file2.open("infile.txt",ios::in);
	
	cout<<"Reading the file ";
	
	ofstream w,p;
	w.open("result.txt");
	p.open("cleaned.txt");
	cout<<"\n\t Which lines you want in other txt files (f,m,r,s)::";
	cin>>name;
	
	
	if(name=='f')
	{
	   while(file2)
	   { 
		   file2.get(choice);
		   if(choice=='"')
		   {
			  file2.get(choice2);
		      if(choice2=='f')
		      {
		         file2.get(choice3);
		         if(choice3=='"')
		         {
		           // cout<<"yes"<<endl;
			       w<<choice;  
			       w<<choice2;
			       w<<choice3;
			          file2.get(choice);
                      w<<choice; 
                      file2.get(choice);
                      w<<choice; 
			         for( ; ; )
			        {
                      file2.get(choice);
                      w<<choice;   
                      if(choice==',')
                      {
			 w<<endl;
			 p<<endl;
			 break;
		      }	
			p<<choice;		   
			 }
			 cout<<endl;
			}
	           }
	        }
	}
     }
     else if(name=='m')
       {
	   while(file2)
	   { 
		   file2.get(choice);
		   if(choice=='"')
		   {
			  file2.get(choice2);
		      if(choice2=='m')
		      {
		         file2.get(choice3);
		         if(choice3=='"')
		         {
		           // cout<<"yes"<<endl;
			     w<<choice;  
			     w<<choice2;
			     w<<choice3;
			     file2.get(choice);
                      w<<choice; 
                      file2.get(choice);
                      w<<choice; 
			     for( ; ; )
			        {
                      file2.get(choice);
                      w<<choice;   
                      if(choice==',')
                      {
			 w<<endl;
			 p<<endl;
			 break;
		      }		
		      p<<choice;	   
		 }
	   }
	  }
		}
     }
    else if(name=='r')
        {
	   while(file2)
	   { 
		   file2.get(choice);
		   if(choice=='"')
		   {
			  file2.get(choice2);
		      if(choice2=='r')
		      {
		         file2.get(choice3);
		         if(choice3=='"')
		         {
		           // cout<<"yes"<<endl;
			       w<<choice;  
			       w<<choice2;
			       w<<choice3;
			          file2.get(choice);
                      w<<choice; 
                      file2.get(choice);
                      w<<choice; 
	             for( ; ; )
			   {
                      file2.get(choice);
                      w<<choice;   
                      if(choice==',')
                      {
			w<<endl;
		        p<<endl;
		        break;
		      }			 
			p<<choice;  
			    }
			      
			     }
	           }
	        }
		}
     }
     else if(name=='s')
        {
	   while(file2)
	   { 
		   file2.get(choice);
		   if(choice=='"')
		   {
			  file2.get(choice2);
		      if(choice2=='s')
		      {
		         file2.get(choice3);
		         if(choice3=='"')
		         {
		           // cout<<"yes"<<endl;
			     w<<choice;  
			     w<<choice2;
			     w<<choice3;
			     file2.get(choice);
			       w<<choice;
			       file2.get(choice);
			       w<<choice;
			       file2.get(choice);
			       w<<choice; 
                               p<<choice;
			         for( ; ; )
			        {
                      file2.get(choice);
                      w<<choice; 
 		      p<<choice;   
                      if(choice=='"')
                      {  	w<<endl;
				p<<endl;
				break;
		      }	
					     	   
			        }
			       
			     }
	           }
	        }
		}
     }
    p.close();
    fstream a;
	a.open("cleaned.txt",ios::in|ios::out);
    a.clear();
   a.seekg(0, ios::beg);
   string abc,efg;
   cout<<"\n\t Enter your prefered language name::";
   cin>>abc;
   
   ofstream b;
	b.open("final.bat");
     
   
     while(getline(a,efg))
     {
		  b<<abc;
		  b<<efg<<endl;
		  
	 }	   
    
    
    
    // p.close();
     b.close();
     

     
	w.close();
	file2.close();
 return 0;
 }
