#include<bits/stdc++.h>
using namespace std;
char decl[10][30];
char expn[20];
char var[10][10];
char temp1[20],temp2[20],temp3[20];
map<string,char>A;
int main()
{
    int n,k;
    int flag1,flag2;
    char d1,d2,d3;
    flag1=flag2=0;
    cout<<"Enter number of declaration statements ";
    cin>>n;
    k=0;
    for(int i=0;i<n;i++)
    {
        int flag=0;
        cout<<"Enter declaration statement "<<(i+1)<<": ";
        if(i == 0)
            cin.ignore();
        cin.getline(decl[i],30,'\n');
        char c = decl[i][0];
        for(int j=0;j<strlen(decl[i]);j++)
        {
            if((flag == 0)&&(decl[i][j] == ' '))
            {
                flag=1;
            }
            else if(flag == 1)
            {
                int x=0;
                while((decl[i][j] != ',')&&(decl[i][j] != ';'))
                {
                    var[k][x++] = decl[i][j++];
                }
                var[k][x] = '\0';
                string str(var[k]);
                A[str] = c;
                k++;
            }
        }
    }
    cout<<"Enter expression ";
    cin.getline(expn,20,'\n');
    int i=0;
    while(expn[i]!= '=')
    {
        temp1[i] = expn[i];
        i++;
    }
    temp1[i] = '\0';
    int j=0;
    i++;
    while((expn[i] != '+')&&(expn[i] != '-')&&(expn[i] != '*')&&(expn[i] != '/'))
    {
        if(isalpha(expn[i]))
            flag1=1;
        else if(expn[i] == '.')
            flag1=2;
        temp2[j++] = expn[i++];
    }
    temp2[j] = '\0';
    j=0;
    char op = expn[i];
    cout<<op;
    i++;
    while(expn[i] != ';')
    {
        if(isalpha(expn[i]))
            flag2=1;
        else if(expn[i] == '.')
            flag2=2;
        temp3[j++] = expn[i++];

    }
    temp3[j] = '\0';
    for(int i=0;i<k;i++)
    {
        string str(var[i]);
        if(strcmp(temp1,var[i])==0)
        {
            d1 = A[var[i]];
        }
        if(flag1 == 1)
        {
            if(strcmp(temp2,var[i])==0)
                d2 = A[var[i]];
        }
        if(flag2 == 1)
        {
            if(strcmp(temp3,var[i]) == 0)
                d3 = A[var[i]];
        }
    }
    if(flag1 == 0)
        d1 = 'i';
    if(flag1 == 2)
        d1 = 'f';
    if(flag2 == 0)
        d2 = 'i';
    if(flag2 == 2)
        d2 = 'f';
    if((d1 == d2)&&(d2 == d3)&&(d1 != 'c'))
        cout<<"\nVALID\n";
    else
        if((d1=='c')&&(((d2 == 'c')&&(d3 == 'i'))||((d2 == 'c')&&(d3 == 'i')))&&((op == '+')||(op == '-')))
        cout<<"\nVALID\n";
    else
        cout<<"\nTYPE MISMATCH\n";
}
