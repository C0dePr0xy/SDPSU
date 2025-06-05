#include <iostream>
#include <cstdlib>
using namespace std;

class termStr
{
    public:
    string sys_User; // System username.
    string pName; // Project name.
    string install_Dir; // 'Dev' folder directory.
    string mkdir_Dev; // Command that generates the 'Dev' directory.
    
    // Commands for generating a project directory.
        string mkdir_pName; // Creates the project folders.
        string touch_pName; // Creates the project source code file.
        string list_pDir; // Lists the created directory and its contents in the terminal. --For debugging
    
    // Opens the project directory in Visual Studio Code. --Example: 'code projectdir' 
        string ovsc_pName;

    void gen_devDir()
    {

        mkdir_Dev = "mkdir /home/" + sys_User + "/Dev";
        system(mkdir_Dev.c_str());
    }
    
    void gen_proj()
    {
        mkdir_pName = "mkdir " + pName + " && mkdir " + pName + "/src";
        system(mkdir_pName.c_str());
        touch_pName = "touch " + pName + "/src/" + pName + ".cpp";
        system(touch_pName.c_str());
    }

    void list_proj()
    {
        list_pDir = "ls " + pName + " && ls " + pName + "/src";
        system(list_pDir.c_str());
    }

    void open_proj()
    {
        ovsc_pName = "code " + pName;
        system(ovsc_pName.c_str());
    }
};

void main_app()
{
    termStr new_proj;

    system("clear");
    cout << "[Simple Project Manager v0.1]\n\n";
    cout << "Project Name: ";
    cin >> new_proj.pName;
    new_proj.gen_proj();
    new_proj.list_proj();
    new_proj.open_proj();
    exit(0);
}

void prgrm_Setup() // WARNING! Only tested on Ubuntu 22.04 LTS using the ext4 filesystem.
{
    termStr setup;

    system("clear");
    cout << "[Simple Project Manager v0.1 Setup]\n\n";
    cout << "System Username: ";
    cin >> setup.sys_User;
    setup.gen_devDir();
    cout << "Place ps.o inside 'Dev' directory."; // This is very temporary.
}