class Solution {
public:
    double angleClock(int hour, int minutes) {
        

    double angle = abs(30*hour-((11*minutes)/2.0));
    double smallerangle=min(angle,360-angle);
    return smallerangle;

    }
};