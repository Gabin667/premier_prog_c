#include <stdio.h>

int main() {
    int speed = 600;      // vitesse en kts
    int altitude = 12000; // altitude en ft
    int heading = 90;     // cap en degrés

    // Les graduations de vitesse se déduisent directement :
    int spd1 = speed - 500;
    int spd2 = speed - 400;
    int spd3 = speed - 300;
    int spd4 = speed - 200;
    int spd5 = speed - 100;
    int spd6 = speed;          // vitesse actuelle
    int spd7 = speed + 100;
    int spd8 = speed + 200;
    int spd9 = speed + 300;
    int spd10 = speed + 400;

    printf("===============================================================================\n");
    printf("| SPEED (kts)            |                  HORIZON                    | ALT (ft) |\n");
    printf("|------------------------+---------------------------------------------+----------|\n");

    printf("| %6d  |             |                                             | %8d |\n", spd1, altitude);
    printf("| %6d  |             |                     -----                   |          |\n", spd2);
    printf("| %6d  |             |                 ---       ---               |          |\n", spd3);
    printf("| %6d  |             |               --             --             |          |\n", spd4);
    printf("| %6d  |             |              |       -----      |           |          |\n", spd5);
    printf("| %6d  |             |--------------+---- /      \\ ----+-----------|          |\n", spd6);
    printf("| %6d  |             |--------------+----|        |----+-----------|          |\n", spd7);
    printf("| %6d  |             |              |     \\      /     |           |          |\n", spd8);
    printf("| %6d  |             |              |       -----      |           |          |\n", spd9);
    printf("| %6d  |             |               --             --             |          |\n", spd10);
    printf("|          |             |                 ---       ---               |          |\n");
    printf("|          |             |                     -----                   |          |\n");

    printf("|------------------------+---------------------------------------------+----------|\n");
    printf("|                                 HEADING: %03d (E)                               |\n", heading);
    printf("|---------------------------------------------------------------------------------|\n");
    printf("|                    N      NE     E      SE     S      SW     W      NW      N   |\n");
    printf("|---------------------------------------------------------------------------------|\n");

    return 0;
}
