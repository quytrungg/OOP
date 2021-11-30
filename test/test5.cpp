#include <iostream>
using namespace std;
void insert(char str[], int &len, char ch, int vitri);
void add_comma(char str[], int &len, char ch);

int main()
{
    char str[1000];
    cout << "input number: ";
    cin.getline (str,1000,'\n');
    int len = strlen(str);
    add_comma(str, len,',');
    for(int i = 0; i < len; i++){
        if(str[i] >= '0' && str[i] <= '9' || str[i] == ',')
            cout << str[i];
    }
    return 0;
}
void insert(char str[], int &len, char ch, int vitri)
{
    int i;
    for(i = len; i >vitri ; i--)
    {
        str[i] = str[i-1];
    }
    str[vitri] = ch;
    len++;
}
void add_comma(char str[], int &len, char ch)
{
    int tmp= strlen(str)%3;
    if (tmp != 0){
        insert(str,len,',',tmp);
        tmp += 4;
    }
    else tmp += 3;
    for (int i=tmp; i<len;i = i + 4)
    {
        if (i != 0 && str[i] >= '0' && str[i] <= '9')
            insert(str,len,',',i);
    }
    len++;
}