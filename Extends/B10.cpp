#include <stdio.h>
#include <math.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        double x1, y1, x2, y2;
        scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);

        double dx = x2 - x1;
        double dy = y2 - y1;

        double d = sqrt(dx * dx + dy * dy);

        printf("%.6f\n", d);
    }

    return 0;
}