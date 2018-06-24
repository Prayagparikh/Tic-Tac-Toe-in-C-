#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;
void grid();
void grid()
{
    cout<<"\n********** POSITIONS ARE SHOWN AS BELOW **********\n\n";
    cout<<'1'<<"  | "<<'2'<<"  | "<<'3'<<"\n";
    cout<<"   | "<<"   | "<<"\n";
    cout<<"-------------"<<"\n";
    cout<<'4'<<"  | "<<'5'<<"  | "<<'6'<<"\n";
    cout<<"   | "<<"   | "<<"\n";
    cout<<"-------------"<<"\n";
    cout<<'7'<<"  | "<<'8'<<"  | "<<'9'<<"\n";
    cout<<"   | "<<"   | "<<"\n";
}
char c='O';
int i,b[9],e[10],cont=-1;
int grid1(int);
int grid1(int a)
{
    cont++;
    for(i=0;i<cont;i++)
    {
        if(e[i]==a)
            return(3);
    }
    for(i=0;i<=9;i++)
    {
        e[i]=a;
    }
    if(a==1)
        b[0]=c;
    if(a==2)
        b[1]=c;
    if(a==3)
        b[2]=c;
    if(a==4)
        b[3]=c;
    if(a==5)
        b[4]=c;
    if(a==6)
        b[5]=c;
    if(a==7)
        b[6]=c;
    if(a==8)
        b[7]=c;
    if(a==9)
        b[8]=c;
    if(a>=10)
    {
        cout<<"\n\t\t******** INVALID POSITION ********\n";
        return(0);
    }
    cout<<(char)b[0]<<"  | "<<(char)b[1]<<"  | "<<(char)b[2]<<"\n";
    cout<<"   | "<<"   | "<<"\n";
    cout<<"-------------"<<"\n";
    cout<<(char)b[3]<<"  | "<<(char)b[4]<<"  | "<<(char)b[5]<<"\n";
    cout<<"   | "<<"   | "<<"\n";
    cout<<"-------------"<<"\n";
    cout<<(char)b[6]<<"  | "<<(char)b[7]<<"  | "<<(char)b[8]<<"\n";
    cout<<"   | "<<"   | "<<"\n";
    c=167-c;
    if(b[0]=='O' && b[1]=='O' && b[2]=='O')
        return(1);
    if(b[0]=='X' && b[1]=='X' && b[2]=='X')
        return(1);
    if(b[3]=='O' && b[4]=='O' && b[5]=='O')
        return(1);
    if(b[3]=='X' && b[4]=='X' && b[5]=='X')
        return(1);
    if(b[6]=='O' && b[7]=='O' && b[8]=='O')
        return(1);
    if(b[6]=='X' && b[7]=='X' && b[8]=='X')
        return(1);
    if(b[0]=='O' && b[3]=='O' && b[6]=='O')
        return(1);
    if(b[0]=='X' && b[3]=='X' && b[6]=='X')
        return(1);
    if(b[1]=='O' && b[4]=='O' && b[7]=='O')
        return(1);
    if(b[1]=='X' && b[4]=='X' && b[7]=='X')
        return(1);
    if(b[2]=='O' && b[5]=='O' && b[8]=='O')
        return(1);
    if(b[2]=='X' && b[5]=='X' && b[8]=='X')
        return(1);
    if(b[0]=='O' && b[4]=='O' && b[8]=='O')
        return(1);
    if(b[0]=='X' && b[4]=='X' && b[8]=='X')
        return(1);
    if(b[2]=='O' && b[4]=='O' && b[6]=='O')
        return(1);
    if(b[2]=='X' && b[4]=='X' && b[6]=='X')
        return(1);

    if(b[1]=='O' || b[1]=='X'){
    if(b[2]=='O' || b[2]=='X'){
    if(b[3]=='O' || b[3]=='X'){
    if(b[4]=='O' || b[4]=='X'){
    if(b[5]=='O' || b[5]=='X'){
    if(b[6]=='O' || b[6]=='X'){
    if(b[7]=='O' || b[7]=='X'){
    if(b[8]=='O' || b[8]=='X'){
    if(b[9]=='O' || b[3]=='X'){
            return(2);}}}}}}}}}


}
int main()
{
    grid();
    for(int i=0;i<=8;i++)
        b[i]=' ';
    string str1,str2;
    cout<<"\nPlayer 1 Name:";
    cin>>str1;
    cout<<"\nPlayer 2 Name:";
    cin>>str2;
    cout<<"\n'O' FOR "<<str1;
    cout<<"\n'X' FOR "<<str2<<"\n";
    int d=0;
    int inp;
    int t;
    while(t!=1)
    {
        if(d==0)
            cout<<"\n"<<str1<<" Enter your position:";
        if(d==1)
            cout<<"\n"<<str2<<" Enter your position:";
        cin>>inp;
        t=grid1(inp);
        d=1-d;
        if(t==2)
        {
            cout<<"\n\n\t\t******** MATCH DRAW ********\n\n";
            exit(0);
        }
        if(t==0)
        {
            d=1-d;
            cout<<"\n\t\t******** RE-ENTER YOUR POSITION ********\n";
        }
        if(t==3)
        {
            d=1-d;
            cout<<"\n\t\t******** ALREADY OCCUPIED POSITION ********\n";
             cout<<"\n\t\t******** RE-ENTER YOUR POSITION ********\n";
        }
    }
    if(d==1)
        cout<<"\n\t\t******** "<<str1<<" WON********";
    if(d==0)
        cout<<"\n\t\t******** "<<str2<<" WON********";
    getch();
    return 0;
}
