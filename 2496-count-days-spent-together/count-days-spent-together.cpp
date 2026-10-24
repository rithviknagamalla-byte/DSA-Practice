class Solution {
public:
    int getday(string date) {

        int days[] = {0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334};
        int month = stoi(date.substr(0, 2));
        int day = stoi(date.substr(3, 2));

        return days[month-1]+day;
    }

    int countDaysTogether(string arriveAlice, string leaveAlice,
                          string arriveBob, string leaveBob) {

        int start = max(getday(arriveAlice), getday(arriveBob));
        int end = min(getday(leaveAlice), getday(leaveBob));
        return max(0, end - start + 1);
    }
};