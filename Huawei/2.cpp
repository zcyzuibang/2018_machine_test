#include <iostream>	
using namespace std;
int main()
{
	int year1,month1,day1,year2,month2,day2,i=0,tian=0;
	year1=1990;month1=1;day1=1;
	int n,week,weekday,count=0;
	cin>>n>>week;
	if(n<1||n>400||week<0||week>6){
		cout<<-1;
		return 0;
	}
	year2=1990-1+n;month2=12;day2=31;
	for(i;;i++){
		weekday=i%7+1;
		if(weekday>6)weekday=weekday%7;
		if(day1==13&&weekday==week){
			count++;
		}
		if(year1==year2&&month1==month2&&day1==day2)	break;
		else {
			day1++;
			if(((month1==1||month1==3||month1==5||month1==7||month1==8||month1==10||month1==12)&&day1>31)||((month1==4||month1==6||month1==9||month1==11)&&day1>30)||
			((year1%4==0&&year1%100!=0||year1%400==0)&&month1==2&&day1>29)||((year1%4!=0||year1%100==0&&year1%400!=0)&&month1==2&&day1>28)){
					month1++;day1=1;
			}
			if(month1>12){
					year1++;month1=1;day1=1;
			}
		}
		
	}
	cout<<count<<endl;;
	system("pause");
	return 0;
}
