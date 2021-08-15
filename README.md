# Number_of_Days
program counts the number of days that passed from 1.1.1984.

In this program there's the definition of a structure datetype, which contains three parameters - dd(day), mm(month), yy(year).
In the main function structure date is created, so we can define it's day(date.dd),  month(date.mm) and year(date.yy).
Here's an example with the date when this program is written, 15.8.2021.(Croatian date format).
Before main(), function date2days is defined, which is called from main and takes the structure date as an argument, with all of it's parameters.
Function then counts the number of days that passed since 1.1.1984. and returns that number to the main function.
It also takes in count all of the years which had 366 days (Croatian - prijestupne_godine).
At the end of main, sentence with number of days that passed is printed on the screen (in my case it is 13742 days).
If you want to count the number of days up to some other date with this program, just change parameters of date structure in main().
