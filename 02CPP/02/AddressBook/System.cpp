#include "System.h"


void Run(void)
{ 
    
    std::string cmd;
    int ID_counter = 1;
    menu();

    while (std::getline(std::cin,cmd) && !(cmd =="quit" || cmd == "QUIT"))
    {         
         if(cmd == "commands" || cmd == "COMMANDS") {
            std::cout<<std::string(50,'\n'); //clr screen
            menu();
         }
         else if(cmd.compare(0,3,"add") == 0 || cmd.compare(0,3,"ADD")==0) {
            addNew();
           std::cout<<"\ncmd> ";
         }
         else if (cmd.compare(0,8,"list all") == 0 || cmd.compare(0,8,"LIST ALL")==0)
         {
            listAll();   
            std::cout<<"\ncmd> ";     
         } 
         else if (cmd.compare(0,10,"delete all") == 0 || cmd.compare(0,10,"DELETE ALL")==0)
         {
            deleteAll();   
            std::cout<<"\ncmd> ";       
         } 
         else if (cmd.compare(0,4,"list") == 0 || cmd.compare(0,4,"LIST")==0)
         {
            listByID();   
            std::cout<<"\ncmd> ";        
         } 
         else if (cmd.compare(0,4,"delete") == 0 || cmd.compare(0,4,"DELETE")==0)
         {
            deleteByID();
            std::cout<<"\ncmd> ";   

         } 
         else if (cmd.compare(0,4,"search") == 0 || cmd.compare(0,4,"SEARCH")==0)
         {
             search();
            std::cout<<"\ncmd> ";      
         } 
         else
         {
            std::cout<<"\nERROR: INVALID INPUT! Either u entered invalid command or incorrect parameters."<<std::endl;
            std::cout<<"\ncmd> ";
         }
    }



}
void menu(void)
{
    std::cout<<"\nWelcome to ypur favourite address Book!"<<std::endl;
    std::cout<<"\tChoose Command:                  "<<std::endl;
    std::cout<<"\t|   add    <name>         | add a new name (first last) to the address book"<<std::endl;
    std::cout<<"\t|   list All              | List all the names in the address book"<<std::endl;
    std::cout<<"\t|   delete All            | Delete all the names in the address book"<<std::endl;
    std::cout<<"\t|   list   <UID>          | list a specific user"<<std::endl;
    std::cout<<"\t|   delete <UID>          | Delete a specific user"<<std::endl;
    std::cout<<"\t|   search <name>         | List for user by name"<<std::endl;
    std::cout<<"\t|  commands               | Show Commands"<<std::endl;
    std::cout<<"\t|   quit                  | Close the program"<<std::endl;
    std::cout<<"cmd> ";
}