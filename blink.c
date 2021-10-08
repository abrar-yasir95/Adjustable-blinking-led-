void main() {
           TRISA = 0x00;
    while (1)
    {

       PORTA.F0 = 1;

       Delay_ms(500) ;

       PORTA.F0 = 0;

      PORTA.F1 = 1;

       Delay_ms(400) ;

       PORTA.F1 = 0;

       PORTA.F2 = 1;

       Delay_ms(300) ;

       PORTA.F2 = 0;

    }
