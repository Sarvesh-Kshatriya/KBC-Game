#include <iostream>
#include <stdlib.h>
using namespace std;
// Global variables
int increment = 0;
int ans1 = 0, ans2 = 0, ans3 = 0, ans4 = 0, ans5 = 0, ans6 = 0, ans7 = 0, ans8 = 0, ans9 = 0;
int ans10 = 0, ans11 = 0, ans12 = 0, ans13 = 0, ans14 = 0, ans15 = 0, ans16 = 0, ans17 = 0, ans18 = 0;
int Audience = 2, Expert = 2;

void logo(); // Logo

void Rules(); // Rules

void delay(int seconds); // For time manipulation

void Question1();  // Question number 1
void Question2();  // Question number 2
void Question3();  // Question number 3
void Question4();  // Question number 4
void Question5();  // Question number 5
void Question6();  // Question number 6
void Question7();  // Question number 7
void Question8();  // Question number 8
void Question9();  // Question number 9
void Question10(); // Question number 10
void Question11(); // Question number 11
void Question12(); // Question number 12
void Question13(); // Question number 13
void Question14(); // Question number 14
void Question15(); // Question number 15
void Question16(); // Question number 16
void Question17(); // Question number 17
void Question18(); // Question number 18

void check_ans1(int ans1);   // For checking answer number 1
void check_ans2(int ans2);   // For checking answer number 2
void check_ans3(int ans3);   // For checking answer number 3
void check_ans4(int ans4);   // For checking answer number 4
void check_ans5(int ans5);   // For checking answer number 5
void check_ans6(int ans6);   // For checking answer number 6
void check_ans7(int ans7);   // For checking answer number 7
void check_ans8(int ans8);   // For checking answer number 8
void check_ans9(int ans9);   // For checking answer number 9
void check_ans10(int ans10); // For checking answer number 10
void check_ans11(int ans11); // For checking answer number 11
void check_ans12(int ans12); // For checking answer number 12
void check_ans13(int ans13); // For checking answer number 13
void check_ans14(int ans14); // For checking answer number 14
void check_ans15(int ans15); // For checking answer number 15
void check_ans16(int ans16); // For checking answer number 16
void check_ans17(int ans17); // For checking answer number 17
void check_ans18(int ans18); // For checking answer number 18

void Lifeline();          // Lifeline
void Audience_pole();     // Lifeline number 1
void Expert_Suggestion(); // Lifeline number 2

void bank();                                                            // banking information
void verification(int pin, string ac_name, int value, long long ac_no); // verifying legal user

int main()
{
    //     logo();
    //     delay(50);
    //     Rules();
    //     delay(50);
    do
    {
        increment++;
        switch (increment)
        {
        case 1:
            cout << endl
                 << "1st question have 1,000 prize money " << endl;
            Question1();
            break;
        case 2:
            cout << endl
                 << "2nd question have 2,000 prize money " << endl;
            Question2();
            break;
        case 3:
            cout << endl
                 << "3rd question have 3,000 prize money " << endl;
            Question3();
            break;
        case 4:
            cout << endl
                 << "4th question have 5,000 prize money " << endl;
            Question4();
            break;
        case 5:
            cout << endl
                 << "5th question have 10,000 prize money " << endl;
            Question5();
            break;
        case 6:
            cout << endl
                 << "6th question have 20,000 prize money " << endl;
            Question6();
            break;
        case 7:
            cout << endl
                 << "7th question have 40,000 prize money " << endl;
            Question7();
            break;
        case 8:
            cout << endl
                 << "8th question have 80,000 prize money " << endl;
            Question8();
            break;
        case 9:
            cout << endl
                 << "9th question have 1,60,000 prize money " << endl;
            Question9();
            break;
        case 10:
            cout << endl
                 << "10th question have 3,20,000 prize money " << endl;
            Question10();
            break;
        case 11:
            cout << endl
                 << "11th question have 6,40,000 prize money " << endl;
            Question11();
            break;
        case 12:
            cout << endl
                 << "12th question have 12,50,000 prize money " << endl;
            Question12();
            break;
        case 13:
            cout << endl
                 << "13th question have 25,00,000 prize money " << endl;
            Question13();
            break;
        case 14:
            cout << endl
                 << "14th question have 50,00,000 prize money " << endl;
            Question14();
            break;
        case 15:
            cout << endl
                 << "15th question have 1Crore prize money " << endl;
            Question15();
            break;
        case 16:
            cout << endl
                 << "16th question have 3Crore prize money " << endl;
            Question16();
            break;
        case 17:
            cout << endl
                 << "17th question have 5Crore prize money " << endl;
            Question17();
            break;
        case 18:
            cout << endl
                 << "18th question have 7Crore prize money " << endl;
            Question18();
            break;
        default:
            cout << "\tThanks for playing";
            break;
        }

    } while (increment != 19);
    return 0;
}

void delay(int seconds)
{
    int time;
    int add;
    int i;
    time = seconds * 1000000;
    for (i = 0; i < time; i++)
    {
        add *= i;
        add++;
        add++;
    }
}

void logo()
{

    cout << "                                 **  **  ******     ******             \n";
    delay(50);
    cout << "                                 ** **   **   **   ***                 \n";
    delay(50);
    cout << "                                 ****    ******   ***                  \n";
    delay(50);
    cout << "                                 ** **   **   **   ***                 \n";
    delay(50);
    cout << "                                 **  **  ******     ******             \n";
    cout << "Welcome to Kon Banega Carorpati !\n";
    delay(200);
}

void Rules()
{
    cout << "\n Important Rules : " << endl;
    delay(30);
    cout << "\t1. No cheating !" << endl;
    delay(60);
    cout << "\t2. User have only 2 Lifelines(each lifeline can used twice)." << endl;
    delay(150);
    cout << "\t3. Type 101 for Lifeline access." << endl;
    delay(120);
    cout << "\t4. There are total 7 questions. " << endl;
    delay(250);
    cout << "\t5. Final prize money have 1cr amount." << endl;
    delay(350);
    cout << "\t6. Press 5 to Quite" << endl;
    delay(100);
    cout << "Now let's begin ! \n";
}

void Question1()
{
    cout << increment << ") "
         << "What is the name of polygon that has 8 sides. " << endl;
    cout << "\t1. Nonagon"
         << "\t2. Hexagon" << endl
         << "\t3. Octagon" // correct
         << "\t4. Pentagon" << endl;
    cout << "Enter ans : ";
    cin >> ans1;
    if (ans1 == 101)
    {
        Lifeline();
    }
    else
    {
        check_ans1(ans1);
    }
}

void Question2()
{
    cout << increment << ") "
         << "Name the longest river on the Earth. " << endl;
    cout << "\t1. Godavari"
         << "\t2. Nile" << endl // correct
         << "\t3. Yamuna"
         << "\t4. Amazon" << endl
         << "Enter ans : ";
    cin >> ans2;
    if (ans2 == 101)
    {
        Lifeline();
    }
    else
    {
        check_ans2(ans2);
    }
}
void Question3()
{
    cout << increment << ") "
         << "Who is the Father of our Nation. " << endl;
    cout << "\t1. Jawaharlal Nehru"
         << "\t\t2. babasaheb ambedkar" << endl
         << "\t3. Mohandas Karamchand Gandhi" // correct
         << "\t\t4. subhas chandra bose" << endl
         << "Enter ans : ";
    cin >> ans3;
    if (ans3 == 101)
    {
        Lifeline();
    }
    else
    {
        check_ans3(ans3);
    }
}
void Question4()
{
    cout << increment << ") "
         << "which country is have most population according to World Populated Review 2023. " << endl;
    cout << "\t1. Canada"
         << "\t2. China" << endl
         << "\t3. Russia"
         << "\t4. India" << endl // correct
         << "Enter ans : ";
    cin >> ans4;
    if (ans4 == 101)
    {
        Lifeline();
    }
    else
    {
        check_ans4(ans4);
    }
}

void Question5()
{
    cout << increment << ") "
         << "Which planet in our solar system is known as Red Planet. " << endl;
    cout << "\t1. Mars" // correct
         << "\t\t2. Jupiter" << endl
         << "\t3. Mercury"
         << "\t4. Venus" << endl
         << "Enter ans : ";
    cin >> ans5;
    if (ans5 == 101)
    {
        Lifeline();
    }
    else
    {
        check_ans5(ans5);
    }
}

void Question6()
{
    cout << increment << ") "
         << "Which one is the smallest Ocean in the World. " << endl;
    cout << "\t1. Indian Ocean"
         << "\t\t2. North Atlantic Ocean" << endl
         << "\t3. Arctic Ocean" // correct
         << "\t\t4. South Pacific Ocean" << endl
         << "Enter ans : ";
    cin >> ans6;
    if (ans6 == 101)
    {
        Lifeline();
    }
    else
    {
        check_ans6(ans6);
    }
}

void Question7()
{
    cout << increment << ") "
         << "Who painted the MonaLisa painting." << endl;
    cout << "\t1. Rembrandt"
         << "\t2. Leonardo da Vinci" << endl // correct
         << "\t3. Pablo Picasso"
         << "\t4. Vermeer" << endl
         << "Enter ans : ";
    cin >> ans7;
    if (ans7 == 101)
    {
        Lifeline();
    }
    else
    {
        check_ans7(ans7);
    }
}
void Question8()
{
    cout << increment << ") "
         << "What is the name of the currency used in Japan. " << endl; // Question
    cout << "\t1. yen"                                                  // correct
         << "\t2. won" << endl
         << "\t3. yuan"
         << "\t4. ruble" << endl;
    cout << "Enter ans : ";
    cin >> ans8;
    if (ans8 == 101)
    {
        Lifeline();
    }
    else
    {
        check_ans8(ans8);
    }
}
void Question9()
{
    cout << increment << ") "
         << "Who is the present President of India " << endl; // Question
    cout << "\t1. Pranab Mukherjee"
         << "\t2. Ram Nath Kovind" << endl // correct
         << "\t3. APJ Abdul Kalam"
         << "\t4. Pratibha Patil" << endl;
    cout << "Enter ans : ";
    cin >> ans9;
    if (ans9 == 101)
    {
        Lifeline();
    }
    else
    {
        check_ans9(ans9);
    }
}
void Question10()
{
    cout << increment << ") "
         << "What is the highest civilian award in India. " << endl; // Question
    cout << "\t1. Padma Shri"
         << "\t2. Padma Vibhushan" << endl
         << "\t3. Padma Bhushan"
         << "\t4. Bharat Ratna" << endl; // correct
    cout << "Enter ans : ";
    cin >> ans10;
    if (ans10 == 101)
    {
        Lifeline();
    }
    else
    {
        check_ans10(ans10);
    }
}
void Question11()
{
    cout << increment << ") "
         << "Which programming language is used to build the Android operating system." << endl; // Question
    cout << "\t1. Java"                                                                          // correct
         << "\t2. Python" << endl
         << "\t3. C++"
         << "\t4. Ruby" << endl;
    cout << "Enter ans : ";
    cin >> ans11;
    if (ans11 == 101)
    {
        Lifeline();
    }
    else
    {
        check_ans11(ans11);
    }
}
void Question12()
{
    cout << increment << ") "
         << "What is the name of the company that created the programming language Python " << endl; // Question
    cout << "\t1. Microsoft"
         << "\t2. Sun Microsystems" << endl
         << "\t3. Guido van Rossum" // correct
         << "\t4. Google" << endl;
    cout << "Enter ans : ";
    cin >> ans12;
    if (ans12 == 101)
    {
        Lifeline();
    }
    else
    {
        check_ans12(ans12);
    }
}
void Question13()
{
    cout << increment << ") "
         << " who is the CEO of the Google " << endl; // Question
    cout << "\t1. Sarvesh Kshatriya"
         << "\t2. Sundar Pichai" << endl // correct
         << "\t3. Bill Gates"
         << "\t4. Jeff Bezoz" << endl;
    cout << "Enter ans : ";
    cin >> ans13;
    if (ans13 == 101)
    {
        Lifeline();
    }
    else
    {
        check_ans13(ans13);
    }
}
void Question14()
{
    cout << increment << ") "
         << "Who is known as the father of computer programming " << endl; // Question
    cout << "\t1. Charles Babbage"
         << "\t2. Ada Lovelace" << endl // correct
         << "\t3. Bill Gates "
         << "\t4. Steve Jobs" << endl;
    cout << "Enter ans : ";
    cin >> ans14;
    if (ans14 == 101)
    {
        Lifeline();
    }
    else
    {
        check_ans14(ans14);
    }
}
void Question15()
{
    cout << increment << ") "
         << "Which operating system was first developed by Microsoft " << endl; // Question
    cout << "\t1. Windows"                                                      // correct
         << "\t2. macOS " << endl
         << "\t3. Linux "
         << "\t4. Solaris" << endl;
    cout << "Enter ans : ";
    cin >> ans15;
    if (ans15 == 101)
    {
        Lifeline();
    }
    else
    {
        check_ans15(ans15);
    }
}
void Question16()
{
    cout << increment << ") "
         << "What is the process of converting high-level programming code into machine-readable code " << endl; // Question
    cout << "\t1. Compiling"                                                                                     // correct
         << "\t2. Decompiling" << endl
         << "\t3. Debugging"
         << "\t4. Interpreting" << endl;
    cout << "Enter ans : ";
    cin >> ans16;
    if (ans16 == 101)
    {
        Lifeline();
    }
    else
    {
        check_ans16(ans16);
    }
}
void Question17()
{
    cout << increment << ") "
         << "What is the name of the first man to walk on the moon " << endl; // Question
    cout << "\t1. Kartik Kanade"
         << "\t2. Yuri Gagarin" << endl
         << "\t3. Neil Armstrong" // correct
         << "\t4. Jim Lovell" << endl;
    cout << "Enter ans : ";
    cin >> ans17;
    if (ans17 == 101)
    {
        Lifeline();
    }
    else
    {
        check_ans17(ans17);
    }
}
void Question18()
{
    cout << increment << ") "
         << "What is the name of the nearest galaxy to our Milky Way galaxy" << endl; // Question
    cout << "\t1. Large Magellanic Cloud"
         << "\t2. Triangulum" << endl
         << "\t3. Whirlpool"
         << "\t4. Andromeda" << endl; // correct
    cout << "Enter ans : ";
    cin >> ans18;
    if (ans18 == 101)
    {
        Lifeline();
    }
    else
    {
        check_ans18(ans18);
    }
}

// checking answers

void check_ans1(int ans1)
{
    do
    {
        if (ans1 == 3)
        {
            cout << "Correct answer !" << endl;
            increment++;
            delay(50);
            cout << "Octagon : " << endl
                 << "\tAn octagon is a polygon having eight sides and eight angles." << endl
                 << "\tIt has eight vertices and eight edges that are joined end to end to form a close geometric shape" << endl;
            increment++;
            break;
        }
        else if (ans1 == 1 || ans1 == 2 || ans1 == 4)
        {
            cout << "\tOops wrong answer Game Over !" << endl;
            exit(0);
        }
        else if (ans1 <= 0 || ans1 >= 6)
        {
            cout << "Enter valid option number " << endl
                 << endl;
            Question1();
            break;
        }
        else
        {
            cout << "Thanks for playing this game user exited successfully !";
            increment--;
            bank();
            exit(0); // if ans1 is 5 then program will get closed
        }
    } while (ans1 != 1 || ans1 != 2 || ans1 != 3 || ans1 != 4);

    cout << endl;
}
void check_ans2(int ans2)
{
    do
    {
        if (ans2 == 2)
        {
            cout << "Correct answer !" << endl;
            delay(50);
            cout << "Nile : " << endl
                 << "\tThe Blue Nile is a river originating at Lake Tana in Ethiopia." << endl
                 << "\tIt travels for approximately 1,450 km (900 mi) through Ethiopia and Sudan" << endl;
            increment++;
            break;
        }
        else if (ans2 == 1 || ans2 == 3 || ans2 == 4)
        {
            cout << "\tOops wrong answer Game Over !" << endl;
            exit(0);
        }
        else if (ans2 <= 0 || ans2 >= 6)
        {
            cout << "Enter valid option number " << endl
                 << endl;
            Question2();
            break;
        }
        else
        {
            cout << "Thanks for playing this game user exited successfully !";
            increment--;
            bank();
            exit(0); // if ans2 is 5 then program will will get closed
        }
    } while (ans2 != 1 || ans2 != 2 || ans2 != 3 || ans2 != 4);
}
void check_ans3(int ans3)
{
    do
    {
        if (ans3 == 3)
        {
            cout << "Correct answer !" << endl;
            delay(50);
            cout << " Mohandas Karamchand Gandhi : " << endl
                 << "\tMohandas Karamchand Gandhi (1869-1948) was an Indian independence activist who was" << endl
                 << "\tthe leader of the Indian National Congress and played a key role in India's struggle for " << endl
                 << "\tindependence from British rule. He advocated for non-violent civil disobedience " << endl
                 << "\tas a means of social and political change. He is often referred to as 'Mahatma Gandhi,' meaning 'Great Soul.'" << endl
                 << "\tHe was assassinated in 1948." << endl;
            increment++;
            break;
        }
        else if (ans3 == 1 || ans3 == 2 || ans3 == 4)
        {
            cout << "\tOops wrong answer Game Over !" << endl;
            exit(0);
        }
        else if (ans3 <= 0 || ans3 >= 6)
        {
            cout << "Enter valid option number " << endl
                 << endl;
            Question3();
            break;
        }
        else
        {
            cout << "Thanks for playing this game user exited successfully !";
            increment--;
            bank();
            exit(0); // if ans3 is 5 then program will will get closed
        }

    } while (ans3 != 1 || ans3 != 2 || ans3 != 3 || ans3 != 4);
}
void check_ans4(int ans4)
{
    do
    {
        if (ans4 == 4)
        {
            cout << "Correct answer !" << endl;
            delay(50);
            cout << "India : " << endl
                 << "\tIndia is a country in South Asia, bordered by Pakistan to the west, China and Nepal " << endl
                 << "\tto the north, Bhutan to the northeast, and Bangladesh and Myanmar to the east. " << endl
                 << "\tIt is the seventh largest country by area and the 2nd most populous country, " << endl
                 << "\twith over 1.3 billion people." << endl;
            increment++;
            break;
        }
        else if (ans4 == 1 || ans4 == 2 || ans4 == 3)
        {
            cout << "\tOops wrong answer Game Over !" << endl;
            exit(0);
        }
        else if (ans4 <= 0 || ans4 >= 6)
        {
            cout << "Enter valid option number " << endl
                 << endl;
            Question4();
            break;
        }
        else
        {
            cout << "Thanks for playing this game user exited successfully !";
            increment--;
            bank();
            exit(0); // if ans4 is 5 then program will will get closed
        }

    } while (ans4 != 1 || ans4 != 2 || ans4 != 3 || ans4 != 4);
}
void check_ans5(int ans5)
{
    do
    {
        if (ans5 == 1)
        {
            cout << "Correct answer !" << endl;
            delay(50);
            cout << "Mars : " << endl
                 << "\tMars is the fourth planet from the Sun in our solar system. It has a reddish " << endl
                 << "\tappearance due to iron oxide (rust) on its surface. Mars has a thin atmosphere " << endl
                 << "\tand has polar ice caps made of frozen carbon dioxide and water." << endl;
            increment++;
            break;
        }
        else if (ans5 == 3 || ans5 == 2 || ans5 == 4)
        {
            cout << "\tOops wrong answer Game Over !" << endl;
            exit(0);
        }
        else if (ans5 <= 0 || ans5 >= 6)
        {
            cout << "Enter valid option number " << endl
                 << endl;
            Question5();
            break;
        }
        else
        {
            cout << "Thanks for playing this game user exited successfully !";
            increment--;
            bank();
            exit(0); // if ans5 is 5 then program will will get closed
        }

    } while (ans5 != 1 || ans5 != 2 || ans5 != 3 || ans5 != 4);
}
void check_ans6(int ans6)
{
    do
    {
        if (ans6 == 3)
        {
            cout << "Correct answer !" << endl;
            delay(50);
            cout << "Arctic Ocean : " << endl
                 << "\tThe Arctic Ocean is the smallest and shallowest of the world's five oceans. " << endl
                 << "\tIt is located around the Arctic region, surrounding the North Pole and is mostly covered by sea ice. " << endl
                 << "\tThe Arctic Ocean is bordered by the continents of Europe, Asia, and North America. " << endl;
            increment++;
            break;
        }
        else if (ans1 == 1 || ans1 == 2 || ans1 == 4)
        {
            cout << "\tOops wrong answer Game Over !" << endl;
            exit(0);
        }
        else if (ans6 <= 0 || ans6 >= 6)
        {
            cout << "Enter valid option number " << endl;
            Question6();
            break;
        }
        else
        {
            cout << "Thanks for playing this game user exited successfully !";
            increment--;
            bank();
            exit(0); // if ans6 is 5 then program will will get closed
        }

    } while (ans1 != 1 || ans1 != 2 || ans1 != 3 || ans1 != 4);
}
void check_ans7(int ans7)
{
    do
    {
        if (ans7 == 2)
        {
            cout << "Correct answer !" << endl;
            delay(50);
            cout << "Leonardo da Vinci : " << endl
                 << "Leonardo da Vinci (1452-1519) was an Italian Renaissance artist, inventor, and polymath." << endl
                 << "\t He is widely considered one of the greatest artists of all time and is best known " << endl
                 << "\tfor his paintings, including the 'Mona Lisa' and 'The Last Supper'. " << endl;
            increment++;
            break;
        }
        else if (ans7 == 1 || ans7 == 3 || ans7 == 4)
        {
            cout << "\tOops wrong answer Game Over !" << endl;
            exit(0);
        }
        else if (ans7 <= 0 || ans7 >= 6)
        {
            cout << "Enter valid option number " << endl
                 << endl;
            Question7();
            break;
        }
        else
        {
            cout << "Thanks for playing this game user exited successfully !";
            increment--;
            bank();
            exit(0); // if ans7 is 5 then program will will get closed
        }

    } while (ans7 != 1 || ans7 != 2 || ans7 != 3 || ans7 != 4);
}

void check_ans8(int ans8)
{
    do
    {
        if (ans8 == 1)
        {
            cout << "Correct answer !" << endl;
            delay(50);
            cout << "Yen : " << endl
                 << "\tThe yen is the currency of Japan." << endl
                 << "\tIt is symbolized by the letter '¥' and is abbreviated as JPY when traded internationally" << endl;
            increment++;
            break;
        }
        else if (ans8 == 2 || ans8 == 3 || ans8 == 4)
        {
            cout << "\tOops wrong answer Game Over !" << endl;
            exit(0);
        }
        else if (ans8 <= 0 || ans8 >= 6)
        {
            cout << "Enter valid option number " << endl
                 << endl;
            Question8();
            break;
        }
        else
        {
            cout << "Thanks for playing this game user exited successfully !";
            increment--;
            bank();
            exit(0); // if ans8 is 5 then program will get closed
        }
    } while (ans8 != 1 || ans8 != 2 || ans8 != 3 || ans8 != 4);
    cout << endl;
}
void check_ans9(int ans9)
{
    do
    {
        if (ans9 == 2)
        {
            cout << "Correct answer !" << endl;
            delay(50);
            cout << "Ram Nath Kovind : " << endl
                 << "\tRam Nath Kovind is an Indian politician and the 14th President of India, serving in office since 25 July 2017." << endl
                 << "\t He was born on October 1, 1945, in Paraukh village in the state of Uttar Pradesh, India. " << endl;
            increment++;
            break;
        }
        else if (ans9 == 1 || ans9 == 3 || ans9 == 4)
        {
            cout << "\tOops wrong answer Game Over !" << endl;
            exit(0);
        }
        else if (ans9 <= 0 || ans9 >= 6)
        {
            cout << "Enter valid option number " << endl
                 << endl;
            Question9();
            break;
        }
        else
        {
            cout << "Thanks for playing this game user exited successfully !";
            increment--;
            bank();
            exit(0); // if ans9 is 5 then program will get closed
        }
    } while (ans9 != 1 || ans9 != 2 || ans9 != 3 || ans9 != 4);

    cout << endl;
}
void check_ans10(int ans10)
{
    do
    {
        if (ans10 == 4)
        {
            cout << "Correct answer !" << endl;
            delay(50);
            cout << "Bharat Ratna : " << endl
                 << "\tBharat Ratna is the highest civilian award in India. It was instituted in the year 1954 and is awarded to individuals " << endl
                 << "\twho have made exceptional contributions in fields such as arts, literature, science, and public service." << endl;
            increment++;
            break;
        }
        else if (ans10 == 1 || ans10 == 2 || ans10 == 3)
        {
            cout << "\tOops wrong answer Game Over !" << endl;
            exit(0);
        }
        else if (ans10 <= 0 || ans10 >= 6)
        {
            cout << "Enter valid option number " << endl
                 << endl;
            Question10();
            break;
        }
        else
        {
            cout << "Thanks for playing this game user exited successfully !";
            increment--;
            bank();
            exit(0); // if ans10 is 5 then program will get closed
        }
    } while (ans10 != 1 || ans10 != 2 || ans10 != 3 || ans10 != 4);

    cout << endl;
}
void check_ans11(int ans11)
{
    do
    {
        if (ans11 == 1)
        {
            cout << "Correct answer !" << endl;
            delay(50);
            cout << "Java : " << endl
                 << "\tJava was created by James Gosling, Mike Sheridan, and Patrick Naughton at Sun Microsystems in 1991.  " << endl
                 << "\tIt was initially designed to be a platform-independent programming language for consumer electronics" << endl;
            increment++;
            break;
        }
        else if (ans11 == 2 || ans11 == 3 || ans11 == 4)
        {
            cout << "\tOops wrong answer Game Over !" << endl;
            exit(0);
        }
        else if (ans11 <= 0 || ans11 >= 6)
        {
            cout << "Enter valid option number " << endl
                 << endl;
            Question11();
            break;
        }
        else
        {
            cout << "Thanks for playing this game user exited successfully !";
            increment--;
            bank();
            exit(0); // if ans11 is 5 then program will get closed
        }
    } while (ans11 != 1 || ans11 != 2 || ans11 != 3 || ans11 != 4);

    cout << endl;
}
void check_ans12(int ans12)
{
    do
    {
        if (ans12 == 3)
        {
            cout << "Correct answer !" << endl;
            delay(50);
            cout << "Guido van Rossum : " << endl
                 << "\tGuido van Rossum is a Dutch computer programmer and the creator of the Python programming language. " << endl
                 << "\tHe started working on Python in 1989 and released the first version of the language in 1991." << endl;
            increment++;
            break;
        }
        else if (ans12 == 1 || ans12 == 2 || ans12 == 4)
        {
            cout << "\tOops wrong answer Game Over !" << endl;
            exit(0);
        }
        else if (ans12 <= 0 || ans12 >= 6)
        {
            cout << "Enter valid option number " << endl
                 << endl;
            Question12();
            break;
        }
        else
        {
            cout << "Thanks for playing this game user exited successfully !";
            increment--;
            bank();
            exit(0); // if ans12 is 5 then program will get closed
        }
    } while (ans12 != 1 || ans12 != 2 || ans12 != 3 || ans12 != 4);

    cout << endl;
}

void check_ans13(int ans13)
{
    do
    {
        if (ans13 == 2)
        {
            cout << "Correct answer !" << endl;
            delay(50);
            cout << "Sundar Pichai : " << endl
                 << "\tSundar Pichai is an Indian-American business executive. He is the CEO of Alphabet Inc., the parent company of Google." << endl
                 << "\t Pichai joined Google in 2004 as a product manager and has held various leadership positions within the company, " << endl
                 << "\tincluding serving as the CEO of Google from 2015 to 2019" << endl;
            increment++;
            break;
        }
        else if (ans13 == 1 || ans13 == 3 || ans13 == 4)
        {
            cout << "\tOops wrong answer Game Over !" << endl;
            exit(0);
        }
        else if (ans13 <= 0 || ans13 >= 6)
        {
            cout << "Enter valid option number " << endl
                 << endl;
            Question13();
            break;
        }
        else
        {
            cout << "Thanks for playing this game user exited successfully !";
            increment--;
            bank();
            exit(0); // if ans13 is 5 then program will get closed
        }
    } while (ans13 != 1 || ans13 != 2 || ans13 != 3 || ans13 != 4);

    cout << endl;
}
void check_ans14(int ans14)
{
    do
    {
        if (ans14 == 3)
        {
            cout << "Correct answer !" << endl;
            delay(50);
            cout << "Ada Lovelace  : " << endl
                 << "\tAda Lovelace (1815-1852) was an English mathematician and writer who is widely considered to be the world's " << endl
                 << "\tfirst computer programmer. She is best known for her work on Charles Babbage's Analytical Engine, a mechanical " << endl
                 << "\tgeneral-purpose computer that was designed in the mid-1800s" << endl;
            increment++;
            break;
        }
        else if (ans14 == 1 || ans14 == 2 || ans14 == 4)
        {
            cout << "\tOops wrong answer Game Over !" << endl;
            exit(0);
        }
        else if (ans14 <= 0 || ans14 >= 6)
        {
            cout << "Enter valid option number " << endl
                 << endl;
            Question14();
            break;
        }
        else
        {
            cout << "Thanks for playing this game user exited successfully !";
            increment--;
            bank();
            exit(0); // if ans14 is 5 then program will get closed
        }
    } while (ans14 != 1 || ans14 != 2 || ans14 != 3 || ans14 != 4);

    cout << endl;
}
void check_ans15(int ans15)
{
    do
    {
        if (ans15 == 3)
        {
            cout << "Correct answer !" << endl;
            delay(50);
            cout << "Windows : " << endl
                 << "\tWindows is a series of operating systems developed by Microsoft Corporation. It is a graphical operating  " << endl
                 << "\tsystem that runs on personal computers, laptops, tablets, and servers" << endl;
            increment++;
            break;
        }
        else if (ans15 == 1 || ans15 == 2 || ans15 == 4)
        {
            cout << "\tOops wrong answer Game Over !" << endl;
            exit(0);
        }
        else if (ans15 <= 0 || ans15 >= 6)
        {
            cout << "Enter valid option number " << endl
                 << endl;
            Question15();
            break;
        }
        else
        {
            cout << "Thanks for playing this game user exited successfully !";
            increment--;
            bank();
            exit(0); // if ans15 is 5 then program will get closed
        }
    } while (ans15 != 1 || ans15 != 2 || ans15 != 3 || ans15 != 4);

    cout << endl;
}
void check_ans16(int ans16)
{
    do
    {
        if (ans16 == 1)
        {
            cout << "Correct answer !" << endl;
            delay(50);
            cout << "Compiling : " << endl
                 << "\tCompiling is the process of taking source code written in a high-level programming language and converting it into" << endl
                 << "\tmachine code, which is executed by a computer. The compiled code is typically optimized for the specific computer architecture " << endl
                 << "\tit will run on and can be executed much faster than the original source code." << endl;
            increment++;
            break;
        }
        else if (ans16 == 2 || ans16 == 3 || ans16 == 4)
        {
            cout << "\tOops wrong answer Game Over !" << endl;
            exit(0);
        }
        else if (ans16 <= 0 || ans16 >= 6)
        {
            cout << "Enter valid option number " << endl
                 << endl;
            Question16();
            break;
        }
        else
        {
            cout << "Thanks for playing this game user exited successfully !";
            increment--;
            bank();
            exit(0); // if ans16 is 5 then program will get closed
        }
    } while (ans16 != 1 || ans16 != 2 || ans16 != 3 || ans16 != 4);

    cout << endl;
}
void check_ans17(int ans17)
{
    do
    {
        if (ans17 == 3)
        {
            cout << "Correct answer !" << endl;
            delay(50);
            cout << "Neil Armstrong : " << endl
                 << "\tNeil Armstrong (1930-2012) was an American astronaut and the first person to walk on the Moon. He was the commander " << endl
                 << "\t of the Apollo 11 mission, which landed on the Moon on July 20, 1969." << endl;
            increment++;
            break;
        }
        else if (ans17 == 1 || ans17 == 2 || ans17 == 4)
        {
            cout << "\tOops wrong answer Game Over !" << endl;
            exit(0);
        }
        else if (ans17 <= 0 || ans17 >= 6)
        {
            cout << "Enter valid option number " << endl
                 << endl;
            Question17();
            break;
        }
        else
        {
            cout << "Thanks for playing this game user exited successfully !";
            increment--;
            bank();
            exit(0); // if ans17 is 5 then program will get closed
        }
    } while (ans17 != 1 || ans17 != 2 || ans17 != 3 || ans17 != 4);

    cout << endl;
}

void check_ans18(int ans18)
{
    do
    {
        if (ans18 == 4)
        {
            cout << "Correct answer !" << endl;
            delay(50);
            cout << "Andromeda galaxy : " << endl
                 << "\tThe Andromeda galaxy is a spiral galaxy located approximately 2.5 million light-years away from our Milky Way galaxy." << endl
                 << "\tIt is the closest galaxy to our own and is one of the brightest objects in the night sky, visible to the naked eye " << endl
                 << "\tas a fuzzy patch " << endl;
            bank();
            increment++;
            break;
        }
        else if (ans18 == 1 || ans18 == 2 || ans18 == 3)
        {
            cout << "\tOops wrong answer Game Over !" << endl;
            exit(0);
        }
        else if (ans18 <= 0 || ans18 >= 6)
        {
            cout << "Enter valid option number " << endl
                 << endl;
            Question18();
            break;
        }
        else
        {
            cout << "Thanks for playing this game user exited successfully !";
            increment--;
            bank();
            exit(0); // if ans18 is 5 then program will get closed
        }
    } while (ans18 != 1 || ans18 != 2 || ans18 != 3 || ans18 != 4);

    cout << endl;
}
void Lifeline()
{
    int LF = 0;
    cout << "So choose the lifeline as follows " << endl
         << "\t1. Audience pole\t2.Expert Suggestion " << endl
         << "Enter Lifeline number : ";
    cin >> LF;
    if (LF == 1)
    {
        if (Audience == 1 || Audience == 2)
        {
            Audience_pole();
            Audience--;
        }
        else if (Audience == 0)
        {
            cout << "Lifeline is used previously" << endl;
            increment--;
        }
        else
        {
            cout << "Some error has been occur" << endl;
            exit(0);
        }
    }
    else if (LF == 2)
    {

        if (Expert == 1 || Expert == 2)
        {
            Expert_Suggestion();
            --Expert;
        }
        else if (Expert == 0)
        {
            cout << "Lifeline is used previously" << endl;
            increment--;
        }
        else
        {
            cout << "Some error has been occur" << endl;
            exit(0);
        }
    }
}
void Audience_pole()
{
    switch (increment)
    {
    case 1:
        cout << "\nAccording to Audience the answer of the question number " << increment << " as follows : " << endl;
        cout << "Votes : " << endl
             << "\t1. ******" << endl
             << "\t2. ****" << endl
             << "\t3. *****************" << endl
             << "\t4. *****" << endl;
        Question1();
        break;
    case 2:
        cout << "\nAccording to Audience the answer of the question number " << increment << " as follows : " << endl;
        cout << "Votes : " << endl
             << "\t1. ****" << endl
             << "\t2. *****************" << endl
             << "\t3. **" << endl
             << "\t4. *****" << endl;
        Question2();
        break;
    case 3:
        cout << "\nAccording to Audience the answer of the question number " << increment << " as follows : " << endl;
        cout << "Votes : " << endl
             << "\t1. ***" << endl
             << "\t2. *******" << endl
             << "\t3. *****************" << endl
             << "\t4. ***" << endl;
        Question3();
        break;
    case 4:
        cout << "\nAccording to Audience the answer of the question number " << increment << " as follows : " << endl;
        cout << "Votes : " << endl
             << "\t1. *****" << endl
             << "\t2. *******" << endl
             << "\t3. ***" << endl
             << "\t4. *****************" << endl;
        Question4();
        break;
    case 5:
        cout << "\nAccording to Audience the answer of the question number " << increment << " as follows : " << endl;
        cout << "Votes : " << endl
             << "\t1. **********************" << endl
             << "\t2. ***" << endl
             << "\t3. *******" << endl
             << "\t4. *" << endl;
        Question5();
        break;
    case 6:
        cout << "\nAccording to Audience the answer of the question number " << increment << " as follows : " << endl;
        cout << "Votes : " << endl
             << "\t1. ****" << endl
             << "\t2. **" << endl
             << "\t3. ********************" << endl
             << "\t4. **********" << endl;
        Question6();
        break;
    case 7:
        cout << "\nAccording to Audience the answer of the question number " << increment << " as follows : " << endl;
        cout << "Votes : " << endl
             << "\t1. *****" << endl
             << "\t2. ******************" << endl
             << "\t3. **" << endl
             << "\t4. *******" << endl;
        Question7();
        break;
    case 8:
        cout << "\nAccording to Audience the answer of the question number " << increment << " as follows : " << endl;
        cout << "Votes : " << endl
             << "\t1. ******************" << endl
             << "\t2. ****" << endl
             << "\t3. **" << endl
             << "\t4. ***" << endl;
        Question8();
        break;
    case 9:
        cout << "\nAccording to Audience the answer of the question number " << increment << " as follows : " << endl;
        cout << "Votes : " << endl
             << "\t1. ******" << endl
             << "\t2. *******************" << endl
             << "\t3. **" << endl
             << "\t4. *****" << endl;
        Question9();
        break;
    case 10:
        cout << "\nAccording to Audience the answer of the question number " << increment << " as follows : " << endl;
        cout << "Votes : " << endl
             << "\t1. ***" << endl
             << "\t2. *******" << endl
             << "\t3. ****" << endl
             << "\t4. **********************" << endl;
        Question10();
        break;
    case 11:
        cout << "\nAccording to Audience the answer of the question number " << increment << " as follows : " << endl;
        cout << "Votes : " << endl
             << "\t1. ******************" << endl
             << "\t2. **" << endl
             << "\t3. ******" << endl
             << "\t4. ****" << endl;
        Question11();
        break;
    case 12:
        cout << "\nAccording to Audience the answer of the question number " << increment << " as follows : " << endl;
        cout << "Votes : " << endl
             << "\t1. ******" << endl
             << "\t2. ***" << endl
             << "\t3. ****************" << endl
             << "\t4. *****" << endl;
        Question12();
        break;
    case 13:
        cout << "\nAccording to Audience the answer of the question number " << increment << " as follows : " << endl;
        cout << "Votes : " << endl
             << "\t1. ****" << endl
             << "\t2. *****************" << endl
             << "\t3. ***" << endl
             << "\t4. *****" << endl;
        Question13();
        break;
    case 14:
        cout << "\nAccording to Audience the answer of the question number " << increment << " as follows : " << endl;
        cout << "Votes : " << endl
             << "\t1. ******" << endl
             << "\t2. ******************" << endl
             << "\t3. **" << endl
             << "\t4. ****" << endl;
        Question14();
        break;
    case 15:
        cout << "\nAccording to Audience the answer of the question number " << increment << " as follows : " << endl;
        cout << "Votes : " << endl
             << "\t1. *******************" << endl
             << "\t2. *********" << endl
             << "\t3. *****" << endl
             << "\t4. ***" << endl;
        Question15();
        break;
    case 16:
        cout << "\nAccording to Audience the answer of the question number " << increment << " as follows : " << endl;
        cout << "Votes : " << endl
             << "\t1. *******************" << endl
             << "\t2. *****" << endl
             << "\t3. *********" << endl
             << "\t4. ***" << endl;
        break;
    case 17:
        cout << "\nAccording to Audience the answer of the question number " << increment << " as follows : " << endl;
        cout << "Votes : " << endl
             << "\t1. ******" << endl
             << "\t2. ***" << endl
             << "\t3. **********************" << endl
             << "\t4. *****" << endl;
        Question17();
        break;
    case 18:
        cout << "\nAccording to Audience the answer of the question number " << increment << " as follows : " << endl;
        cout << "Votes : " << endl
             << "\t1. *" << endl
             << "\t2. ******" << endl
             << "\t3. ****" << endl
             << "\t4. *************************" << endl;
        Question18();
        break;

    default:
        cout << "Unfortunately some error has been ocurred" << endl;
        break;
    }
}
void Expert_Suggestion()
{
    int q_no;
    string exp;
    cout << "Enter your Expert name : ";
    cin >> exp;
    cout << endl
         << "Calling " << exp;
    delay(30);
    cout << " .";
    delay(30);
    cout << " .";
    delay(30);
    cout << " .";
    delay(150);
    cout << endl
         << "Calling " << exp;
    delay(30);
    cout << " .";
    delay(30);
    cout << " .";
    delay(30);
    cout << " ." << endl;
    delay(60);
    cout << "Hey " << exp << " is here tell me your question number !" << endl;
    cout << "Enter question number : ";
    cin >> q_no;
    if (q_no <= 0 || q_no >= 19)
    {
        cout << "Invalid question number ";
    }
    else
    {
        switch (q_no)
        {
        case 1:
            cout << "\tSo according to me the Octagon is a polygon that has 8 sides " << endl
                 << "\tso the answer is option number '3'" << endl;
            Question1();
            break;
        case 2:
            cout << "\tSo according to me the Nile is a longest river in the world " << endl
                 << "\tHaving length 6,650 kilometers ,which is Located in the Africa" << endl
                 << "\tso the answer is option number 2'" << endl;
            Question2();
            break;
        case 3:
            cout << "\tSo according to me the Father of our nation is Mohandas Karamchand Gandhi" << endl
                 << "\tso the answer is option number '3'" << endl;
            Question3();
            break;
        case 4:
            cout << "\tSo according to me the India is most populated country according World Populated Review 2023" << endl
                 << "\tso the answer is option number '4'" << endl;
            Question4();
            break;
        case 5:
            cout << "\tSo according to me Planet mars is known as red planet" << endl
                 << "\tso the answer is option number '1'" << endl;
            Question5();
            break;
        case 6:
            cout << "\tSo according to me the Arctic is the smallest ocean in the world " << endl
                 << "\tso the answer is option number '3'" << endl;

            Question6();
            break;
        case 7:
            cout << "\tSo according to me the Leonardo da Vinci is painted MonaLisa painting " << endl
                 << "\tso the answer is option number '2'" << endl;
            Question7();
            break;
        case 8:
            cout << "\tSo according to me the currency of Japan country is yen" << endl
                 << "\tso the answer is option number '1'" << endl;
            Question8();
            break;
        case 9:
            cout << "\tSo according to me the Ram Nath Kovind is present President of India " << endl
                 << "\tso the answer is option number '2'" << endl;
            Question9();
            break;
        case 10:
            cout << "\tSo according to me the Bharat Ratna is highest civilian award in India." << endl
                 << "\tso the answer is option number '4'" << endl;
            Question10();
            break;
        case 11:
            cout << "\tSo according to me the Java is used to build the Android operating system." << endl
                 << "\tso the answer is option number '1'" << endl;
            Question11();
            break;
        case 12:
            cout << "\tSo according to me the Guido van Rossum is the creator of the Python" << endl
                 << "\tso the answer is option number '3'" << endl;
            Question12();
            break;
        case 13:
            cout << "\tSo according to me Sundar Pichai is the CEO of the Google" << endl
                 << "\tso the answer is option number '2'" << endl;
            Question13();
            break;
        case 14:
            cout << "\tSo according to me. Ada Lovelace is know as the father of computer programming " << endl
                 << "\tso the answer is option number '2'" << endl;
            Question14();
            break;
        case 15:
            cout << "\tSo according to me the Windows operating system was first developed by Microsoft " << endl
                 << "\tso the answer is option number '1'" << endl;
            Question15();
            break;
        case 16:
            cout << "\tSo according to me Compiling is the process of converting high-level programming code into machine-readable code" << endl
                 << "\tso the answer is option number '1'" << endl;
            Question16();
            break;
        case 17:
            cout << "\tSo according to me  Neil Armstrong is the name of the first man to walk on the moon" << endl
                 << "\tso the answer is option number '3'" << endl;
            Question17();
            break;
        case 18:
            cout << "\tSo according to me Andromeda is the name of the nearest galaxy to our Milky Way galaxy" << endl
                 << "\tso the answer is option number '4'" << endl;
            Question18();
            break;
        default:
            cout << "Unfortunately some error has been ocurred" << endl;
            break;
        }
    }
}
void bank()
{
    if (increment == 0)
    {
        cout << endl
             << "User lose at level 0 that means there is no prize money ";
    }
    else
    {
        string ac_name;
        long long ac_no = 0, value;
        int choice, pin = 0;
        int check;
        cout << endl
             << "To transfer win money fill the following banking information : " << endl;
        cout << "\tEnter account holder name : ";
        cin >> ac_name;
        cout << "\tEnter account number : ";
        cin >> ac_no;
        cout << "Enter pin : ";
        cin >> pin;
        cout << "Enter money presented in the account : ";
        cin >> value;
        cout << endl
             << "Processing";
        delay(40);
        cout << " .";
        delay(40);
        cout << " .";
        delay(40);
        cout << " .";
        cout << endl
             << "Processing";
        delay(40);
        cout << " .";
        delay(40);
        cout << " .";
        delay(40);
        cout << " .";
        delay(70);
        cout << endl
             << "Money successfully transferred " << endl;
        cout << "Enter 1  to check account status or 0 to Quit show " << endl
             << "Enter choice : ";
        cin >> choice;
        switch (choice)
        {
        case 0:
            exit(0);
            break;
        case 1:
        {
            switch (increment)
            {
            case 1:
                verification(pin, ac_name, value, ac_no);
                break;
            case 2:
                verification(pin, ac_name, value, ac_no);
                break;
            case 3:
                verification(pin, ac_name, value, ac_no);
                break;
            case 4:
                verification(pin, ac_name, value, ac_no);
                break;
            case 5:
                verification(pin, ac_name, value, ac_no);
                break;
            case 6:
                verification(pin, ac_name, value, ac_no);
                break;
            case 7:
                verification(pin, ac_name, value, ac_no);
                break;
            case 8:
                verification(pin, ac_name, value, ac_no);
                break;
            case 9:
                verification(pin, ac_name, value, ac_no);
                break;
            case 10:
                verification(pin, ac_name, value, ac_no);
                break;
            case 11:
                verification(pin, ac_name, value, ac_no);
                break;
            case 12:
                verification(pin, ac_name, value, ac_no);
                break;
            case 13:
                verification(pin, ac_name, value, ac_no);
                break;
            case 14:
                verification(pin, ac_name, value, ac_no);
                break;
            case 15:
                verification(pin, ac_name, value, ac_no);
                break;
            case 16:
                verification(pin, ac_name, value, ac_no);
                break;
            case 17:
                verification(pin, ac_name, value, ac_no);
                break;
            case 18:
                verification(pin, ac_name, value, ac_no);
                break;
            default:
                cout << "Unfortunately some error has been ocurred" << endl;
                break;
            }
        }
        break;
        default:
            cout << "Invalid option entered !" << endl;
            break;
        }
    }
}

void verification(int pin, string ac_name, int value, long long ac_no)
{
    int check;
    do
    {
        cout << "Enter pin for verification : ";
        cin >> check;
        if (check == pin)
        {
            cout << endl
                 << "Account holder name : " << ac_name
                 << endl
                 << "Account number : " << ac_no
                 << endl
                 << "Account pin : " << pin
                 << endl;
            switch (increment)
            {
            case 1:
                cout << "Money presented in the account : " << value + 1000 << endl;
                break;
            case 2:
                cout << "Money presented in the account : " << value + 2000 << endl;
                break;
            case 3:
                cout << "Money presented in the account : " << value + 3000 << endl;
                break;
            case 4:
                cout << "Money presented in the account : " << value + 5000 << endl;
                break;
            case 5:
                cout << "Money presented in the account : " << value + 10000 << endl;
                break;
            case 6:
                cout << "Money presented in the account : " << value + 20000 << endl;
                break;
            case 7:
                cout << "Money presented in the account : " << value + 40000 << endl;
                break;
            case 8:
                cout << "Money presented in the account : " << value + 80000 << endl;
                break;
            case 9:
                cout << "Money presented in the account : " << value + 160000 << endl;
                break;
            case 10:
                cout << "Money presented in the account : " << value + 320000 << endl;
                break;
            case 11:
                cout << "Money presented in the account : " << value + 640000 << endl;
                break;
            case 12:
                cout << "Money presented in the account : " << value + 1250000 << endl;
                break;
            case 13:
                cout << "Money presented in the account : " << value + 2500000 << endl;
                break;
            case 14:
                cout << "Money presented in the account : " << value + 5000000 << endl;
                break;
            case 15:
                cout << "Money presented in the account : " << value + 10000000 << endl;
                break;
            case 16:
                cout << "Money presented in the account : " << value + 30000000 << endl;
                break;
            case 17:
                cout << "Money presented in the account : " << value + 50000000 << endl;
                break;
            case 18:
                cout << "Money presented in the account : " << value + 70000000 << endl;
                break;

            default:
                cout << "Error Occurred";
                break;
            }

            break;
        }
        else
        {
            cout << "Invalid pin" << endl;
        }
    } while (check != pin);
}
