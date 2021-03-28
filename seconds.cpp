#include <iostream>
using namespace std;
 
class Time
{
    private:
        int seconds;
        int hh,mm,ss;
    public:
        void getTime(void);
        void convertIntoSeconds(void);
        void displayTime(void);
};
 
void Time::getTime(void)
{
    cout << "Enter time:" << endl;
    cout << "enter hours   ";  cin >> hh;
    cout << "enter minutes ";  cin >> mm;
    cout << "enter seconds ";  cin >> ss;
}
 
void Time::convertIntoSeconds(void)
{
    seconds = hh*3600 + mm*60 + ss;
}
 
void Time::displayTime(void)
{
    cout << "The time is = " <<  hh << ":" << mm << ":"<< ss << endl;
    cout << "Time in total seconds: " << seconds;
}
 
int main()
{
    Time tt; 
     
    tt.getTime();
    tt.convertIntoSeconds();
    tt.displayTime();
     
    return 0;
}