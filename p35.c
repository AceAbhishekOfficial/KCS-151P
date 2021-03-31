/*

                Define a structure that can describe a hotel. It should have the member that
                includes the name, address, grade, room charge and number of rooms.
                Write a function to print out hotel of given grade in order of room charges.
                        Code by Abhishek

*/

#include <stdio.h>
#include <string.h>
struct hotel
{
    char name[32];
    char adress[50];
    int grade;
    float roomcharge;
    int rooms;
};

void printGrade(int n ,struct hotel hlist[],int g);

int main()
{
    struct hotel h[5];

    strcpy(h[0].name,"Taj Mahal");
    strcpy(h[0].adress,"Mumbai");
    h[0].grade=5;
    h[0].roomcharge=2000.0;
    h[0].rooms =500;

    strcpy(h[1].name,"Grapevine");
    strcpy(h[1].adress,"Banaras");
    h[1].grade=4;
    h[1].roomcharge=1500.0;
    h[1].rooms =400;

    strcpy(h[2].name,"Gateway");
    strcpy(h[2].adress,"Delhi");
    h[2].grade=5;
    h[2].roomcharge=2500.0;
    h[2].rooms =1000;

    strcpy(h[3].name,"Hi tea");
    strcpy(h[3].adress,"Noida");
    h[3].grade=5;
    h[3].roomcharge=1400.0;
    h[3].rooms =400;

    strcpy(h[4].name,"Anna");
    strcpy(h[4].adress,"Channai");
    h[4].grade=4;
    h[4].roomcharge=1200.0;
    h[4].rooms =400;
    
    printGrade(5,h,4);
    return 1
}

void printGrade(int n ,struct hotel hlist[], int g)
 {
    float max=0;
    for(int a=0;a<n;a++)
        if(hlist[a].grade==g)
            if(hlist[a].roomcharge>max)
                max=hlist[a].roomcharge;

    for(float f=0.0 ;f<=max;f++)
        for(int a =0;a<n;a++)
            if(hlist[a].grade==g)
                if(hlist[a].roomcharge==f)
                    printf("Hotel : %s, %s\t charge %f\n",hlist[a].name,hlist[a].adress,hlist[a].roomcharge);
 }
