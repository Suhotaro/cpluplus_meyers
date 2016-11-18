#include <iostream>
#include <string>
#include <stdio.h>
#include <memory>


class Day
{
    enum = {
        Monday = 1,
        Tusday,
        Wednesday,
        Thursday,
        Friday,
        Sanday,
        Saturday,
    };

public:
        int Monday()    { return Monday; }
    int Tusday()    { return Tusday; }
    int Wednesday() { return Wednesday; }
    int Thursday()  { return Thursday; }
    int Friday()    { return Friday; }
    int Sanday()    { return Sanday; }
    int Saturday()  { return Saturday; }

}

class Month
{
    enum = {
        A = 1,
        B,
        C,
        D,
        /* etc... */
    };

public:
    int November()    { return A; }
    int Desember()    { return B; }
}


class Year
{
    int year;
public:
    Year () = delete;
    Year (int year_) { year = year_ }
    ~Year () {}

    int get_year() { return year; }
}


/* Good API */
int set_data (Day day, Month month, Year year)
{
    printf("data: dd:mm:yyyy: %d:%d:%d\n", day.Friday(), month.November(), year.get_year());
}

/* Bad API */
int set_data (int day, int month, int year)
{
    printf("data: dd:mm:yyyy: %d:%d:%d\n", day, month, year);
}

int main() 
{
    Data data;
    Month month;
    Year year(2016);

    set_data(data, month, year);

	return 0;
}







