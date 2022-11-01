#include <iostream>
#include "./includes/colors.hpp"
#include "./includes/fonts.hpp"
#include <string>
#include <filesystem>
#include <unistd.h>
int clis = 4;
using namespace std;
void cli(){
    char location[256];
    getcwd(location, 256);
    cout << color::green << font::bold << "termius" << color::reset << "::" << color::red << font::bold << font::underline << location << color::reset << color::cyan << "~" << color::white << "$ " << color::reset;
    string cmd;
    cin >> cmd;
    if(cmd == "help"){
        cout << color::cyan << "\tCLIs: " << clis << " || " << color::blue << "Mirix-001001" << color::reset << endl;
        cout << color::green << "\thelp || h [print how to use with cli how clis have]" << color::reset << endl;
        cout << "\t-------------------------------------------------------------------------" << endl;
        cout << color::green << "\tclear [clear the termius terminal]" << color::reset << endl;
        cout << "\t-------------------------------------------------------------------------" << endl;
        cout << color::green << "\tg++ [c++ compiler]" << color::reset << endl;
        cout << "\t-------------------------------------------------------------------------" << endl;
        cout << color::green << "\tg++m [c++ compiler for main.cpp filename]" << color::reset << endl;
        cli();
    } else if(cmd == "h"){
        cout << color::cyan << "\tCLIs: " << clis << " || " << color::blue << "Mirix-001001" << color::reset << endl;
        cout << color::green << "\thelp[print how to use with cli how clis have]" << color::reset << endl;
        cout << "\t-------------------------------------------------------------------------" << endl;
        cout << color::green << "\tclear[clear the termius terminal]" << color::reset << endl;
        cli();
    } else if(cmd == "clear"){
        for(int i = 0; i <384*384; i++)
        cout << ' ' << endl;
        cli();
    } else if(cmd == "g++m"){
        system("g++ main.cpp");
        system("./a.out");
        cli();
    } else{
        cout << color::red << font::bold << "\"" << cmd << "\"" <<  " not found" << color::reset << endl;
        cli();
    }
}
int main(){
	cout << endl << color::cyan << font::underline << "Welcome to Termius!" << color::reset << endl;
	cout << color::blue << clis << " CLIs | © Louiml 2022 " << endl << endl;
    cli();
}
