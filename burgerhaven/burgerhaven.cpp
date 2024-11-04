#include <iostream>
#include <string>

using namespace std;

// Welcome message
void welcome()
{
    cout << "\t\t\t\t-----Welcome To The Burger Haven-----" << endl;
    cout << "\t\t\t\t  *** Home of Delicious Burgers & More ***" << endl;
}

// Chicken burger menu
void menu_1()
{
    cout << "1- Classic Chicken Burger\n  Price = Rs. 500/=\n";
    cout << "2- Spicy Chicken Burger\n  Price = Rs. 550/=\n";
    cout << "3- Grilled Chicken Burger\n  Price = Rs. 560/=\n";
    cout << "4- Chicken Cheese Burger\n  Price = Rs. 600/=\n";
    cout << "5- Crispy Chicken Burger\n  Price = Rs. 620/=\n";
}

// Beef burger menu
void menu_2()
{
    cout << "1- Ultimate Angus Classic BBQ\n  Price = Rs. 1000/=\n";
    cout << "2- Ultimate Angus Mushroom Swiss\n  Price = Rs. 900/=\n";
    cout << "3- WHOPPER\n  Price = Rs. 1200/=\n";
    cout << "4- Double WHOPPER with Cheese\n  Price = Rs. 1500/=\n";
    cout << "5- Spicy Beef Burger\n  Price = Rs. 850/=\n";
}

// Egg burger menu
void menu_3()
{
    cout << "1- Burger Egg\n  Price = Rs. 450/=\n";
    cout << "2- Egg & Cheese Burger\n  Price = Rs. 480/=\n";
}

// Veggie burger menu
void menu_4()
{
    cout << "1- Classic Veggie Burger\n  Price = Rs. 400/=\n";
    cout << "2- Spicy Bean Burger\n  Price = Rs. 450/=\n";
    cout << "3- Grilled Mushroom Burger\n  Price = Rs. 500/=\n";
}

// Side dishes menu
void menu_5()
{
    cout << "1- French Fries\n  Price = Rs. 150/=\n";
    cout << "2- Onion Rings\n  Price = Rs. 200/=\n";
    cout << "3- Cheese Sticks\n  Price = Rs. 250/=\n";
    cout << "4- Chicken Nuggets\n  Price = Rs. 300/=\n";
}

// End message
void end()
{
    cout << "\n               -----Thank You For Visiting Our Shop!!-----               " << endl;
    cout << "               -----We Hope To See You Again Soon!-----               " << endl;
}

int main()
{
    welcome();
    cout << endl << endl << endl;

    cout << "       ---Let's begin the ordering process as you wish---" << endl << endl;

    char res;
    int num, g_tot = 0, s_tot1 = 0, s_tot2 = 0, s_tot3 = 0, s_tot4 = 0, s_tot5 = 0, tot1 = 0, tot2 = 0, tot3 = 0, tot4 = 0, tot5 = 0, qu, category;

    do
    {
        cout << "Do you want to order food (y/n) - ";
        cin >> res;
        cout << endl;

        if (res == 'n' || res == 'N')
        {
            break;
        }
        else if (res == 'y' || res == 'Y')
        {
            cout << "---Our food categories---" << endl << endl;
            cout << "-- 1 Chicken Burger--\n-- 2 Beef Burger--\n-- 3 Egg Burger--\n-- 4 Veggie Burger--\n-- 5 Side Dishes--\n" << endl;
            cout << "Enter the category number you want - ";
            cin >> category;

            if (category > 5 || category < 1)
            {
                cout << endl;
                cout << "--Invalid category--" << endl << endl;
            }
            else if (category == 1)
            {
                menu_1();

                cout << "Select your burger number - ";
                cin >> num;

                if (num > 5 || num < 1)
                {
                    cout << endl;
                    cout << "  --Invalid burger--" << endl << endl;
                }
                else
                {
                    cout << "Your order quantity - ";
                    cin >> qu;

                    switch (num)
                    {
                    case 1:
                        tot1 = (500 * qu);
                        break;
                    case 2:
                        tot1 = (550 * qu);
                        break;
                    case 3:
                        tot1 = (560 * qu);
                        break;
                    case 4:
                        tot1 = (600 * qu);
                        break;
                    case 5:
                        tot1 = (620 * qu);
                        break;
                    default:
                        break;
                    }

                    s_tot1 += tot1;
                }
            }
            else if (category == 2)
            {
                menu_2();

                cout << "Select your burger number - ";
                cin >> num;

                if (num > 5 || num < 1)
                {
                    cout << endl;
                    cout << "  --Invalid burger--" << endl << endl;
                }
                else
                {
                    cout << "Your order quantity - ";
                    cin >> qu;

                    switch (num)
                    {
                    case 1:
                        tot2 = (1000 * qu);
                        break;
                    case 2:
                        tot2 = (900 * qu);
                        break;
                    case 3:
                        tot2 = (1200 * qu);
                        break;
                    case 4:
                        tot2 = (1500 * qu);
                        break;
                    case 5:
                        tot2 = (850 * qu);
                        break;
                    default:
                        break;
                    }

                    s_tot2 += tot2;
                }
            }
            else if (category == 3)
            {
                menu_3();

                cout << "Select your burger number - ";
                cin >> num;

                if (num > 2 || num < 1)
                {
                    cout << endl;
                    cout << "  --Invalid burger--" << endl << endl;
                }
                else
                {
                    cout << "Your order quantity - ";
                    cin >> qu;

                    switch (num)
                    {
                    case 1:
                        tot3 = (450 * qu);
                        break;
                    case 2:
                        tot3 = (480 * qu);
                        break;
                    default:
                        break;
                    }

                    s_tot3 += tot3;
                }
            }
            else if (category == 4)
            {
                menu_4();

                cout << "Select your burger number - ";
                cin >> num;

                if (num > 3 || num < 1)
                {
                    cout << endl;
                    cout << "  --Invalid burger--" << endl << endl;
                }
                else
                {
                    cout << "Your order quantity - ";
                    cin >> qu;

                    switch (num)
                    {
                    case 1:
                        tot4 = (400 * qu);
                        break;
                    case 2:
                        tot4 = (450 * qu);
                        break;
                    case 3:
                        tot4 = (500 * qu);
                        break;
                    default:
                        break;
                    }

                    s_tot4 += tot4;
                }
            }
            else if (category == 5)
            {
                menu_5();

                cout << "Select your side dish number - ";
                cin >> num;

                if (num > 4 || num < 1)
                {
                    cout << endl;
                    cout << "  --Invalid side dish--" << endl << endl;
                }
                else
                {
                    cout << "Your order quantity - ";
                    cin >> qu;

                    switch (num)
                    {
                    case 1:
                        tot5 = (150 * qu);
                        break;
                    case 2:
                        tot5 = (200 * qu);
                        break;
                    case 3:
                        tot5 = (250 * qu);
                        break;
                    case 4:
                        tot5 = (300 * qu);
                        break;
                    default:
                        break;
                    }

                    s_tot5 += tot5;
                }
            }
        }
    } while (res == 'y' || res == 'Y');

    g_tot = s_tot1 + s_tot2 + s_tot3 + s_tot4 + s_tot5;

    cout << endl << endl;
    cout << "Your total amount is - Rs. " << g_tot << "/=" << endl << endl;

    end();
    cout << endl << endl;

    return 0;
}
