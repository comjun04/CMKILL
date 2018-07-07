#include <stdio.h>
#include <stdlib.h>

int main()
{
    while(1)
    {
        system("taskkill /f /im ClassM_Client.exe");
        system("taskkill /f /im ClassM_Client_Service.exe");
        system("taskkill /f /im SysCtrl.exe");
    }
}
