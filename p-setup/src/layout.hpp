#include <iostream>
#include <cstdlib>
using namespace std;

class termStr
{
    public:
    string pName;
    string mkdir_pName;
    string touch_pName;
    string list_pDir;
    string ovsc_pName;
    
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