#include <stdio.h>

int main() {
    int total_characters, speed_typing_first, speed_typing_second, ping_first_participant, ping_second_participant;
    printf("Введите (через пробел) количество символов в тексте, скорость набора текста первым участником, скорость набора текста вторым участником, пинг первого участника и пинг второго участника:\n");
    scanf("%d %d %d %d %d", &total_characters, &speed_typing_first, &speed_typing_second, &ping_first_participant, &ping_second_participant);

    int time1 = total_characters * speed_typing_first + 2 * ping_first_participant;
    int time2 = total_characters * speed_typing_second + 2 * ping_second_participant;

    if (time1 < time2) {
        printf("Победит первый!\n");
    } else if (time1 > time2) {
        printf("Победит второй!\n");
    } else {
        printf("Ничья!\n");
    }

    return 0;
}
