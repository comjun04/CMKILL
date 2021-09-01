@echo off

:a
taskkill /f /im SysCtrl.exe
taskkill /f /im ClassM_Client_Service.exe
taskkill /f /im ClassM_Client.exe
goto a
