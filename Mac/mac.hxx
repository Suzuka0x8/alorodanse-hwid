#pragma once
#include <iostream>
#include <sstream>
#include <ctime>
#include <iomanip>
#include <algorithm>
#include <vector>
#include <unordered_map>
#include <Windows.h>
#include <iphlpapi.h>
#include <tchar.h>
#include <netcon.h>
#include "Utility/skStr.h"
#undef max

#pragma comment(lib, "IPHLPAPI.lib")
using namespace std;


class CMAC
{
public:
	CMAC();

	string GenerateMAC();
	void showAdapterList();
	unordered_map<string, string> getAdapters();
	void SpoofMAC();
	void RestartAdapters();

	bool HadAdministrativePermissions();
};

