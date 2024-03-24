#include <SFML/Graphics.hpp>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;
using namespace sf;
int stock = 500;
class simple
{
public:
    int id, Price, quantity, Total;
    string Name;
    int operator+(simple &temp)
    {
        c->Total = c->Total + temp.Total;
        return c->Total;
    }
} c[100];

class Cart
{
    string address, confirm, cr_ID;
    int a = 0, pay;

public:
    Cart() {}
    void product(int b)
    {
        system("CLS");
        ofstream invoice("invoice.txt");
        invoice << "\n-------------------------------------------------------\n";
        invoice << "Your Products are given: ";
        cout << "Your Product are given below: \n";
        for (int i = 0; i < b; i++)
        {
            int a = c[i].id;
            string n = c[i].Name;
            int p = c[i].Price;
            int q = c[i].quantity;
            cout << "\n*****************************\n";
            cout << "ID: " << a << "\n"
                 << "Name: " << n << "\n"
                 << "Price: " << p << endl;
            cout << "\n*****************************\n";
            invoice << "\nID\tName\tQuantity\tPrice";
            invoice << "\n"
                    << a << "\t" << n << "\t" << q << "\t" << p;
        }
        int bb = 150;
        for (int i = 1; i < b; i++)
        {
            c[0] + c[i];
        }
        cout << "\n\t\tTotal charges: " << c->Total;
        invoice << "\n\nTotal charges : " << c->Total;
        cout << "\nDelivery Charges are: Rs.150";
        cout << "\nTotal bill " << c->Total + bb << endl;
        invoice << "\n\Total bill " << c->Total + bb;
        string p;
        cout << "\n\nPress ok to go to PAYMENT: ";
        cin >> p;
        Payment();
        delivery_bike();
        exit(0);
    }
    void Payment()
    {
        system("CLS");
        ofstream invoice("invoice.txt", ios::app);
        cout << "Enter your delivering address: ";
        cin.ignore();
        getline(cin, address);
        cout << "\nSelect Payment Method:\n1.Cash on Delivery\n2.Credit Card\n";
        cin >> pay;
        if (pay == 1)
        {
            invoice << "\nCash on Delivery";
        }
        else if (pay == 2)
        {
            cout << "Enter Your Credit Card ID: ";
            cin >> cr_ID;
            invoice << "\nCredit Card";
        }

        cout << "\n\nPress ok to confirm your order ";
        cin >> confirm;

        system("CLS");

        cout << "\n\tYour Order is confirmed successfully\n\n";

        srand(time(0));
        int random = rand();
        cout << "\tYour Order ID is: " << random << endl;
        invoice << "\nOrder ID" << random;
        invoice << "\n-------------------------------------------------------\n";
        invoice.close();
        int p;
        Sleep(7000);
    }
    void delivery_bike()
    {
        RenderWindow window(VideoMode(VideoMode::getDesktopMode()), "Graphics", Style::Close);
        Event e;
        RectangleShape BackGround(Vector2f(window.getSize()));
        BackGround.setFillColor(Color::White);
        RectangleShape Re(Vector2f(300, 250));
        Texture t;
        t.loadFromFile("del.jpg");
        Re.setPosition(0, 400);

        Re.setTexture(&t);
        while (window.isOpen())
        {
            while (window.pollEvent(e))
            {
                switch (e.type)
                {
                case Event::Closed:
                    window.close();
                }
            }
            Re.move(Vector2f(0.5f, 0.0f));
            window.clear();
            window.draw(BackGround);
            window.draw(Re);
            window.display();
        }
    }
};

class seller_central
{
    string product, des, catagory;
    int stock, price, ID, buy, a = 0;
    static int aa;

public:
    seller_central() {}
    void seller(string a)
    {
        string brandName = a + ".txt";
        string sto = a + " Stock" + ".txt";
        ofstream brand(brandName, ios::app);

        /*ofstream brand(br_name,ios::app);*/

    st:
        cout << "In which catagory you want to sell your Product\n* Sports and Outdoor\n* Grocery\n* Electronic Devices\n* Exit\n\n";
        cin.ignore();
        getline(cin, catagory);
        if (catagory == "Sports and Outdoor")
        {
            catagory = "Sports and Outdoor";
            cout << "\t\t\t\t\t***********************\n";
            cout << "\t\t\t\t\t| Sports and Outdoot  |\n";
            cout << "\t\t\t\t\t***********************\n\n\n";
            cout << setw(10) << setfill(' ') << " "
                 << " |-|"
                 << "     ||-||-||"
                 << "    "
                 << " ####"
                 << "    "
                 << "\\\\"
                 << "                               ___________________________\n";
            cout << setw(10) << setfill(' ') << " "
                 << " | |"
                 << "     || || ||"
                 << "    "
                 << "######"
                 << "    "
                 << "\\\\"
                 << "                             |()-----------()----------()|\n";
            cout << setw(10) << setfill(' ') << " "
                 << "/   \\"
                 << "    || || ||"
                 << "    "
                 << "######"
                 << "     "
                 << "\\\\"
                 << "                            |                      o    |\n";
            cout << setw(10) << setfill(' ') << " "
                 << "|   |"
                 << "    || || ||"
                 << "    "
                 << " ####"
                 << "       "
                 << "\\\\"
                 << "                           |                    o o    |\n";
            cout << setw(10) << setfill(' ') << " "
                 << "|   |"
                 << "    || || ||"
                 << "    "
                 << "  ||"
                 << "         "
                 << "\\\\"
                 << "              O O O"
                 << "       |     o            o o o    |\n";
            cout << setw(10) << setfill(' ') << " "
                 << "|BAT|"
                 << "    || || ||"
                 << "    "
                 << "  ||"
                 << "          "
                 << "\\\\"
                 << "           O       O"
                 << "     |                    o o    |\n";
            cout << setw(10) << setfill(' ') << " "
                 << "|   |"
                 << "    || || ||"
                 << "    "
                 << "  ||"
                 << "   ___"
                 << "     \\\\"
                 << "         O         O"
                 << "    |                      o    |\n";
            cout << setw(10) << setfill(' ') << " "
                 << "|   |"
                 << "    || || ||"
                 << "    "
                 << "  ||"
                 << "   \\ /"
                 << "      \\______"
                 << "    O       O"
                 << "     |()-----------()----------()|\n";
            cout << setw(10) << setfill(' ') << " "
                 << "|___|"
                 << "    || || ||"
                 << "    "
                 << "  ||"
                 << "    O"
                 << "        \\_____|"
                 << "     O O O"
                 << "       |___________________________|\n";
            cout << "\n"
                 << setw(130) << setfill('_') << "_"
                 << "\n\n";

            cout << "Enter Your Product Id: ";
            cin >> ID;
            cout << "\nEnter your product title: ";
            cin.ignore();
            getline(cin, product);
            cout << "\nEnter the price of the product: ";
            cin >> price;
            cout << "\nHow much stock is available for this product: ";
            cin >> stock;
            cout << "\nWrite Discription of your Project: ";
            cin.ignore();
            getline(cin, des);

            ofstream stoc(sto, ios::app);
            ofstream cart("cart.txt", ios::app);
            cart << ID << "   " << product << "   " << price << endl;
            cart.close();
            brand << "\n*******************************";
            brand << "\nEnter Product Id" << ID;
            stoc << ID << " ";
            brand << "\nCatagory: " << catagory;
            brand << "\nProduct Title: " << product;
            stoc << product << " ";
            brand << "\nPrice: " << price;
            stoc << price << " ";
            stoc << stock << endl;
            brand << "\nDiscription: " << des;
            brand << "\n*******************************";
            goto st;
            stoc.close();
            cart.close();
        }
        else if (catagory == "Grocery")
        {
            catagory = "Grocery";
            cout << "\t\t\t\t\t***********************\n";
            cout << "\t\t\t\t\t|       Grocery       |\n";
            cout << "\t\t\t\t\t***********************\n\n\n";
            cout << setw(10) << setfill(' ') << " "
                 << "  _"
                 << "                       __"
                 << "\t\t\t\t\t\t\t      _\n";
            cout << setw(10) << setfill(' ') << " "
                 << " |-|"
                 << "                     |  |"
                 << "           _______"
                 << "         ____"
                 << "                      _| |_\n";
            cout << setw(10) << setfill(' ') << " "
                 << " | |"
                 << "                  ___|  |___ "
                 << "       |_____|"
                 << "        /____\\"
                 << "       ______"
                 << "       |     |\n";
            cout << setw(10) << setfill(' ') << " "
                 << "/   \\"
                 << "     _______"
                 << "     |        |  "
                 << "     /       \\"
                 << "      |      |"
                 << "     |______\\"
                 << "      |     |\n";
            cout << setw(10) << setfill(' ') << " "
                 << "|   |"
                 << "     |_____|"
                 << "     |        |"
                 << "      |         |"
                 << "     |      |"
                 << "     |       |"
                 << "     |Juice|\n";
            cout << setw(10) << setfill(' ') << " "
                 << "|Oil|"
                 << "     |     |"
                 << "     |Hersheys|"
                 << "      | Nutella |"
                 << "     | Milk |"
                 << "     |Ketchup|"
                 << "     |     |\n";
            cout << setw(10) << setfill(' ') << " "
                 << "|   |"
                 << "     | Jam |"
                 << "     |        |"
                 << "      |         |"
                 << "     |      |"
                 << "     |       |"
                 << "     |     |\n";
            cout << setw(10) << setfill(' ') << " "
                 << "|___|"
                 << "     |_____|"
                 << "     (________)"
                 << "      |_________|"
                 << "     |______|"
                 << "     |_______|"
                 << "      \\___/\n";
            cout << "\n"
                 << setw(130) << setfill('_') << "_"
                 << "\n\n";

            cout << "Enter Your Product Id: ";
            cin >> ID;
            cout << "\nEnter your product title: ";
            cin.ignore();
            getline(cin, product);
            cout << "\nEnter the price of the product: ";
            cin >> price;
            cout << "\nHow much stock is available for this product: ";
            cin >> stock;
            cout << "\nWrite Discription of your Project: ";
            cin.ignore();
            getline(cin, des);

            ofstream stoc(sto, ios::app);
            ofstream cart("cart.txt", ios::app);
            cart << ID << "   " << product << "   " << price << endl;
            cart.close();
            brand << "\n*******************************";
            brand << "\nEnter Product Id" << ID;
            stoc << ID << " ";
            brand << "\nCatagory: " << catagory;
            brand << "\nProduct Title: " << product;
            stoc << product << " ";
            brand << "\nPrice: " << price;
            stoc << price << " ";
            stoc << stock << endl;
            brand << "\nDiscription: " << des;
            brand << "\n*******************************";
            goto st;
            stoc.close();
            cart.close();
        }
        else if (catagory == "Electronic Devices")
        {
            catagory = "Electronic Devices";
            cout << "\t\t\t\t\t**********************************\n";
            cout << "\t\t\t\t\t|       Electronic Devices       |\n";
            cout << "\t\t\t\t\t**********************************\n\n\n";
            cout << setw(8) << setfill(' ') << " "
                 << " _______________________"
                 << "               _________________________"
                 << "                  ______\n";
            cout << setw(8) << setfill(' ') << " "
                 << "| _____________________ |"
                 << "             /                         \\"
                 << "                |______|\n";
            cout << setw(8) << setfill(' ') << " "
                 << "||                     ||"
                 << "            |            Gree           |"
                 << "                  ||\n";
            cout << setw(8) << setfill(' ') << " "
                 << "||                     ||"
                 << "            |___________________________|"
                 << "                  ||\n";
            cout << setw(8) << setfill(' ') << " "
                 << "||                     ||"
                 << "     ___"
                 << "    |___________________________|"
                 << "                  ||     ___________\n";
            cout << setw(8) << setfill(' ') << " "
                 << "||                     ||"
                 << "    |*  |"
                 << "                                    _________"
                 << "     ||____|           \\"
                 << "      ________\n";
            cout << setw(8) << setfill(' ') << " "
                 << "||                     ||"
                 << "    |*  |"
                 << "                                   | ^    _  |"
                 << "    |_____    Vaccum   \\"
                 << "    |        |\n";
            cout << setw(8) << setfill(' ') << " "
                 << "||_____________________||"
                 << "    |   |"
                 << "                                   | O   |_| |"
                 << "          |   Cleaner  /"
                 << "    |_      _|\n";
            cout << setw(8) << setfill(' ') << " "
                 << "|_______________________|"
                 << "    |___|"
                 << "                                   |_________|"
                 << "          |___________/"
                 << "     |_|    |_|\n";
            cout << setw(8) << setfill(' ') << " "
                 << "        |________|"
                 << "\t\t\t\t\t\t\t\t\t     O     O\n";
            cout << "\n"
                 << setw(130) << setfill('_') << "_"
                 << "\n\n";

            cout << "Enter Your Product Id: ";
            cin >> ID;
            cout << "\nEnter your product title: ";
            cin.ignore();
            getline(cin, product);
            cout << "\nEnter the price of the product: ";
            cin >> price;
            cout << "\nHow much stock is available for this product: ";
            cin >> stock;
            cout << "\nWrite Discription of your Project: ";
            cin.ignore();
            getline(cin, des);

            ofstream stoc(sto, ios::app);
            ofstream cart("cart.txt", ios::app);
            cart << ID << "   " << product << "   " << price << endl;
            cart.close();
            brand << "\n*******************************";
            brand << "\nEnter Product Id" << ID;
            stoc << ID << " ";
            brand << "\nCatagory: " << catagory;
            brand << "\nProduct Title: " << product;
            stoc << product << " ";
            brand << "\nPrice: " << price;
            stoc << price << " ";
            stoc << stock << endl;
            brand << "\nDiscription: " << des;
            brand << "\n*******************************";
            goto st;
            stoc.close();
            cart.close();
        }
        else if (catagory == "Exit")
        {
            system("CLS");
        }
        brand.close();
    }
    void Search(string a)
    {

    st:
        bool b = false;
        ifstream brand("cart.txt", ios::app);
        string name;
        cout << "Enter  product name\n";
        cin >> name;
        int aId, bprice, cquantity;
        string dname;

        while (!brand.eof())
        {
            brand >> ID;
            brand >> product;
            brand >> price;
            if (product == name)
            {
                system("CLS");
                c[aa].id = ID;
                c[aa].Name = product;
                c[aa].Price = price;
                cout << "_______________________________\n";
                cout << "ID: " << c[aa].id << "\n";
                cout << "Name: " << c[aa].Name << "\n";
                cout << "Price: " << c[aa].Price << "\n";
                cout << "_______________________________";
            }
        }
        brand.close();
    again:;
        cout << "\n\n\nEnter the quantity :";
        cin >> c[aa].quantity;
        int cc = c[aa].quantity;
        c[aa].Total = c[aa].Price * c[aa].quantity;
        aa = aa + 1;
        int check = 0;
        int subs = 0;
        ofstream tfile("temp.txt", ios::app);
        ifstream stoc(a);
        if (!stoc.is_open())
        {
            cout << "error";
        }
        while (!stoc.eof())
        {
            while (stoc >> aId >> dname >> bprice >> cquantity)
            {
                if (product == dname)
                {
                    if (cc <= cquantity)
                    {
                        int sub = cquantity - cc;
                        check = 1;
                        tfile << aId << " " << dname << " " << bprice << " " << sub << endl;
                    }
                    else
                    {
                        cout << "Out of stock!!!\nEnter the correct quantity: ";
                        goto again;
                    }
                }
                else
                {
                    tfile << aId << " " << dname << " " << bprice << " " << cquantity << endl;
                }
            }
        }
        tfile.close();
        stoc.close();
        remove(a.c_str());
        rename("temp.txt", a.c_str());
        cout << "Press 1 to add more products\nPress 2 to go to your purchase\n";
        cin >> buy;
        if (buy == 1)
        {
            return;
        }
        else if (buy == 2)
        {
            purchase();
        }
        b = true;
        return;
    }
    void purchase()
    {
        cout << "ID"
             << "\t"
             << "NAME"
             << "\t"
             << "PRICE"
             << "\t"
             << "QUANTITY"
             << "\t"
             << "Total price\n";
        for (int i = 0; i < aa; i++)
        {
            cout << c[i].id << "\t" << c[i].Name << "\t" << c[i].Price << "\t" << c[i].quantity << "\t\t" << c[i].Total << endl;
            a = a + c[i].Total;
        }
        cout << "Total Price: " << a;
        string C;
        int k, i;
        cout << "\n\n\nPress ok to go on Check Out\n";
        cin >> C;

        Cart c;
        c.product(aa);
    }
    void deletePR(string a)
    {
        string aa = a + ".txt";
        bool b = false;
        string name;
        cout << "enter name :";
        cin >> name;
        ofstream tempfile("temp.txt");
        ifstream read(aa);
        while (read >> ID >> product >> price)
        {
            if (product == name)
            {
                b = true;
            }
            if (product != name)
            {
                tempfile << ID << "\t\t" << product << "\t\t" << price << endl;
            }
        }
        read.close();
        tempfile.close();
        remove(aa.c_str());
        rename("temp.txt", aa.c_str());
        if (b == true)
        {
            cout << "\nProduct deleted :\n";
        }
        else
        {
            cout << "\nNot Found";
        }
    }
};
// void quantity()
//{
//
// }
int seller_central::aa = 0;
class Buyer : public seller_central
{
    string Brand;
    int buy;

public:
    Buyer()
    {
        system("cls");
    mm:
        cout << "\t\t\t*************************\n";
        cout << "\t\t\t|\t  BRANDS\t|";
        cout << "\n\t\t\t*************************\n";
        ifstream Brand_Names("Brand_Names.txt", ios::in);
        string read;
        while (!Brand_Names.eof())
        {
            getline(Brand_Names, read);
            cout << read << endl;
        }
        Brand_Names.close();

        cout << "\n\nChoose Brand Name: ";
        cin.ignore();
        getline(cin, Brand);

        string r, bb = Brand + ".txt";

        ifstream brand;
        brand.open(bb);
        if (!brand.is_open())
        {
            cout << "Incorrect brand ";
            Sleep(1000);
            Buyer();
        }
        while (!brand.eof())
        {
            getline(brand, r);
            cout << r << endl;
        }
        brand.close();
        string fileName = Brand + " Stock.txt";
        Search(fileName);
        goto mm;
        system("CLS");
    }
};
class Account : public seller_central
{
    string name, gender, CNIC, Address, phone_no, passoward, email, re_pass, submit, nu, np, br_name, br;
    int age;

public:
    Account() {}
    void userLogin()
    {
        int count = 0;
    m:
        cout << "Enter Your Email Address: ";
        cin >> email;
        cout << "\nEnter Your Passoward: ";
        cin >> passoward;
        ifstream us("us_acc.txt");
        while (us >> nu >> np)
        {
            if (nu == email && np == passoward)
            {
                count = 1;
                system("cls");
            }
        }
        us.close();

        if (count == 1)
        {
            cout << "\t\t\n\nLogin Successful!!\t\t\n\n\n"
                 << endl;
            Sleep(1000);
        }
        else
            goto m;
    }
    void userSignIN()
    {
        ofstream user("user_account.txt", ios::out | ios::app);
        ofstream us("us_acc.txt", ios::app);
        cout << "\nEnter your full Name: ";
        cin.ignore();
        getline(cin, name);
        user << "\nName: " << name;
        cout << "Enter your Email address: ";
        cin >> email;
        user << "\nEmail: " << email;
        us << email << "  ";
        cout << "Enter your passoward: ";
        cin >> passoward;
        cout << "Re-Enter your passoward: ";
        cin >> re_pass;
        if (passoward == re_pass)
        {
            user << "\nPassoward: ";
            user << passoward;
            us << passoward;
        }
        else
        {
            while (passoward != re_pass)
            {
                cout << "\n\t|"
                     << "Your passoward did not match"
                     << "|\n";
                cout << "Again Enter your passoward";
                cin >> passoward;
                user << "\nPassoward: ";
                user << passoward;
                us << passoward;
                cout << "Re-Enter your passoward: ";
                cin >> re_pass;
            }
        }

        us.close();
        user.close();
    }
    void Login()
    {
    start:
        cout << "Enter Your Email Address: ";
        cin >> email;
        cout << "\nEnter Your Passoward: ";
        cin >> passoward;
        cout << "\nPlease Enter Your Brand Name: ";
        cin.ignore();
        getline(cin, br_name);
        int count = 0;
        ifstream accout("Account.txt", ios::in);
        while (accout >> nu >> np >> br)
        {
            if (nu == email && np == passoward && br == br_name)
            {
                count = 1;
                system("cls");
            }
        }
        accout.close();

        if (count == 1)
        {
            cout << "\t\t\n\nLogin Successful!!\t\t\n\n\n"
                 << endl;
            Sleep(2000);
            system("cls");

            string r, aa = br_name + ".txt";
            ifstream brand;
            brand.open(aa);
            while (!brand.eof())
            {
                getline(brand, r);
                cout << r << endl;
            }
            brand.close();

            int a;
            cout << "\n\nPress 1 to Add any product:\nPress 2 to delete\nPress 3 to exit ";
            cin >> a;
            if (a == 1)
            {
                seller(br_name);
            }
            else if (a == 2)
            {
                deletePR(br_name);
            }
            else if (a == 3)
            {
                system("CLS");
            }
        }

        else
        {
            cout << "\t\t\t\n\nWrong Input !!!\t\t\t" << endl;
            Sleep(1000);
            goto start;
        }
    }
    void signup()
    {
        ofstream ofile("seller_account.txt", ios::out | ios::app);
        ofstream account("Account.txt", ios::out | ios::app);
        cin.ignore();
        ofile << "***************************************************\n";
        cout << "\nEnter your full Name: ";
        getline(cin, name);
        ofile << "Name: " << name;
        cout << "Enter your Email address: ";
        cin >> email;
        ofile << "\nEmail: " << email;
        account << email << "   ";
        cout << "Enter your passoward: ";
        cin >> passoward;
        cout << "Re-Enter your passoward: ";
        cin >> re_pass;
        if (passoward == re_pass)
        {
            ofile << "\nPassoward: ";
            ofile << passoward;
            account << passoward;
        }
        else
        {
            while (passoward != re_pass)
            {
                cout << "\n\t|"
                     << "Your passoward did not match"
                     << "|\n";
                cout << "Again Enter your passoward";
                cin >> passoward;
                ofile << "\nPassoward: ";
                ofile << passoward;
                account << passoward;
                cout << "Re-Enter your passoward: ";
                cin >> re_pass;
            }
        }
    s:
        cout << "Enter your age: ";
        cin >> age;
        if (age > 18)
        {
            ofile << "\nAge: " << age;
        }
        else
        {
            cout << "Age Must be Greater than 18\n";
            goto s;
        }
        cout << "What is your gender: ";
        cin >> gender;
        ofile << "\nGender: " << gender;
        cout << "Enter your original CNIC: ";
        cin >> CNIC;
        ofile << "\nCNIC: " << CNIC;
        cout << "Enter Your Phone Number: ";
        cin >> phone_no;
        ofile << "\nPhone Number: " << phone_no;
        ofile << "\n***************************************************\n\n\n\n";
        ofile.close();
        cout << "What is your Brand Name: ";
        cin.ignore();
        getline(cin, br_name);
        account << "   " << br_name << endl;
        account.close();

        cout << "\n\nCreating your Daraz Seller Account........";
        Sleep(4000);
        system("cls");

        cout << "\n\n\n\t\tYou are now successfully registered on Daraz Seller Central";
        cout << "\n\n\nWrite ok to continue ";
        cin >> submit;
        system("cls");

        ofstream Brand_Names;
        Brand_Names.open("Brand_Names.txt", ios::app);
        Brand_Names << br_name << endl;
        Brand_Names.close();

        seller(br_name);
    }
};

int main()
{
    RenderWindow window(VideoMode(VideoMode::getDesktopMode()), "Graphics", Style::Close);
    Event e;
    RectangleShape BackGround(Vector2f(window.getSize()));
    BackGround.setFillColor(Color::White);
    RectangleShape R(Vector2f(1000, 500));
    Texture T;
    T.loadFromFile("darazlogo.png");
    R.setPosition(180, 100);
    R.setTexture(&T);
    while (window.isOpen())
    {
        while (window.pollEvent(e))
        {
            switch (e.type)
            {
            case Event::Closed:
                window.close();
            }
        }
        window.clear();
        window.draw(BackGround);
        window.draw(R);
        window.display();
    }

    int select, account;
    Account a;
j:
    system("CLS");
    cout << "\n\n\n\n\n\n";
    cout << setw(20) << setfill(' ') << " "
         << "O O O O         OOOOOOOO     OOOOOOOO    OOOOOOOOO    OOOOOOOOO\n";
    cout << setw(20) << setfill(' ') << " "
         << "O      O       O        O    O      O    O       O           O\n";
    cout << setw(20) << setfill(' ') << " "
         << "O        O     O        O    O      O    O       O          O\n";
    cout << setw(20) << setfill(' ') << " "
         << "O         O    O        O    O      O    O       O         O\n";
    cout << setw(20) << setfill(' ') << " "
         << "O          O   OOOOOOOOOO    OOOOOOO     OOOOOOOOO        O\n";
    cout << setw(20) << setfill(' ') << " "
         << "O         O    O        O    O   O       O       O       O\n";
    cout << setw(20) << setfill(' ') << " "
         << "O        O     O        O    O    O      O       O      O\n";
    cout << setw(20) << setfill(' ') << " "
         << "O      O       O        O    O     O     O       O     O\n";
    cout << setw(20) << setfill(' ') << " "
         << "O O O O        O        O    O      O    O       O    OOOOOOOOO\n";
    cout << "\n\n\n\n\n\n";

    cout << "\t\t\t    Choose from the following\n\n\n";
    cout << "\t\t " << setw(15) << setfill('*') << "*"
         << "\t\t " << setw(21) << setfill('*') << "*";
    cout << "\n\t\t"
         << "|"
         << "1. Buy Products"
         << "|"
         << "\t\t"
         << "|"
         << "2. Sell Your Products"
         << "|";
    cout << "\n\t\t " << setw(15) << setfill('*') << "*"
         << "\t\t " << setw(21) << setfill('*') << "*";
    cout << "\n\n";
    cin >> select;
    if (select == 1)
    {
        system("cls");
        cout << "\n1. Alredy have an accout\n2. Did not have an accout\n3. Guest\n4. Exit\n";
        cin >> account;
        if (account == 1)
        {
            a.userLogin();
            Buyer b;
        }
        else if (account == 2)
        {
            a.userSignIN();
            Buyer b;
        }
        else if (account == 3)
        {
            Buyer b;
        }
        else if (account == 4)
        {
            goto j;
        }
    }
    else if (select == 2)
    {
        system("cls");
        cout << "\t\tYour are now in the Seller Central of Daraz";
        cout << "\n1. Alredy have an accout\n2. Did not have an accout\n3. Exit\n";
        cin >> account;
        if (account == 1)
        {
            a.Login();
        }
        else if (account == 2)
        {
            a.signup();
        }
        else if (account == 3)
        {
            goto j;
        }
    }
}