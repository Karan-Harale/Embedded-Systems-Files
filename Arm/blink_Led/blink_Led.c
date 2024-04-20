#include <LPC214x.h>

#define LED_PIN (1<<16) // LED connected to P0.16

void delay_ms(unsigned int count) {
    unsigned int i, j;
    for (i = 0; i < count; i++)
        for (j = 0; j < 6000; j++);
}

int main(void) {
    // Set P0.16 as output
    IO0DIR |= LED_PIN;

    while (1) {
        // Toggle LED state
        IO0PIN ^= LED_PIN;
        // Delay for some time
        delay_ms(500);
    }
    return 0;
}