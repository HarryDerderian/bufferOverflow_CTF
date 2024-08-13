#include <iostream>
#include <string.h>
using namespace std;


void correctPassword()
{
    std::cout << " _______     _______     _______       _______  _______  _       \n";
    std::cout << "(  ___  )   (  ____ \\   (  ____ \\     (  ____ \\(  ___  )( (    /|\n";
    std::cout << "| (   ) |   | (    \\/   | (    \\/     | (    \\/| (   ) ||  \\  ( |\n";
    std::cout << "| |   | |   | (_____    | (_____      | |      | |   | ||   \\ | |\n";
    std::cout << "| |   | |   (_____  )   (_____  )     | |      | |   | || (\\ \\) |\n";
    std::cout << "| |   | |         ) |         ) |     | |      | |   | || | \\   |\n";
    std::cout << "| (___) | _ /\\____) | _ /\\____) | _   | (____/\\| (___) || )  \\  |\n";
    std::cout << "(_______)(_)\\_______)(_)\\_______)(_)  (_______/(_______)|/    )_)\n";
    const std::string SPACING(20, ' ');
    std::cout << SPACING <<"                                                                 \n";
    std::cout << SPACING <<"⠀⠀⠀⠀⠀⠀⣠⣴⣾⣿⣿⣿⣿⣿⣿⣶⣤⣄⠀⠀⠀⠀⠀⠀⠀⠀\n";
    std::cout << SPACING <<"⠀⠀⠀⠀⣠⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣶⣄⠀⠀⠀⠀⠀\n";
    std::cout << SPACING <<"⠀⠀⣠⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⣆⠉⠉⢉⣿⣿⣿⣷⣦⣄⡀⠀\n";
    std::cout << SPACING <<"⠀⠚⢛⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡄\n";
    std::cout << SPACING <<"⠀⢠⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠿⠿⠿⠿⠿⣿⡇\n";
    std::cout << SPACING <<"⢀⣿⡿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⠋⠁⠀⠀⠀⠀⠀⠀⠈⠃\n";
    std::cout << SPACING <<"⠀⠀⢸⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡏⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n";
    std::cout << SPACING <<"⠀⠀⠀⣿⣿⣿⡿⣿⣿⣿⣿⣿⣿⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n";
    std::cout << SPACING <<"⠀⠀⠀⠹⣿⣿⡇⠈⠻⣿⣿⣿⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n";
    std::cout << SPACING <<"⠀⠀⠀⠀⠈⠻⡇⠀⠀⠈⠙⠿⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n";
    std::cout << "> OSS Command Unlocked\n";
    std::cout << "> Access Level: ROOT\n";
    std::cout << "> System Ready\n";
    std::cout << "Kernel Access: GRANTED...\n";
    std::cout << "Command Override: ENGAGED...\n";
    std::cout << "Root Directives: AVAILABLE...\n";
    system("/bin/sh");
}

bool login()
{
   std::cout << "O.S.S. COMMAND SHELL INITIATED...\n";
   std::cout << ">>> ROOT ACCESS IMMINENT <<<\n";
   std::cout << ">>> Enter Password to Elevate to ROOT SHELL:\n";
   std::cout << ">>> WARNING: FULL SYSTEM CONTROL WILL BE GRANTED.\n";
   std::cout << ">>> PASSWORD: ";
   char password[20];
   cin >> password;
   return strcmp(password, "superSecretPassword") == 0;
}

int main()
{
   if(login())
      correctPassword();
   else
   { 
      std::cout << "Error: Unauthorized Access Attempt\n";
      std::cout << "Your access credentials are incorrect.\n"; 
      std::cout << "Ensure your input is meticulously crafted—sometimes even the smallest buffer can spell disaster.\n"; 
      std::cout << "Please verify your details and try again.\n";
   }
}