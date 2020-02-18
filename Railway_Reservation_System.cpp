#include<iostream> 
#include<cstdlib> 
#include<string> 
#include<time.h> 
#include<iomanip> 
#include<process.h> 
#include<fstream> 
using namespace std; 
 

struct node
{
    int info; 
    struct node *left; 
    struct node *right; 
}*root;


char f[10]="f"; 
char s[10]="s"; 
int addr,ad,flag,f1,d,m,i,amt; 
float tamt; 
 

class login
{
    public: 
    char id[100]; 
    char pass[100]; 
    char *password; 

    void getid(int)
    {
        cout< <"Enter your id:";gets(id); 
        password=getpass("Enter the password:"); 
        strcpy(pass,password); 
    } 
    void displayid()
    {
        cout<<"Id:";puts(id); 
        cout<<"Password:";puts(pass); 
    }
}; 
 

class detail
{
    public: 
    int tno; 
    char tname[100]; 
    char bp[100]; 
    char dest[100]; 
    int c1,c1fare; 
    int d,m,y; 
 
    void getdetail()
    {
        cout<<"Enter the details\n"; 
        cout<<"Train no:"; 
        cin>>tno; 
        cout<<"Train name:"; 
        gets(tname); 
        cout<<"Boarding point:"; 
        gets(bp); 
        cout<<"Destination pt:"; 
        gets(dest); 
        cout<<"No of seats:"; 
        cin>>c1>>c1fare; 
        cout<<"Date of travel:";cin>>d>>m>>y; 
    } 
    
    void displaydetail()
    {
        cout<<tno<<"\t"<<tname<<"\t"<<bp<<"\t"<<dest<<"\t"; 
        cout<<c1<<"\t"<<c1fare<<"\t"<<c2<<"\t"<<c2fare<<"\t"; 
        cout<<d<<"-"<<m<<"-"<<y<<"\t"<<endl; 
    } 
}; 

class reser
{
    public: 
    int pnr; 

    int tno; 
    char tname[100]; 
    char dest[100]; 
    char pname[10][100]; 
    int age[20]; 
    char clas[10];
    char berth[20];
    int nosr; 
    int i; 
    int d,m,y; 
    int con; 
    float amc; 
    void getresdet(node *)
    {
        cout<<"Enter the details as follows\n"; 
        cout<<"Train no:";
        cin>>tno; 
        cout< <"Train name:"; 
        gets(tname); 
        cout<<"Boarding point:"; 
        gets(bp); 
        cout<<"Destination pt:"; 
        gets(dest); 
        cout<<"No of seats required:"; 
        cin>>nosr; 
        for(i=0;i<nosr ;i++)
        {
            cout<<"Enter the Passenger name:"; 
            gets(pname[i]); 
            cout<<"ENter the Passenger age and berth:"; 
            cin>>age[i];
            gets(berth[i]);

        } 

        cout< <"Enter the class f-first class s-sleeper class:"; 
        gets(clas); 
        cout<<"Date of travel:"; 
        cin>>d>>m>>y; 
        cout< <"Enter the concession category\n"; 
        cout<<"1.Military\n2.Senior citizen\n"; 
        cout<<"3.Children below 5 yrs\n4.None\n"; 
        cin>>con; 
    }

    void displayresdet(node *,int)
    {
        cout<<"...............................................\n"; 
        cout<<"Pnr no:"<<pnr; 
        cout<<"\nTrain no:"<<tno; 
        cout<<"\nTrain name:"; 
        puts(tname); 
        cout<<"Boarding point:"; 
        puts(bp); 
        cout<<"Destination pt:"; 
        puts(dest); 
        cout<<"No of seats reserved:"<<nosr; 
        for(i=0;i<nosr;i++)
        {
            cout<<"Passenger name:"; 
            puts(pname[i]); 
            cout<<"Passenger age:"<<age[i]; 
        } 
        cout<<"\nclass:"; 
        puts(clas); 
        cout<<"\nDate:"<<d<<"-"<<m<<"-"<<y; 
        cout<<"\nconcession:"<<con; 
        cout<<"\nTotal fare:"<<amc<<endl; 
        cout<<"***********************************************\n"; 
        cout<<".........END OF RESERVATION.................\n"; 
        cout<<"***********************************************\n"; 
    } 
}; 
 
class canc
{
    public: 
    int pnr; 
    int tno; 
    char tname[100]; 
    char bp[10]; 
    char dest[100]; 
    char pname[10][100]; 
    int age[20]; 
    int i; 
    char clas[10]; 
    int nosc; 
    int d,m,y; 
    float amr; 
    void getcancdet()
    {
        cout<<"Enter the details as follows\n"; 
        cout<<"Pnr no:";cin>>pnr;
        cout< <"Date of cancellation:";cin>>d>>m>>y; 
        cout< <"...........END OF GETTING DETAILS...........\n"; 
    } 
    void displaycancdet()
    {
        cout<<"...........................................\n"; 
        cout<<"Pnr no:"<<pnr; 
        cout<<"\nTrain no:"<<tno; 
        cout<<"\nTrain name:"; 
        puts(tname); 
        cout<<"Boarding point:"; 
        puts(bp); 
        cout<<"Destination pt:"; 
        puts(dest); 
        cout<<"\nYour class:"; 
        puts(clas); 
        cout<<"no of seats to be cancelled:"<<nosc; 
        for(i=0;i<nosc;i++) 
        { 
            cout<<"Passenger name:";puts(pname[i]); 
            cout<<"passenger age:"<<age[i]; 
            root->left=NULL; 
            root->right=NULL: 
        } 
        cout<<"\nDate of cancellation:"<<d<<"-"<<m<<"-"<<y; 
        cout<<"\nYour amount will be refunded in your account!!!"<<endl; 
        cout<<"*****************************************\n"; 
        cout<<".........END OF CANCELLATION.............\n"; 
        cout<<"*****************************************\n"; 
    } 
}; 
 
void user(); 
void database(node *,node *); 
void res(int); 
void reserve(node *); 
void displaypassdetail(node *,int); 
void cancell(); 
void enquiry(int,node **,node **);


int main() 
{
    int ch,temp; 
    cout<<”\n**********Railway Reservation System***************\n”;  
    start(); 
    void start()
    {
        cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n"; 
        cout<<".......WELCOME TO RAILWAY RESERVATION SYSTEM..........\n"; 
        cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
    } 
    do
    {
        cout<<"^^^^^^^^^^^^^^^^^^^^^^MAIN MENU^^^^^^^^^^^^^^^^^^^^\n"; 
        cout<<"1.Admin mode\n2.User mode\n3.Exit\n"; 
        cout<<"Enter your choice:"; 
        cin>>ch; 
        cout<<endl; 
        switch(ch)
        {
            case 1:
            database(root,temp);
            break; 
            case 2: 
            user(); 
            break; 
            case 3: 
            exit(0);
        } 
    }while(ch<=3);
    return 0; 
}

void database(int item,node *loc) 
{
    char *password; 
    char *pass="12345678"; 
    password=getpass("Enter the admininistrator password:"); 
    detail a; 
    fstream f; 
    int ch; 
    char c; 
    if(strcmp(pass,password)!=0)
    {
        cout<<"Enter the password correctly \n"; 
        cout<<"You are not permitted to logon this mode\n"; 
        goto h; 
    } 
    cout<<endl;
    do
    {
        switch(ch)
        {
            case 1: 
            f.open("t.txt",ios::out|ios::binary); 
            do
            {
                a.getdetail(int a); 
                f.write((char *) & a,sizeof(a)); 
                cout<<"Do you want to add one more record?\n"; 
                cout<<"y-for Yes\nn-for No\n"; 
                cin>>c; 
            }while(c=='y'); 
            f.close(); 
            break; 
            case 2: 
            f.open("t.txt",::in|ios::out|iosios::binary|ios::app); 
            a.getdetail(a); 
            f.write((char *) & a,sizeof(a)); 
            f.close(); 
            break; 
            case 3: 
            f.open("t.txt",ios::in|ios::out|ios::binary|ios::app); 
            f.seekg(0); 
            while(f.read((char *) & a,sizeof(a)))
            {
                a.displaydetail(loc,item);
            } 
            f.close(); 
            break; 
            case 4: 
            displaypassdetail(node,item); 
            break;
        }
    }while(ch< =5);
    f.close(); 
} 

void reserve()
{

    int ch; 
    do 
    {
        cout<<"\nLogged on to JITHIN"; 
        cout<<"1.Reserve\n2.Return to the main menu\n"; 
        cout<<"Enter your choice:"; 
        cin>>ch; 
        cout<<endl; 
        switch(ch)
        {
            case 1:
            res(item); 
            break; 
        } 
    }while(ch==1); 
} 

void res(item)
{
    detail a; 
    reser b; 
    fstream f1,f2; 
    time_t t; 
    f1.open("t.txt",ios::in|ios::out|ios::binary); 
    f2.open("p.txt",ios::in|ios::out|ios::binary|ios::app); 
    int ch; 
    b.getresdet(); 
    while(f1.read((char *) &a,sizeof(a)))
    {
        if(a.tno==b.tno)
        {
            if(strcmp(b.clas,f)==0)
            {
                if(a.c1>=b.nosr)
                {
                    amt=a.c1fare; 
                    addr=f1.tellg(); 
                    ad=sizeof(a.c1); 
                    f1.seekp(addr-(7*ad)); 
                    a.c1=a.c1-b.nosr; 
                    f1.write((char *) & a.c1,sizeof(a.c1)); 
                    srand((unsigned) time(&t)); 
                    b.pnr=rand(); 
                    f2.write((char *) & b,sizeof(b)); 
                    b.displayresdet(item,loc); 
                    cout<<"------------------------------------------------------\n"; 
                    cout<<"--------------Your payment is being processed-----------\n"; 
                    cout<<"-----------------End of reservation menu-------\n"; 
                } 
                else
                {
                    cout<<"**********Sorry requested seats are not available********\n"; 
                } 
            } 
            goto h; 
            }    
            else 
            {
                flag=0; 
            } 
        } 
    if(flag==0) 
    {
        cout<<"............Wrong train number......................\n"; 
        cout<<"......Enter the train number from the database.....\n"; 
    } 
    f1.close(); 
    f2.close(); 
    getch(); 
    h: 
} 

void displaypassdetail(node *ptr,int l) 
{
    fstream f; 
    reser b; 
    if(ptr!=NULL)
    {
        f.open("p.txt",ios::in|ios::out|ios::binary); 
        f.seekg(0); 
        while(f.read((char *) & b,sizeof(b)))
        {
            b.displayresdet(loc); 
        } 
    } 
    f.close(); 
} 
 
void enquiry() 
{
    fstream f; 
    f.open("t.txt",ios::in|ios::out|ios::binary); 
    detail a; 
    while(f.read((char *) & a,sizeof(a)))
    {
        a.displaydetail(loc,item); 
    } 
} 
 
void cancell() 
{
    detail a; 
    reser b; 
    canc c; 
    fstream f1,f2,f3; 
    f1.open("t.txt",ios::in|ios::out|ios::binary); 
    f2.open("p.txt",ios::in|ios::out|ios::binary); 
    f3.open("cn.txt",ios::in|ios::out|ios::binary); 
    cout<<"**********CANCELLATION MENU*********\n"; 
    c.getcancdet(); 
    while(f2.read((char *) & b,sizeof(b))) 
    {
        if(b.pnr==c.pnr)
        {
            c.tno=b.tno; 
            strcpy(c.tname,b.tname); 
            strcpy(c.bp,b.bp); 
            strcpy(c.dest,b.dest); 
            c.nosc=b.nosr; 
            for(int j=0;j<c.nosc;j++)
            {
                strcpy(c.pname[j],b.pname[j]);
                c.age[j]=b.age[j];
            } 
            strcpy(c.clas,b.clas);
            if(strcmp(c.clas,f)==0)
            {while(f1.read((char *) & a,sizeof(a)))
            {
                if(a.tno==c.tno)
                {
                    a.c1=a.c1+c.nosc; 
                    d=a.d; 
                    m=a.m; 
                    addr=f1.tellg(); 
                    ad=sizeof(a.c1); 
                    f1.seekp(addr-(7*ad)); 
                    f1.write((char *) & a.c1,sizeof(a.c1)); 
                    tamt=b.amc; 
                    if((c.d==d)&&(c.m==m))
                    {
                        cout<<"Your ticket is being camcelled!!\n";
                        c.amr=tamt-((tamt*60)/100);
                    }
                    else
                    {
                        cout<<"Your request cannot be completed\n";
                    } 
                    goto h; 
                    c.displaycancdet();
                }    
            } 
        } 
        else
        {
            flag=0;
        } 
    } 
    goto h: 
    if(flag==0)
    {
        cout<<"Enter the correct pnr no\n";
    } 
    f1.close(); 
    f2.close(); 
    f3.close(); 
} 

void can() 
{
    int ch;
    do
    {
        cout<<"****************CANCELLATION MENU***********8\n"; 
        cout<<"Enter your choice:"; 
        cin>>ch; 
        cout< <endl; 
        switch(ch)
        {
            case 1: 
            cancell(); 
            break;
        } 
    }while(ch==1); 
} 


void user() 
{
    login a;
    int ch; 
    cout<<"*****************************************************\n"; 
    cout<<"***********WELCOME TO THE USER MENU**\n"; 
    cout<<"****************************************************\n"; 
    char *password;  
    fstream f; 
    f.open("id.txt",ios::in|ios::out|ios::binary); 
    char id[100]; 
    puts("Enter your id:");gets(id); 
    password=getpass("Enter your password:"); 
    while(f.read((char *) & a,sizeof(a)))
    {
        if((strcmp(a.id,id)==0)&&(strcmp(a.pass,password)==0))
        {
            do
            {
                cout<<"1.Reserve\n2.Cancell\n3.Search trains\n4.PNR enquiry\n5.Return to the main menu\n"; 
                cout<<"Enter your choice:"; 
                cin>>ch; 
                cout<<endl;
                switch(ch)
                {
                    case 1:
                    reserve(loc,item); 
                    break; 
                    case 2: 
                    cancell(); 
                    break; 
                    case 3: 
                    res(loc); 
                    break; 
                    case 4: 
                    enquiry(node **par,node **locc); 
                    break; 
                } 
            }while(ch<=3);
            goto j; 
        } 
        else
        {
            d=1;
        } 
    } 
    if(d==1)
    {
        cout<<"Enter your user id and password correctly\n"; 
    } 
j: 
} 
