#include <msp430FR6989.h> // Register definitions
void main(void)
{
unsigned short int i;
WDTCTL = WDTPW + WDTHOLD; // Stop watchdog timer
P1DIR = P1DIR | 0x01; // P1.0 is an output
while(1)
{
P1OUT = P1OUT ^ 0x01; // Toggle P1.0
for(i=0 ; i<5000 ; i++);// Delay loop
}//end while(1)
}//end main()
