/* Create an enumeration named Weekday to represent the days of the week. Then, 
declare a variable currentDay using this enumeration and assign it a day. 
Finally, print out the current day.
    */

enum Weekday { case Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday }

var currentDay = Weekday.Monday
print(currentDay)