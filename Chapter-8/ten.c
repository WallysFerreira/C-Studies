#include <stdio.h>

#define FLIGHT_QNT 2

int main(void) {
	int arrivals[FLIGHT_QNT], departures[FLIGHT_QNT], time;

	printf("Please enter all times as minutes after midnight\n\n");

	// Get info on the flights
	for (int i = 0; i < FLIGHT_QNT; i++) {
		printf("Enter arrival time for flight %d: ", i + 1);
		scanf("%d", &arrivals[i]);
		printf("Enter departure time for flight %d: ", i + 1);
		scanf("%d", &departures[i]);
	}

	// Get user input time
	printf("Enter a time: ");
	scanf("%d", &time);

	// Find flight and print it's info
	for (int i = 0; i < FLIGHT_QNT; i++) {
		if (time >= arrivals[i] - 50 && time <= arrivals[i] + 50) {
			int hours_arrival, minutes_arrival, hours_departure, minutes_departure;

			hours_arrival = arrivals[i] / 60;
			hours_departure = departures[i] / 60;

			minutes_arrival = arrivals[i] - hours_arrival * 60;
			minutes_departure = departures[i] - hours_departure * 60;

			printf("Closest flight: %d\nArrival time: %.2d:%.2d\nDeparture time: %.2d:%.2d\n", i + 1, hours_arrival, minutes_arrival, hours_departure, minutes_departure);
			return 0;
		}
	}

	printf("No flights avaialable, sorry.\n");
	return 0;
}
