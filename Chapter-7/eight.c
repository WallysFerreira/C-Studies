#include <stdio.h>

int minutes_after_midnight(int hours, int minutes) {
	int minutes_midnight;

	minutes_midnight = minutes + hours * 60;

	return minutes_midnight;
}

int main(void) {
	int hours, minutes, since_midnight;
	char period;
	int flight1_dt = minutes_after_midnight(8, 0), flight1_at = minutes_after_midnight(10, 16);
	int flight2_dt = minutes_after_midnight(9, 43), flight2_at = minutes_after_midnight(11, 52);
	int flight3_dt = minutes_after_midnight(11, 19), flight3_at = minutes_after_midnight(13, 31);
	int flight4_dt = minutes_after_midnight(12, 47), flight4_at = minutes_after_midnight(15, 0);
	int flight5_dt = minutes_after_midnight(14, 0), flight5_at = minutes_after_midnight(16, 8);
	int flight6_dt = minutes_after_midnight(15, 45), flight6_at = minutes_after_midnight(17, 55);
	int flight7_dt = minutes_after_midnight(19, 0), flight7_at = minutes_after_midnight(21, 20);
	int flight8_dt = minutes_after_midnight(21, 45), flight8_at = minutes_after_midnight(23, 58);


	printf("Enter a 12-hour time: ");
	scanf("%2d:%2d %c", &hours, &minutes, &period);

	since_midnight = minutes_after_midnight(period == 'a' ? hours : hours + 12, minutes);

	if (since_midnight <= flight1_dt + 51 && since_midnight >= flight1_dt - 30) {
		printf("Closest departure time is %.2d:%.2d %s, arriving at %.2d:%.2d %s.\n", 8, 0, flight1_dt > 720 ? "p.m" : "a.m", 10, 16, flight1_at > 720 ? "p.m" : "a.m");
	} else if (since_midnight <= flight2_dt + 30 && since_midnight >= flight2_dt - 52) {
		printf("Closest departure time is %.2d:%.2d %s, arriving at %.2d:%.2d %s.\n", 9, 43, flight2_dt > 720 ? "p.m" : "a.m", 11, 52, flight2_at > 720 ? "p.m" : "a.m");
	} else if (since_midnight <= flight3_dt + 40 && since_midnight >= flight3_dt - 40) {
		printf("Closest departure time is %.2d:%.2d %s, arriving at %.2d:%.2d %s.\n", 11, 19, flight3_dt > 720 ? "p.m" : "a.m", 1, 31, flight3_at > 720 ? "p.m" : "a.m");
  } else if (since_midnight <= flight4_dt + 30 && since_midnight >= flight4_dt - 47) {
		printf("Closest departure time is %.2d:%.2d %s, arriving at %.2d:%.2d %s.\n", 12, 47, flight4_dt > 720 ? "p.m" : "a.m", 3, 0, flight4_at > 720 ? "p.m" : "a.m");
	} else if (since_midnight <= flight5_dt + 30 && since_midnight >= flight5_dt - 30) {
		printf("Closest departure time is %.2d:%.2d %s, arriving at %.2d:%.2d %s.\n", 2, 0, flight5_dt > 720 ? "p.m" : "a.m", 4, 8, flight5_at > 720 ? "p.m" : "a.m");
	} else if (since_midnight <= flight6_dt + 30 && since_midnight >= flight6_dt - 30) {
		printf("Closest departure time is %.2d:%.2d %s, arriving at %.2d:%.2d %s.\n", 3, 45, flight6_dt > 720 ? "p.m" : "a.m", 5, 55, flight6_at > 720 ? "p.m" : "a.m");
	} else if (since_midnight <= flight7_dt + 30 && since_midnight >= flight7_dt - 30) {
		printf("Closest departure time is %.2d:%.2d %s, arriving at %.2d:%.2d %s.\n", 7, 0, flight7_dt > 720 ? "p.m" : "a.m", 9, 20, flight7_at > 720 ? "p.m" : "a.m");
	} else if (since_midnight <= flight8_dt + 30 && since_midnight >= flight8_dt - 30) {
		printf("Closest departure time is %.2d:%.2d %s, arriving at %.2d:%.2d %s.\n", 9, 45, flight8_dt > 720 ? "p.m" : "a.m", 11, 58, flight8_at > 720 ? "p.m" : "a.m");
	} 

	return 0;
}
