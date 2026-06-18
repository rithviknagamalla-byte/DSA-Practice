class Solution {
public:
    double angleClock(int hour, int minutes) {
        
//   // 1 approach
//     double angle = abs(30*hour-((11*minutes)/2.0));
//     double smallerangle=min(angle,360-angle);
//     return smallerangle;

//2nd approach
double hours_angle=(hour%12)*30+(minutes)*0.5;
double minutes_angle=minutes*6;
double angle=abs(hours_angle-minutes_angle);
double smallerangle=min(angle,360-angle);

return smallerangle;
    }
};