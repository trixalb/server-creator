#include<stdio.h>
#include<iostream>
#include<windows.h>
#include<string>
#include<cstring>
using namespace std;


int main()
{
string ip = "nil";
int gateway = 0;
string server_name = "nil";
bool loop = false;
cout << "Project available in GitHub!";
cout << "\nNow Start";
cout << "\n\ninsert server name:";
cin >> server_name;
cout << "the server name as been set by:";
cout << server_name;
cout << "\nnow, insert server ip:";
cin >> ip;
cout << "\nserver ip as been set by:";
cout << ip;
cout << "\ninsert server gateway(there are gateways from 0 to 1000):";
cin >> gateway;
if(gateway > 1000 || gateway < 0)
{
cout << "Eror 404";
cout << "\nInvalid Gateway";
return 0;
}
else
{
cout << "the server Gateway as been set by:";
cout << gateway;
}
}
