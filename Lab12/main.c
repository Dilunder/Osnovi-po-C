#include <stdio.h>
#include <time.h>

int main(int argc, char *argv[]) {
    time_t t = time(NULL);
    struct tm *ltm = localtime(&t);
    FILE *f = fopen( argv[1], "w");
    for (int i = 0; i < 10; i++){
        ltm->tm_mday++;
        fprintf(f, "Date: %d %d %d  %d:%d:%d\n", ltm->tm_mday, ltm->tm_mon, ltm->tm_year, ltm->tm_hour, ltm->tm_min, ltm->tm_sec);
    }
    fclose(f);
    return 0;
}
