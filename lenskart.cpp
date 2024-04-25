#include <iostream>
#include <time.h>
#include <ctime>

using namespace std;

int amount=20000;
string ask2="Yes";
class Glasses
{
    public:
        void directions(){
        string table[5][3]=
            {
            {"Eyeglasses","\t\t","Left <--"},
            {"Sunglasses","\t","Right -->"},
            {"Contact_lenses","\t\t\t","Forward and Right ↱"},
            {"Billing","\t\t\t","Forward and Left ↰"},
            };
            for(int i=0;i<5;i++)
            {
                for(int j=0;j<3;j++)
                {
                    cout<<table[i][j];
                }
                cout<<"\t"<<endl;
            }
            }
        void menu()
        {
            cout<<"             We exist to transform the way people see and experience the world"<<endl;
            string table1[10][5]=
            {
            {"SL.No","\t","  ITEMS","\t\t\t","   RANGE"},
            {" 1","\t","Sunglasses","\t\t","Rs 2000-5000 "},
            {" 2","\t","Eyeglasses","\t\t","Rs 4000-12000"},
            {" 3","\t","Contact_lenses","\t\t","Rs 6000-13000"},
            {" 4","\t","","\t\t"," "},
            };
            for(int i=0;i<9;i++)
            {
                for(int j=0;j<5;j++)
                {
                    cout<<table1[i][j];
                }
                cout<<"\t"<<endl;
            }
        }
};

class talk
{
    public:
        string ask1,a,ask,ask3;
        int sum=0,n,n1;
        void price(string a)
        {
            if(ask=="A1")
                sum+=1500;
            else if(ask=="A2")
                sum+=2700;
            else if(ask=="A3")
                sum+=4300;
            else if(ask=="W1")
                sum+=1500;
            else if(ask=="W2")
                sum+=2200;
            else if(ask=="W3")
                sum+=5000;
            else if(ask=="S1")
                sum+=1200;
            else if(ask=="S2")
                sum+=2000;
            else if(ask=="S3")
                sum+=4000;
            else if(ask=="SFC")
                sum+=5200;
            else if(ask=="RCL")
                sum+=4700;
            else if(ask=="EWL")
                sum+=5000;
        }
        void frame1(){
        string table[7][5]={
            {"SR.No","\t","FRAMES AND LENSEs","\t","    RANGE"},
            {" 1","\t","Plastic and Normal Lenses","\t"," Rs. 2200-4200"},
            {" 2","\t","Metal and Normal Lenses","\t"," Rs. 2700-6000"},
            {" 3","\t","Rimless and Normal Lenses","\t"," Rs. 4700-9200"},
            {" 4","\t","Plastic and Blue Lenses","\t"," Rs. 2200-4200"},
            {" 5","\t","Metal and Blue Lenses","\t"," Rs. 2700-6000"},
            {" 6","\t","Rimless and Blue Lenses","\t"," Rs. 4700-9200"}};
            for(int i=0;i<7;i++)
            {
                for(int j=0;j<5;j++)
                {
                    cout<<table[i][j];
                }
                cout<<"\t"<<endl;
            }
        }
        void clenses(){
            string table[4][5]={
            {"SR.No","\t","Contact Lenses","\t","    RANGE"},
            {" 1","\t","Soft Contact lenses(SFC)","\t"," Rs. 5200"},
            {" 2","\t","Rigid Contact lenses(RCL)","\t"," Rs. 4700"},
            {" 3","\t","Extended wear Contact lenses(EWL)","\t"," Rs. 5000"}};
            for(int i=0;i<4;i++)
            {
                for(int j=0;j<5;j++)
                {
                    cout<<table[i][j];
                }
                cout<<"\t"<<endl;
            }
        }
        void sale()
        {
            cout<<"Which section do you want to go ";cin>>ask1;
            if (ask1=="Sunglasses")
            {
                cout<<"Aviators\tWayfarers\tSports"<<endl;
                cout<<"Which brand do you prefer"<<endl;

                cout<<"I would like to see";cin>>ask3;
                if (ask3=="Aviators")
                {
                    cout<<"A Model1(A1)"<<"1500"<<endl;
                    cout<<"A Model2(A2)"<<"2700"<<endl;
                    cout<<"A Model3(A3)"<<"4300"<<endl;
                    cout<<"i would like to buy ";cin>>ask;

                    }
                else if(ask3=="Wayfarers")
                    {
                    cout<<"W Model1(W1)"<<"1500"<<endl;
                    cout<<"W Model2(W2)"<<"2200"<<endl;
                    cout<<"W Model3(W3)"<<"5000"<<endl;
                    cout<<"I would like to buy ";cin>>ask;

                    }
                 else if(ask3=="Sports")
                    {
                    cout<<"S Model1(S1)"<<"1200"<<endl;
                    cout<<"S Model2(S2)"<<"2000"<<endl;
                    cout<<"S Model3(S3)"<<"4000"<<endl;
                    cout<<"I would like to buy ";cin>>ask;

                    }
            }
            string  ask4,ask5;
            if(ask1=="Eyeglasses")
            {
               cout<<"What kind of frames do you have"<<endl;
               frame1();
               cout<<"I would like to choose";cin>>ask;
            }
            else if(ask1=="Contact_lenses")
            {
                cout<<"Hello sir! Which kind of contact lenses you prefer"<<endl;
                clenses();
                cout<<"I would like to buy";cin>>ask;
            }
            price(ask);
        }
        void bill()
        {
            cout<<"Your total bill is:"<<sum<<endl;
                time_t currentTime = time(nullptr);
                tm* localTime = localtime(&currentTime);
                cout
                  << localTime->tm_hour << ":"
                  << localTime->tm_min << ":"
                  << localTime->tm_sec <<endl;
            amount=amount-sum;
            cout<<"Amount left with you:"<<amount<<endl;
        }

};
int main()
{
    Glasses gl;
    talk t;
    gl.menu();
    cout<<"---------Welcome to Lenskart---------"<<endl;
    t.sale();
    while(ask2=="Yes"){
        t.sale();
    }
    t.bill();
    return 0;
}
