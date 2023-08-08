#include <stdio.h>

void find_closest_flight(int desired_time, int *departure_time, int *arrival_time);

int minutes_after_midnight(int hours, int minutes);

int main(void) {
	int hours, minutes, since_midnight, departure, arrival;
	
	printf("Enter a 24-hour time: ");
	scanf("%2d:%2d", &hours, &minutes);

	since_midnight = minutes_after_midnight(hours, minutes);

	find_closest_flight(since_midnight, &departure, &arrival);

	printf("Closest departure time is %.2d:%.2d, arriving at %.2d:%.2d\n", departure / 60, departure % 60, arrival / 60, arrival % 60);

	return 0;
}

void find_closest_flight(int desired_time, int *departure_time, int *arrival_time) {
	int flight1_dt = minutes_after_midnight(8, 0), flight1_at = minutes_after_midnight(10, 16);
	int flight2_dt = minutes_after_midnight(9, 43), flight2_at = minutes_after_midnight(11, 52);
	int flight3_dt = minutes_after_midnight(11, 19), flight3_at = minutes_after_midnight(13, 31);
	int flight4_dt = minutes_after_midnight(12, 47), flight4_at = minutes_after_midnight(15, 0);
	int flight5_dt = minutes_after_midnight(14, 0), flight5_at = minutes_after_midnight(16, 8);
	int flight6_dt = minutes_after_midnight(15, 45), flight6_at = minutes_after_midnight(17, 55);
	int flight7_dt = minutes_after_midnight(19, 0), flight7_at = minutes_after_midnight(21, 20);
	int flight8_dt = minutes_after_midnight(21, 45), flight8_at = minutes_after_midnight(23, 58);

	if (desired_time <= flight1_dt + 31 && desired_time >= flight1_dt - 30) {
		*departure_time = flight1_dt;
		*arrival_time = flight1_at;
	} else if (desired_time <= flight2_dt + 30 && desired_time >= flight2_dt - 32) {
		*departure_time = flight2_dt;
		*arrival_time = flight2_at;
	} else if (desired_time <= flight3_dt + 30 && desired_time >= flight3_dt - 30) {
		*departure_time = flight3_dt;
		*arrival_time = flight3_at;
  } else if (desired_time <= flight4_dt + 30 && desired_time >= flight4_dt - 37) {
		*departure_time = flight4_dt;
		*arrival_time = flight4_at;
	} else if (desired_time <= flight5_dt + 30 && desired_time >= flight5_dt - 30) {
		*departure_time = flight5_dt;
		*arrival_time = flight5_at;
	} else if (desired_time <= flight6_dt + 30 && desired_time >= flight6_dt - 30) {
		*departure_time = flight6_dt;
		*arrival_time = flight6_at;
	} else if (desired_time <= flight7_dt + 30 && desired_time >= flight7_dt - 30) {
		*departure_time = flight7_dt;
		*arrival_time = flight7_at;
	} else if (desired_time <= flight8_dt + 30 && desired_time >= flight8_dt - 30) {
		*departure_time = flight8_dt;
		*arrival_time = flight8_at;
	}
}

int minutes_after_midnight(int hours, int minutes) {
	return minutes + hours * 60;
}
