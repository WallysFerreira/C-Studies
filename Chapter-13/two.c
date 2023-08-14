#include <stdio.h>
#include <string.h>

#define MAX_REMIND 50
#define MSG_LEN 60

int read_line(char str[], int n);

int main(void) {
	char reminders[MAX_REMIND][MSG_LEN+3];
	char day_str[4], hour_str[7], msg_str[MSG_LEN+1];
	int day, hours, minutes, i, num_remind = 0;

	for (;;) {
		if (num_remind == MAX_REMIND) {
			printf("-- No space left --\n");
			break;
		}

		printf("Enter day, 24-hour time and reminder: ");
		scanf("%2d", &day);
		if (day == 0) break;
		if (day < 0 || day > 31) {
			printf("\nInvalid day\n");
			while (getchar() != '\n');
			continue;
		}
		sprintf(day_str, "%2d ", day);
		scanf("%2d:%2d", &hours, &minutes);
		if ((hours < 0 || hours > 23) || (minutes < 0 || minutes > 59)) {
			printf("\nInvalid time\n");
			while (getchar() != '\n');
			continue;
		}
		sprintf(hour_str, "%.2d:%.2d ", hours, minutes);
		read_line(msg_str, MSG_LEN);

		for (i = 0; i < num_remind; i++) {
			if (strcmp(day_str, reminders[i]) < 0) break;
		}
		for (int j = num_remind; j > i; j--) {
			strcpy(reminders[j], reminders[j - 1]);
		}

		strcpy(reminders[i], day_str);
		strcat(reminders[i], hour_str);
		strcat(reminders[i], msg_str);

		num_remind++;
	}

	printf("\nDay Hour Reminder\n");
	for (i = 0; i < num_remind; i++) {
		printf("%s\n", reminders[i]);
	}

	return 0;
}

int read_line(char str[], int n) {
	int ch, i = 0;

	while ((ch = getchar()) != '\n') {
		if (i < n) str[i++] = ch;
	}
	str[i] = '\0';
	return i;
}
