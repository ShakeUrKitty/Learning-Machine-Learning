// ConsoleApplication1.cpp : définit le point d'entrée pour l'application console.
//

#include "stdafx.h"
#include "stdio.h"
#include "windows.h"
#include <cstdlib>
#include <fstream>
#include <string>
#include <iostream>
using namespace std;

void openGoogle(string tbd)
{

	string base_URL = "https://www.google.com/search?q=";
	string search_URL = "dummy";
	search_URL = base_URL + tbd;

	cout << "Searching for: \"" << tbd << "\"\n";

	ShellExecuteA(NULL, "open", search_URL.c_str(), NULL, NULL, SW_SHOWNORMAL);
}

int main()
{
	cout << "Type ID" << endl;
	string ID;
	cin >> ID;
	if (ID == "Finfin")
	{
		cout << "Type Password" << endl;
		string Password;
		cin >> Password;
		if (Password == "papa")
		{
			cout << "Well done, vous etes une trainee!" << endl;
			cout << "Que recherchez-vous?" << endl;
			string tbd;
			cin >> tbd;
			openGoogle(tbd);
		}
		else
		{
			cout << "Bah nin vous n'etes pas Finfin!? Mais vous etes une trainee quand meme!" << endl;
		}
	}
    return 0;
}
