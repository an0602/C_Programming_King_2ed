// Created by ayazn on 12/14/2021.

#include <stdio.h>

void find_closest_flight(int desired_time, int *departure_time, int *arrival_time);

int main() {
    int hours;
    int minutes;
    int desired_time;   //expressed in minutes
    int depart;         //expressed in minutes
    int arrive;         //expressed in minutes
    int depart_hours;
    int depart_min;
    int arrive_hours;
    int arrive_min;

    printf("Enter time (military hours): ");
    scanf("%d:%d", &hours, &minutes);

    //printf("Time is: %d:%d\n", hours, minutes);

    desired_time = (hours * 60) + minutes;
    //printf("desired time is: %d\n", desired_time);

    find_closest_flight(desired_time, &depart, &arrive);
    depart_hours = depart / 60;
    depart_min = depart % 60;
    arrive_hours = arrive / 60;
    arrive_min = arrive % 60;

    printf("Earliest departure time is %d:%02d, arriving at %d:%02d", depart_hours, depart_min, arrive_hours, arrive_min);

    return 0;
}

void find_closest_flight(int desired_time, int *departure_time, int *arrival_time)
{
    int depart800am = 8 * 60;
    int depart943am = (9 * 60) + 43;
    int depart1119am = (11* 60) + 19;
    int depart1247pm = (12 * 60) + 47;
    int depart200pm = (14 * 60) + 0;
    int depart345pm = (15 * 60) + 45;
    int depart700pm = (19 * 60) + 0;
    int depart945pm = (21 * 60) + 45;
    int closest_depart_time;
    int closest_depart_index;
    int depart_array[8];
    int arrive_array[8];
    int i;

    depart_array[0] = depart800am;
    depart_array[1] = depart943am;
    depart_array[2] = depart1119am;
    depart_array[3] = depart1247pm;
    depart_array[4] = depart200pm;
    depart_array[5] = depart345pm;
    depart_array[6] = depart700pm;
    depart_array[7] = depart945pm;
    arrive_array[0] = (10 * 60) + 16;
    arrive_array[1] = (11 * 60) + 52;
    arrive_array[2] = (13 * 60) + 31;
    arrive_array[3] = (15 * 60) + 0;
    arrive_array[4] = (16 * 60) + 8;
    arrive_array[5] = (17 * 60) + 55;
    arrive_array[6] = (21 * 60) + 20;
    arrive_array[7] = (23 * 60) + 58;

    closest_depart_time = desired_time - depart_array[0];
    closest_depart_index = 0;
    for(i = 0; i < 8; i++)
    {
        //printf("closest_depart_time is: %d\n", closest_depart_time);
        if((desired_time - depart_array[i] < closest_depart_time) && (desired_time - depart_array[i] >= 0) )
        {
            closest_depart_time = desired_time - depart_array[i];
            closest_depart_index = i;
        }
    }
    //printf("Index is %d\n", closest_depart_index);
    //printf("Closest time is: %d\n", depart_array[closest_depart_index]);

    *departure_time = depart_array[closest_depart_index];
    *arrival_time = arrive_array[closest_depart_index];
}
