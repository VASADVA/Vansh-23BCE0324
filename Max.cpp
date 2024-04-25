#include <iostream>

using namespace std;
string purchase="Yes";
class layout
{
    public:
        void sections()
        {
            string ask1;
            cout<<"|____________|_____________|"<<endl;
            cout<<"|            |             |"<<endl;
            cout<<"|     (1)    |     (2)     |"<<endl;
            cout<<"|    MEN'S   |   BILLING   |"<<endl;
            cout<<"|   SECTION  |   COUNTER   |"<<endl;
            cout<<"|            |             |"<<endl;
            cout<<"|_____ ______|______ ______|"<<endl;
            cout<<"|_____ ______ ______ ______|"<<endl;
            cout<<"|            |             |"<<endl;
            cout<<"|     (4)    |     (3)     |"<<endl;
            cout<<"|    KID'S   |    LADIES   |"<<endl;
            cout<<"|   SECTION  |   SECTION   |"<<endl;
            cout<<"|            |             |"<<endl;
            cout<<"|            |             |"<<endl;
            cout<<"|____________|_____________|"<<endl;
        }
};
class mens
{
    public:
        void men()
        {
            string mprod[5][5]={
            {"ITEM CODE","\t","MEN'S APPAREL","\t\t"," PRICE"},
            {"  1001","\t\t","Black Pants","\t\t"," Rs 1000"},
            {"  1002","\t\t","Blue Shirt","\t\t"," Rs 1200"},
            {"  1003","\t\t","White Shirt","\t\t"," Rs1600"},
            {"  1004","\t\t","Black Blazer","\t\t"," Rs2000"}};
            for(int i=0;i<5;i++)
            {
                for(int j=0;j<5;j++)
                {
                    cout<<mprod[i][j];
                }
                cout<<"\t"<<endl;
            }
        }
};
class womens{
    public:
        void women()
        {
            string wprod[5][5]={
            {"ITEM CODE","\t","WOMEN'S APPAREL","\t\t"," PRICE"},
            {"  2001","\t\t","Black Skirt","\t\t"," Rs 1200"},
            {"  2002","\t\t","White Shirt","\t\t"," Rs 2200"},
            {"  2003","\t\t","Red Dress","\t\t"," Rs1500"},
            {"  2004","\t\t","Green Dress","\t\t"," Rs2500"}};
            for(int i=0;i<5;i++)
            {
                for(int j=0;j<5;j++)
                {
                    cout<<wprod[i][j];
                }
                cout<<"\t"<<endl;
            }
        }
};
class kids{
    public:
        void kid()
        {
            string kprod[6][5]={
            {"ITEM CODE","\t","KID'S APPAREL","\t\t"," PRICE"},
            {"  3001","\t","Blue Boy's Shorts","\t\t"," Rs 900"},
            {"  3002","\t","White Boy's Shirt","\t\t"," Rs 1000"},
            {"  3003","\t","Green Dress for Girls","\t\t"," Rs1500"},
            {"  3004","\t","Yellow Skirt","\t\t\t"," Rs1800"},
            {"  3005","\t","White Shirt for Girls","\t\t"," Rs2000"}};
            for(int i=0;i<6;i++)
            {
                for(int j=0;j<5;j++)
                {
                    cout<<kprod[i][j];
                }
                cout<<"\t"<<endl;
            }
        }
};
class billing: public kids,public mens,public womens,public layout
{
    public:
        string ask1,ask2,ask3,ask4;
        int sum=0;
        void display()
        {
            cout<<"Which section do you want to go to"<<endl;
            cin>>ask1;
            if(ask1=="Men's")
                {men();}
            else if(ask1=="Ladies")
                {women();}
            else if(ask1=="Kid's")
                {kid();}
        }
        void price(string a)
        {
            if(a=="1001")
                sum+=1000;
            else if(a=="1002")
                sum+=1200;
            else if(a=="1003")
                sum+=1600;
            else if(a=="1004")
                sum+=2000;
            else if(a=="2001")
                sum+=1200;
            else if(a=="2002")
                sum+=2200;
            else if(a=="2003")
                sum+=1500;
            else if(a=="2004")
                sum+=2500;
            else if(a=="3001")
                sum+=900;
            else if(a=="3002")
                sum+=1000;
            else if(a=="3003")
                sum+=1500;
            else if(a=="3004")
                sum+=1800;
            else if(a=="3005")
                sum+=2000;
        }
        void buy()
        {
            cout<<"What do you want to buy"<<endl;
            cin>>ask2;
            buy1();
            price(ask2);
        }
        void buy1()
        {
            cout<<"Do you want to buy more in this section"<<endl;
            cin>>ask3;
            if(ask3=="Yes")
            {
                buy();
            }
            else{
                cout<<"Do you want to go to any other section"<<endl;
                cin>>ask4;
                if(ask4=="Yes")
                    {
                        display();
                        buy();}
                else
                {
                    cout<<"Please proceed for billing"<<endl;
                }
            }
            cout<<"Your final Bill is:"<<sum<<endl;
            cout<<"Thank you for coming to Max"<<endl;
        }
};
int main()
{
    billing b;
    b.sections();
    b.display();
    b.buy();
}