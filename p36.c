/*
            Define a structure called cricket with player name, team name, batting
            average, for 50 players & 5 teams. Print team wise list contains names of
            player with their batting average. 
                Code by Abhishek
*/

#include <stdio.h>
#include <string.h>

struct cricket
{
    char player_name[32];
    char team_name[32];
    float avg;
};

int main()
{
    struct cricket CList[50]=
    {
        {"Virat Kholi","India",129.0},
        {"Jos Buttler","England", 	94.0},
        {"Ben Stokes","England",		92.0},
        {"Angelo Mathews","Sri Lanka",	91.0},
        {"Joe Root","England",		86.0},
        {"Steve Smith","Australia",	86.0},
        {"Rohit Sharma","India",	76.0},
        {"Sarfaraz Ahmed","Pakistan",	76.0},
        {"Eoin Morgan","England",	69.33},
        {"Shikhar Dhawan","India",	67.60},
        {"JP Duminy","South Africa",	66.0},
        {"Fakhar Zaman","Pakistan",	63.0},
        {"Upul Tharanga","Sri Lanka",	57.0},
        {"Hardik Pandya","India",	52.50},
        {"Hashim Amla","South Africa",	51.33},
        {"Mohammad Hafeez","Pakistan",	49.33},
        {"David Miller","South Africa",	47.0},
        {"Faf du Plessis","South Africa",	45.66},
        {"Azhar Ali","Pakistan",	45.60},
        {"Danushka Gunathilaka","Sri Lanka",	44.50},
        {"Babar Azam","Pakistan",	44.33},
        {"Jonny Bairstow","England",	43.0},
        {"Kusal Mendis","Sri Lanka",	42.33},
        {"Alex Hales","England",	41.0},
        {"Niroshan Dickwella","Sri Lanka",	40.33},
        {"David Warner","Australia",	39.50},
        {"Mohammad Amir","Pakistan",	37.0},
        {"Quinton de Kock","South Africa",	36.33},
        {"Yuvraj Singh","India",	35.0},
        {"Kedar Jadhav","India",	34.0},
        {"MS Dhoni","India",	33.50},
        {"Asela Gunaratne","Sri Lanka",	32.50},
        {"Aaron Finch","Australia",	31.66},
        {"Glenn Maxwell","Australia",	20.0},
        {"Shoaib Malik","Pakistan",	18.0},
        {"Moises Henriques","Ausralia",	17.50},
        {"Chris Morris","South Africa",	17.33},
        {"Kagiso Rabada","South Africa",	15.50}   
    };
    printf("\tTEAM India\n");
    for(int a=0;a<50;a++)
    {
        if(!strcmp(CList[a].team_name,"India"))
        printf("%s\t\t%.2f\n",CList[a].player_name,CList[a].avg);
    }
    printf("_____________________\n");
    printf("\tTEAM England\n");
    for(int a=0;a<50;a++)
    {
        if(!strcmp(CList[a].team_name,"England"))
        printf("%s\t\t%.2f\n",CList[a].player_name,CList[a].avg);
    }
    printf("_____________________\n");
    printf("\tTEAM Pakistan\n");
    for(int a=0;a<50;a++)
    {
        if(!strcmp(CList[a].team_name,"Pakistan"))
        printf("%s\t\t%.2f\n",CList[a].player_name,CList[a].avg);
    }
    printf("_____________________\n");
    printf("\tTEAM South Africa\n");
    for(int a=0;a<50;a++)
    {
        if(!strcmp(CList[a].team_name,"South Africa"))
        printf("%s\t\t%.2f\n",CList[a].player_name,CList[a].avg);
    }
    printf("_____________________\n");
    printf("\tTEAM Sri Lanka\n");
    for(int a=0;a<50;a++)
    {
        if(!strcmp(CList[a].team_name,"Sri Lanka"))
        printf("%s\t\t%.2f\n",CList[a].player_name,CList[a].avg);
    }
    printf("_____________________\n");
    return 1;
}

