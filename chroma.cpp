#include <iostream>
#include <time.h>
#include <ctime>
using namespace std;
/* laptops,mobiles,headphones and earphones,tv, */
string ask2="Yes";
class welcome
{
    public:
        void display_time(){
        time_t currentTime = time(nullptr);
        tm* localTime = localtime(&currentTime);
        cout<< "Current time: "
        << localTime->tm_hour << ":"
        << localTime->tm_min << ":"
        << localTime->tm_sec <<endl;};
};
class appliances
{
    public:
        int i;
        void laptops(){
        string table1[5][5]=
        {
            {"SL.No","\t","LAPTOPS","\t\t\t\t"," PRICE"},
            {" 1","\t","HP Pavillion Laptop(HP)","\t\t"," 25,000"},
            {" 2","\t","Dell Laptop Inspiron(Dell)","\t"," 50,000"},
            {" 3","\t","Lenovo Idea Pad(Lenovo)","\t\t"," 70,000"},
            {" 4","\t","Asus Tuf A15(Asus)","\t\t"," 1,20,000"}
        };
        for(i=0;i<5;i++)
        {
            for(int j=0;j<5;j++)
            {
                cout<<table1[i][j];
            }
            cout<<"\n";
        }
        }
        void mobiles(){
        string table1[5][5]=
        {
            {"SL.No","\t","  MOBILES","\t\t\t\t","PRICE"},
            {" 1","\t","Samsung Galaxy A20(Samsung)","\t\t","12,000"},
            {" 2","\t","Vivo Y100A(Vivo)","\t\t\t","15,000"},
            {" 3","\t","Samsung Galaxy S22 Ultra(SamsungG)","\t","20,000"},
            {" 4","\t","IPhone 15 Pro(IPhone)","\t\t\t","22,000"}
        };
        for(i=0;i<5;i++)
        {
            for(int j=0;j<5;j++)
            {
                cout<<table1[i][j];
            }
            cout<<"\n";
        }
        }
        void tv(){
        string table1[5][5]=
        {
            {"SL.No","\t\t","TELEVISION","\t\t\t","PRICE"},
            {" 1","\t","Samsung43 Vivid Pro HD(Samsung43) ","\t","45,000"},
            {" 2","\t","LG 32-inch(LG)","\t\t\t\t","50,000"},
            {" 3","\t","Tosibha 55-inch(Tosibha)","\t\t","80,000"},
            {" 4","\t","Sony 55-inch(Sony)","\t\t\t","1,10,000"}
        };
        for(i=0;i<5;i++)
        {
            for(int j=0;j<5;j++)
            {
                cout<<table1[i][j];
            }
            cout<<"\n";
        }
        }
        void head(){
        string table1[5][5]=
        {
            {"SL.No","\t","HEADPHONES\EARPHONES","\t\t"," PRICE"},
            {" 1","\t","Boat Nirvana 751 ANC(BoatN)","\t"," 2,000"},
            {" 2","\t","Boat Rockerz 321 ANC(BoatR)","\t"," 5,000"},
            {" 3","\t","Apple Airpods Pro(Apple)","\t"," 7,000"},
            {" 4","\t","SkullCandy Earpods(SkullCandy)","\t"," 12,000"}
        };
        for(i=0;i<5;i++)
        {
            for(int j=0;j<5;j++)
            {
                cout<<table1[i][j];
            }
            cout<<"\n";
        }
        }
};
class sale:public appliances
{
    public:
        int sum=0;
        string ask1,ask3;
        void section(){
        cout<<"Welcome to Croma"<<endl;
        string table1[5][3]=
        {
            {"SL.No","\t","  SECTIONS",},
            {" 1","\t"," Laptops",},
            {" 2","\t"," Mobiles",},
            {" 3","\t"," Television"},
            {" 4","\t"," Headphones/Earphones"}
        };
        for(int i=0;i<5;i++)
        {
            for(int j=0;j<3;j++)
            {
                cout<<table1[i][j];
            }
            cout<<"\n";
        }
        }
        void price(string a)
        {
            if(a=="HP")
            {
                sum+=25000;
            }
            else if(a=="Dell")
            {
                sum+=50000;
            }
            else if(a=="Lenovo")
            {
                sum+=70000;
            }
            else if(a=="Asus")
            {
                sum+=120000;
            }
            else if(a=="Samsung")
            {
                sum+=12000;
            }
            else if(a=="Vivo")
            {
                sum+=15000;
            }
            else if(a=="SamsungG")
            {
                sum+=20000;
            }
            else if(a=="IPhone")
            {
                sum+=22000;
            }
            else if(a=="Samsung43")
            {
                sum+=45000;
            }
            else if(a=="LG")
            {
                sum+=50000;
            }
            else if(a=="Tosibha")
            {
                sum+=700000;
            }
            else if(a=="Sony")
            {
                sum+=120000;
            }
            else if(a=="BoatN")
            {
                sum+=2000;
            }
            else if(a=="BoatR")
            {
                sum+=5000;
            }
            else if(a=="Apple1")
            {
                sum+=7000;
            }
            else if(a=="SkullCandy")
            {
                sum+=1200;
            }

        }
        void purchase(){
        cout<<"What would you like to purchase"<<endl;
        cin>>ask1;
        if(ask1=="Laptops")
        {
            laptops();
            cout<<"Which Laptop would you like to buy?"<<endl;
            cin>>ask3;
        }
        else if(ask1=="Mobiles")
        {
            mobiles();
            cout<<"Which Mobile would you like to buy?"<<endl;
            cin>>ask3;
        }
        else if(ask1=="Television")
        {
            tv();
            cout<<"Which Television would you like to buy?"<<endl;
            cin>>ask3;
        }
        else if(ask1=="Headphones/Earphones")
        {
            head();
            cout<<"Which Headphone/Earphone would you like to buy?"<<endl;
            cin>>ask3;
        }
        price(ask3);
        cout<<"Do you want to buy more products ";cin>>ask2;
        }
        void bill()
        {
            cout<<"Thank you for coming to Croma!!"<<endl;
            cout<<"Your Total Bill is: "<<sum<<endl;
        }
};
int main()
{
    sale s;
    s.section();
    while(ask2=="Yes")
    {
        s.purchase();
    }
    s.bill();
}