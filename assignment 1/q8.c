#include <stdio.h>

int main() {

    long long total_seconds = 31558150;
    

    long long seconds_in_day = 86400; // 24 * 60 * 60
    long long seconds_in_hour = 3600;  // 60 * 60
    long long seconds_in_minute = 60;
    
    
    long long days, hours, minutes, remaining_seconds;
    
    
    days = total_seconds / seconds_in_day;
    remaining_seconds = total_seconds % seconds_in_day;
    
    
    hours = remaining_seconds / seconds_in_hour;
    remaining_seconds = remaining_seconds % seconds_in_hour;
    
    
    minutes = remaining_seconds / seconds_in_minute;
    remaining_seconds = remaining_seconds % seconds_in_minute;
    
    
    printf("Total Seconds: %lld\n", total_seconds);
    printf("Conversion: %lld days, %lld hours, %lld minutes, and %lld seconds\n", 
           days, hours, minutes, remaining_seconds);
    
    return 0;
}
