class Solution {
public:
    int convert(string date) {

        int year = stoi(date.substr(0, 4));
        int month = stoi(date.substr(5, 2));
        int day = stoi(date.substr(8, 2));

        int total = 0;
        for (int y = 1; y < year; y++) {
            if ((y % 400 == 0) || (y % 4 == 0 && y % 100 != 0)) {
                total = total + 366;
            } else {
                total = total + 365;
            }
        }
        int month_days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        for (int m = 1; m < month; m++) {
            total = total + month_days[m - 1];
            if(m==2 && ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))){
                total++;
                
            }
        }
         

        total = total + day;
        return total;
    }

    int daysBetweenDates(string date1, string date2) {
        return abs(convert(date1) - convert(date2));
    }
};