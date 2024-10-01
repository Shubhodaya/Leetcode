class Solution {
public:
    double angleClock(int hour, int minutes) {
        double perHourangle= 360/12;
        double pma=360/60;
hour=hour==12?0:hour;
        double actualHourangle=(hour*perHourangle) + perHourangle*(minutes*(1.0)/60);

double a=abs(actualHourangle- (pma*minutes));
return min(a,abs(360-a));
        
    }
};