#include <iostream>
using namespace std;

int main()
{
    int option;
    cout << "                                         " << "+ = = = = = = = = = = = = = = = = = = +" << endl;
    cout << "                                         " << "*   1. Water resources                *" << endl;
    cout << "                                         " << "*   2. Protected water resources      *" << endl;
    cout << "                                         " << "*   3. Protected water areas          *" << endl;
    cout << "                                         " << "*   4. Solutions for their protection *" << endl;
    cout << "                                         " << "+ = = = = = = = = = = = = = = = = = = +" << endl << endl;
    cout << "                                         " << "Select an option: ";
    cin >> option;
    if (option == 1)
    {
        int resourceOption;
        cout << "                                         " << "+ = = = = = = = = = = = = = = = = = = +" << endl;
        cout << "                                         " << "*   1. Resource 1                     *" << endl;
        cout << "                                         " << "*   2. Resource 2                     *" << endl;
        cout << "                                         " << "*   3. Resource 3                     *" << endl;
        cout << "                                         " << "*   4. Return to menu                 *" << endl;
        cout << "                                         " << "*   5. Exit                          *" << endl;
        cout << "                                         " << "+ = = = = = = = = = = = = = = = = = = +" << endl << endl;
        cout << "                                         " << "Select an option: ";
        cin >> resourceOption;

        if (resourceOption == 1)
        {
            cout << "Maritsa is a river in southern Bulgaria - it passes through the districts of Sofia, Pazardzhik, Plovdiv, Stara Zagora and Haskovo. After leaving Bulgaria, the river passes successively through the northeastern part of Greece and the European part of Turkey. It flows into the northeastern part of the White Sea. The length of the river is 472 km, of which 322 km are located on Bulgarian territory and thus Maritsa is the fourth longest among the Bulgarian rivers - after the Danube, Iskar and Tundzha. It is the longest river, springing from the territory of Bulgaria, with the largest catchment area (53 116 km², of which in Bulgaria - 21 084 km²) and with the largest river outflow (110 m³ / s at the exit from the country, at the Bulgarian-Greek border).";
        }
        else if (resourceOption == 2)
        {
            cout << "The Danube is the second longest river in Europe after the Volga. It is the only large river in Europe that flows from west to east and flows into the Black Sea. In addition, the Danube is the river that flows through the most countries in the world - 10 in number (Germany, Austria, Slovakia, Hungary, Croatia, Serbia, Bulgaria, Romania, Moldova and Ukraine.), And its catchment area extends beyond the territories of the above 10 countries and the territories of another 9 countries (Switzerland, Italy, the Czech Republic, Poland, Slovenia, Bosnia and Herzegovina, Montenegro, Albania and Kosovo). Length 2852 km. The catchment area is 817,000 km².";
        }
        else if (resourceOption == 3)
        {
            cout << "Kamchchia (in antiquity in Latin: Panisus, Panisus, old name Ticha) is a river in northeastern Bulgaria, Varna region - municipalities of Dulgopol, Dolni Chiflik and Avren, flowing into the Black Sea. Its length is 46 km, and together with the left river Golyama Kamchia, which is considered to be its beginning - 244.5 km (8th place in length in Bulgaria). Kamchia is the largest Bulgarian river flowing into the Black Sea, draining almost the entire Eastern Stara Planina and a small part of the Danube plain.";
        }
        else if (resourceOption == 4)
        {
            int option1;
            cout << "                                         " << "+ = = = = = = = = = = = = = = = = = = +" << endl;
            cout << "                                         " << "*   1. Water resources                *" << endl;
            cout << "                                         " << "*   2. Protected water resources      *" << endl;
            cout << "                                         " << "*   3. Protected water areas          *" << endl;
            cout << "                                         " << "*   4. Solutions for their protection *" << endl;
            cout << "                                         " << "*   5. Exit                          *" << endl;
            cout << "                                         " << "+ = = = = = = = = = = = = = = = = = = +" << endl << endl;
            cout << "                                         " << "Select an option: ";
            cin >> option1;

            if (option1 == 5)
            {
                cout << endl;
            }
        }
        else if (resourceOption == 5)
        {
            cout << endl;
        }
    }
    else if (option == 2)
    {
        int jivotniOption;
        cout << "                                         " << "+ = = = = = = = = = = = = = = = = = = +" << endl;
        cout << "                                         " << "*   1. Animal 1                       *" << endl;
        cout << "                                         " << "*   2. Animal 2                       *" << endl;
        cout << "                                         " << "*   3. Animal 3                       *" << endl;
        cout << "                                         " << "*   4. Return to menu                 *" << endl;
        cout << "                                         " << "*   5. Exit                          *" << endl;
        cout << "                                         " << "+ = = = = = = = = = = = = = = = = = = +" << endl << endl;
        cout << "                                         " << "Select an option: ";
        cin >> jivotniOption;

        if (jivotniOption == 1)
        {
            cout << "The nine-needle thorn is a very small fish, reaching 5 cm in body length. On the back there are 7-12, most often 9 thorns (converted part of the dorsal fin), unconnected, directed in different directions in a zigzag pattern. The pectoral fins are relatively short and rounded. Inhabits low-flowing or stagnant waters. Poorly mobile, but active in the morning and evening. ";
        }
        else if (jivotniOption == 2)
        {
            cout << "The Danube lamprey is a species of lamprey of the Jawless class, order Lamprey The representatives of this class are the most primitive vertebrates in the European fauna. The main part of the population of the species prefers clear and pure waters, as the distribution of individuals in the river course depends on the availability and abundance of suitable food. the larvae live buried in the mud at the bottom.";
        }
        else if (jivotniOption == 3)
        {
            cout << "Mihaltsata is the only member of the Cod family living in freshwater. It is a cold-loving fish, active at a water temperature not higher than 10 degrees, and therefore in summer it is practically impossible to catch.";
        }
        else if (jivotniOption == 4)
        {
            int option2;
            cout << "                                         " << "+ = = = = = = = = = = = = = = = = = = +" << endl;
            cout << "                                         " << "*   1. Water resources                *" << endl;
            cout << "                                         " << "*   2. Protected water resources      *" << endl;
            cout << "                                         " << "*   3. Protected water areas          *" << endl;
            cout << "                                         " << "*   4. Solutions for their protection *" << endl;
            cout << "                                         " << "*   5. Exit                           *" << endl;
            cout << "                                         " << "+ = = = = = = = = = = = = = = = = = = +" << endl << endl;
            cout << "                                         " << "Select an option: ";
            cin >> option2;

            if (option2 == 5)
            {
                cout << endl;
            }
        }
        else if (jivotniOption == 5)
        {
            cout << endl;
        }
    }
    else if (option == 3)
    {
        int mestnostiOption;
        cout << "                                         " << "+ = = = = = = = = = = = = = = = = = = +" << endl;
        cout << "                                         " << "*   1. Locality 1                     *" << endl;
        cout << "                                         " << "*   2. Locality 2                     *" << endl;
        cout << "                                         " << "*   3. Locality 3                     *" << endl;
        cout << "                                         " << "*   4. Return to menu                 *" << endl;
        cout << "                                         " << "*   5. Exit                           *" << endl;
        cout << "                                         " << "+ = = = = = = = = = = = = = = = = = = +" << endl << endl;
        cout << "                                         " << "Select an option: ";
        cin >> mestnostiOption;

        if (mestnostiOption == 1)
        {
            cout << "The Kleptuza karst spring is one of the symbols of Velingrad. Translated, the name is the hidden source. It is located on the right bank of the Chepinska River, next to the mountain slope in the Chepino district, at the southwestern end of Velingrad.";
        }
        else if (mestnostiOption == 2)
        {
            cout << "Irakli Protected Area is located 9 km from the town of Obzor and its total area is over 42 hectares. The area is far from the big resorts, which makes it attractive for young people who love camping. In the summer in the area can be seen many tents of vacationers here.";
        }
        else if (mestnostiOption == 3)
        {
            cout << "The protected area Kresna Gorge is located near the town of Kresna, Blagoevgrad region. On the territory of the Kresna Gorge there are various animal and plant species, some of which are included in the Red Book of Bulgaria. The protected area is a preferred destination especially for tourists who love extreme sports, especially in spring and summer when the Struma River is at its highest. The most common sports are rafting and canyoning.";
        }
        else if (mestnostiOption == 4)
        {
            int option3;
            cout << "                                         " << "+ = = = = = = = = = = = = = = = = = = +" << endl;
            cout << "                                         " << "*   1. Water resources                *" << endl;
            cout << "                                         " << "*   2. Protected water resources      *" << endl;
            cout << "                                         " << "*   3. Protected water areas          *" << endl;
            cout << "                                         " << "*   4. Solutions for their protection *" << endl;
            cout << "                                         " << "*   5. Exit                           *" << endl;
            cout << "                                         " << "+ = = = = = = = = = = = = = = = = = = +" << endl << endl;
            cout << "                                         " << "Select an option: ";
            cin >> option3;

            if (option3 == 5)
            {
                cout << endl;
            }
        }
        else if (mestnostiOption == 5)
        {
            cout << endl;
        }
    }
    else if (option == 4)
    {
        int resheniqOption;
        cout << "                                         " << "+ = = = = = = = = = = = = = = = = = = +" << endl;
        cout << "                                         " << "*   1. Solution 1                     *" << endl;
        cout << "                                         " << "*   2. Solution 2                     *" << endl;
        cout << "                                         " << "*   3. Solution 3                     *" << endl;
        cout << "                                         " << "*   4. Return to menu                 *" << endl;
        cout << "                                         " << "*   5. Exit                           *" << endl;
        cout << "                                         " << "+ = = = = = = = = = = = = = = = = = = +" << endl << endl;
        cout << "                                         " << "Select an option: ";
        cin >> resheniqOption;

        if (resheniqOption == 1)
        {
            cout << "The Climate FieldView platform, for example, offers precipitation notifications. These notifications allow farmers to water their fields more accurately where needed, and tracking tools help reduce pesticide leakage into freshwater sources. By having access to this information in real time, farmers can ensure that water is used only where it is needed and when it is needed, which in turn helps to ensure a successful harvest.";
        }
        else if (resheniqOption == 2)
        {
            cout << "DripByDrip irrigation lines are placed directly in the ground, which allows more precise distribution of water, fertilizers and plant protection products. Soil moisture sensors scan the soil and collect information on how much water is needed at a given point in the plant's life cycle. Using this data, the DripByDrip system determines whether to start watering and how much. Automating this process not only facilitates the work of farmers, but reduces the impact of agriculture on the environment, using up to 60% less water than traditional irrigation methods.";
        }
        else if (resheniqOption == 3)
        {
            cout << "The easiest way to protect natural resources and animals is to protect the waters and keep them clean.";
        }
        else if (resheniqOption == 4)
        {
            int option4;
            cout << "                                         " << "+ = = = = = = = = = = = = = = = = = = +" << endl;
            cout << "                                         " << "*   1. Water resources                *" << endl;
            cout << "                                         " << "*   2. Protected water resources      *" << endl;
            cout << "                                         " << "*   3. Protected water areas          *" << endl;
            cout << "                                         " << "*   4. Solutions for their protection *" << endl;
            cout << "                                         " << "*   5. Exit                           *" << endl;
            cout << "                                         " << "+ = = = = = = = = = = = = = = = = = = +" << endl << endl;
            cout << "                                         " << "Select an option: ";
            cin >> option4;

            if (option4 == 5)
            {
                cout << endl;
            }
        }
        else if (resheniqOption == 5)
        {
            cout << endl;
        }
    }
}
