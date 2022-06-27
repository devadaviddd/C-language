#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float convert_unit(float x, char unit)
{
    printf("Choosing unit:\n");
    printf("T: tera E12 | G: giga E9  | M: mega E6 | k: kilo E3  |\n");
    printf("m: milli E-3| u: micro E-6| n: nano E-9| p: pico E-12| N: none\n");
    printf("Choosing: ");
    scanf(" %c", &unit);
    if(unit == 'T')
        x = x * powl(10, 12);
    else if(unit == 'G')
        x = x * powl(10, 9);
    else if(unit == 'M')
        x = x * powl(10, 6);
    else if(unit == 'k')
        x = x * powl(10, 3);
    else if(unit == 'm')
        x = x * powl(10, -3);
    else if(unit == 'u')
        x = x * powl(10, -6);
    else if(unit == 'n')
        x = x * powl(10, -9);
    else if(unit == 'p')
        x = x * powl(10, -12);
    else if(unit == 'N')
        x = x;
    else
        x = 0;
    return x;
}


int main()
{
    float V;
    float R;
    float I;
    float W;
    float q;
    int choice = 0;
    char ohm;
    char electric_potential;
    char unit;
    float e;
    float Q;
    float F;
    float k;
    float q1;
    float q2;
    float r;
    float E;
    char electrical_field;
    char binary;
    float ratio_q1;
    float ratio_q2;
    float Q1;
    float Q2;
    char electrical_force;
    char electrical_charges;
    char current_flow;
    float t;
    float L;
    float A;
    float p;
    char resistance;
    char material;
    char electric_power;
    float P;
    char decide;
    char electric_energy;
    float n;
    float Pout;
    float Pin;
    char efficiency;
    char R_total;
    int R_count;
    float sum = 0;
    char current;
    float I1;
    float I2;
    float R1;
    float R2;

    while(choice == 0)
    {
        do
        {
            printf("\nChoosing your calculator(pressing 0 to return to this menu): \n");
            printf(" 1) OHM'S LAW\n");
            printf(" 2) ELECTRIC POTENTIAL\n");
            printf(" 3) ELECTRICAL CHARGES\n");
            printf(" 4) CURRENT FLOW OF CHARGES\n");
            printf(" 5) ELECTRIC FIELD\n");
            printf(" 6) ELECTRIC FORCE\n");
            printf(" 7) RESISTANCE OF AN ELECTRICAL WIRES\n");
            printf(" 8) ELECTRIC POWER\n");
            printf(" 9) ELECTRIC ENERGY\n");
            printf("10) POWER(ENERGY) TRANSFER EFFICIENCY\n");
            printf("11) RESISTOR TOTAL\n");
            printf("12) CURRENT IN TWO RESISTANCES PARALLEL\n");
      
            printf("Choosing: ");
            scanf("%d", &choice);
        }while(choice < 0 || choice > 12);

        switch(choice)
        {
            //OHM'S LAW
            case 1:
                printf("OHM'S LAW\n");
                printf("What are you finding? V|R|I: ");
                scanf(" %c", &ohm);
                if(ohm == 'V')
                {
                    printf("Enter I: ");
                    scanf("%f", &I);
                    I = convert_unit(I, unit);
                    if(R == 0)
                    {   choice = 0;
                        break;
                    }

                    printf("Enter R: ");
                    scanf("%f", &R);
                    R = convert_unit(R, unit);
                    if(R == 0)
                    {   choice = 0;
                        break;
                    }

                    V = I * R;
                    printf("V = %f\n", V);
                    choice = 0;
                }
                else if(ohm == 'R')
                {
                    printf("Enter V: ");
                    scanf("%f", &V);
                    V = convert_unit(V, unit);
                    if(V == 0)
                    {   
                        choice = 0;
                        break;
                    }

                    printf("Enter I: ");
                    scanf("%f", &I);
                    convert_unit(I, unit);
                    if(I == 0)
                    {   
                        choice = 0;
                        break;
                    }

                    R = V / I;
                    printf("R = %f\n", R);
                    choice = 0;
                }
                else if(ohm == 'I')
                {
                    printf("Enter V: ");
                    scanf("%f", &V);
                    V = convert_unit(V, unit);
                    if(V == 0)
                    {   
                        choice = 0;
                        break;
                    }
                   
                    printf("Enter R: ");
                    scanf("%f", &R);
                    R = convert_unit(R, unit);
                    if(R == 0)
                    {   
                        choice = 0;
                        break;
                    }

                    I = V / R;
                    printf("I = %f\n", I);
                    choice = 0;
                }
                else
                {
                    choice = 0;
                }
                break;
            
            //ELECTRIC POTENTIAL
            case 2:
                printf("ELECTRIC POTENTIAL\n");
                printf("WHAT ARE YOU FINDING? V|W|q: ");
                scanf(" %c", &electric_potential);
                if(electric_potential == 'V')
                {
                    printf("Enter W: ");
                    scanf("%f", &W);
                    W = convert_unit(W, unit);
                    if(W == 0)
                    {   
                        choice = 0;
                        break;
                    }
        
                    printf("Enter q: ");
                    scanf("%f", &q);
                    q = convert_unit(q, unit);
                    if(q == 0)
                    {   
                        choice = 0;
                        break;
                    }

                    V = W / q;

                    printf("V = %f\n", V);
                    choice = 0;
                }
                else if(electric_potential == 'W')
                {
                    printf("Enter V: ");
                    scanf("%f", &V);
                    V = convert_unit(V, unit);
                    if(V == 0)
                    {   
                        choice = 0;
                        break;
                    }

                    printf("Enter q: ");
                    scanf("%f", &q);
                    q = convert_unit(q, unit);
                    if(q == 0)
                    {   
                        choice = 0;
                        break;
                    }

                    W = V * q;
                    printf("W = %f\n", W);
                    choice = 0;
                }
                else if(electric_potential == 'q')
                {
                    printf("Enter W: ");
                    scanf("%f", &W);
                    W = convert_unit(W, unit);
                    if(W == 0)
                    {   
                        choice = 0;
                        break;
                    }

                    printf("Enter V: ");
                    scanf("%f", &V);
                    V = convert_unit(V, unit);
                    if(V == 0)
                    {   
                        choice = 0;
                        break;
                    }
                   
                    q = W / V;
                    printf("q = %f\n", q);
                    choice = 0;
                }
                else
                {
                    choice = 0;
                }
                break;

            //Electrical charges
            case 3:
                printf("ELECTRICAL CHARGES\n");
                printf("What unit you want to enter? e|Q?: ");
                scanf(" %c", &electrical_charges);
                if(electrical_charges == 'e')
                {
                    printf("Enter e: ");
                    scanf("%f", &e);
                    e = convert_unit(e, unit);
                    if(e == 0)
                    {   
                        choice = 0;
                        break;
                    }

                    Q = e * (1.6 * powl(10, -19));
                    printf("Q = %f\n", Q);
                    choice = 0;
                }
                else if(electrical_charges == 'Q')
                {
                    printf("Enter Q: ");
                    scanf("%f", &Q);
                    Q = convert_unit(Q, unit);
                    if(Q == 0)
                    {   
                        choice = 0;
                        break;
                    }

                    e = Q / (1.6 * powl(10, -19));
                    printf("e = %f\n", e);
                    choice = 0;
                }
                else
                    choice = 0;
                break;

            //Current flow of charges
            case 4:
                printf("CURRENT FLOW OF CHARGES\n");
                printf("What are you finding? I|Q|t(in second): ");
                scanf(" %c", &current_flow);
                if(current_flow == 'I')
                {
                    printf("Enter Q: ");
                    scanf("%f", &Q);
                    Q = convert_unit(Q, unit);
                    if(Q == 0)
                    {   
                        choice = 0;
                        break;
                    }

                    printf("Enter t in second: ");
                    scanf("%f", &t);
                    t = convert_unit(t, unit);
                    if(t == 0)
                    {   
                        choice = 0;
                        break;
                    }

                    I = Q/t;
                    printf("I = %f\n", I);
                    choice = 0;
                }
                else if(current_flow == 'Q')
                {
                    printf("Enter I: ");
                    scanf("%f", &I);
                    I = convert_unit(I, unit);
                    if(I == 0)
                    {   
                        choice = 0;
                        break;
                    }

                    printf("Enter t in second: ");
                    scanf("%f", &t);
                    t = convert_unit(t, unit);
                    if(t == 0)
                    {   
                        choice = 0;
                        break;
                    }

                    Q = I * t;
                    printf("Q = %f\n", Q);
                    choice = 0;
                }
                else if(current_flow == 't')
                {
                    printf("Enter Q: ");
                    scanf("%f", &Q);
                    Q = convert_unit(Q, unit);
                    if(Q == 0)
                    {   
                        choice = 0;
                        break;
                    }

                    printf("Enter I: ");
                    scanf("%f", &I);
                    I = convert_unit(I, unit);
                    if(I == 0)
                    {   
                        choice = 0;
                        break;
                    }

                    t = Q/I;
                    printf("t = %f\n", t);
                    choice = 0;
                }
                else
                    choice = 0;
                break;

            //Electric field
            case 5:
                printf("ELECTRIC FIELD\n");
                printf("What are you finding? E|q|r: ");
                scanf(" %c", &electrical_field);
                if(electrical_field == 'E')
                {   
                    printf("Enter q: ");
                    scanf("%f", &q);
                    q = convert_unit(q, unit);
                    if(q == 0)
                    {   
                        choice = 0;
                        break;
                    }

                    printf("Enter r: ");
                    scanf("%f", &r);
                    r = convert_unit(r, unit);
                    if(r == 0)
                    {   
                        choice = 0;
                        break;
                    }

                    E = (9 * powl(10, 9)) * (q/(r* r));
                    printf("E = %f\n", E);
                    choice = 0;
                }
                else if(electrical_field == 'q')
                {
                    printf("Enter E: ");
                    scanf("%f", &E);
                    E = convert_unit(E, unit);
                    if(E == 0)
                    {   
                        choice = 0;
                        break;
                    }

                    printf("Enter r: ");
                    scanf("%f", &r);
                    r = convert_unit(r, unit);
                    if(r == 0)
                    {   
                        choice = 0;
                        break;
                    }

                    q = (E/(9 * powl(10, 9))) * (r*r); 
                    printf("E = %f\n", q);
                    choice = 0;
                }
                else if(electrical_field == 'r')
                {
                    printf("Enter E: ");
                    scanf("%f", &E);
                    E = convert_unit(E, unit);
                    if(E == 0)
                    {   
                        choice = 0;
                        break;
                    }

                    printf("Enter q: ");
                    scanf("%f", &q);
                    q = convert_unit(q, unit);
                    if(q == 0)
                    {   
                        choice = 0;
                        break;
                    }

                    r = sqrt(q / (E / (9 * powl(10, 9))));
                    printf("r = %lf\n", r);
                    choice = 0;
                }
                else
                    choice = 0; 
                break;

            //Electric Force
            case 6:
                printf("ELECTRIC FORCE\n");
                printf("Do you want enter ratio of q1/q2 and solve q1 and q2 (REQUIRE GIVEN F AND  GIVEN R)? Y|N: ");
                scanf(" %c", &binary);
                if(binary == 'Y')
                {
                    printf("ratio q1 = ");
                    scanf("%f", &ratio_q1);
                    printf("ratio q2 = ");
                    scanf("%f", &ratio_q2);
                    printf("the ratio of q1/q2 = %f/%f\n", ratio_q1, ratio_q2);
                    Q1 = q1 * q1 * ratio_q2;
                    // q1 = ratio_q1 * q2; 


                    printf("Enter F: ");
                    scanf("%f", &F);
                    F = convert_unit(F, unit);
                    if(F == 0)
                    {   
                        choice = 0;
                        break;
                    }

                    printf("Enter r(distance between them in meter): ");
                    scanf("%f", &r);
                    r = convert_unit(r, unit);
                    if(r == 0)
                    {   
                        choice = 0;
                        break;
                    }

                    Q1 = (F/(9 * powl(10, 9))) * (r * r);
                    q1 = sqrt(Q1/ratio_q2);
                    q2 = ratio_q2 * q1;
                    printf("q1 = %f\n", q1);
                    printf("q2 = %f\n", q2);
                    choice = 0;   
                }
                else if(binary == 'N')
                {
                    printf("What are you finding? F|q1|q2|r: ");
                    scanf(" %c", &electrical_force);
                    if(electrical_force == 'F')
                    {
                        printf("Enter q1: ");
                        scanf("%f", &q1);
                        q1 = convert_unit(q1, unit);
                        if(q1 == 0)
                        {   
                            choice = 0;
                            break;
                        }

                        printf("Enter q2: ");
                        scanf("%f", &q2);
                        q2 = convert_unit(q2, unit);
                        if(q2 == 0)
                        {   
                            choice = 0;
                            break;
                        }

                        printf("Enter r(distance between them in meter): ");
                        scanf("%f", &r);
                        r  = convert_unit(r, unit);
                        if(r == 0)
                        {   
                            choice = 0;
                            break;
                        }

                        F = 9 * powl(10, 9) * (q1 * q2)/(r * r);
                        printf("F = %f\n", F);
                        choice = 0;
                    }
                    else if(electrical_force == 'q1')
                    {
                        printf("Enter F: ");
                        scanf("%f", &F);
                        F = convert_unit(F, unit);
                        if(F == 0)
                        {   
                            choice = 0;
                            break;
                        }

                        printf("Enter q2: ");
                        scanf("%f", &q2);
                        q2 = convert_unit(q2, unit);
                        if(q2 == 0)
                        {   
                            choice = 0;
                            break;
                        }

                        printf("Enter r(distance between them in meter): ");
                        scanf("%f", &r);
                        r = convert_unit(r, unit);
                        if(r == 0)
                        {   
                            choice = 0;
                            break;
                        }

                        q1 = (F/(9 * powl(10, 9)) * (r * r))/q2;
                        printf("q1 = %f\n", q1);
                        choice = 0;
                    }
                    else if(electrical_force == 'q2')
                    {
                        printf("Enter F: ");
                        scanf("%f", &F);
                        F = convert_unit(F, unit);
                        if(F == 0)
                        {   
                            choice = 0;
                            break;
                        }

                        printf("Enter q1: ");
                        scanf("%f", &q1);
                        q1 = convert_unit(q1, unit);
                        if(q1 == 0)
                        {   
                            choice = 0;
                            break;
                        }

                        printf("Enter r(distance between them in meter): ");
                        scanf("%f", &r);
                        r = convert_unit(r, unit);
                        if(r == 0)
                        {   
                            choice = 0;
                            break;
                        }

                        q2 = (F/(9 * powl(10, 9)) * (r * r))/q1;
                        printf("q2 = %f\n", q2);
                        choice = 0;
                    }
                    else if(electrical_force == 'r')
                    {
                        printf("Enter F: ");
                        scanf("%f", &F);
                        F = convert_unit(F, unit);
                        if(F == 0)
                        {   
                            choice = 0;
                            break;
                        }

                        printf("Enter q1: ");
                        scanf("%f", &q1);
                        q1 = convert_unit(q1, unit);
                        if(q1 == 0)
                        {   
                            choice = 0;
                            break;
                        }

                        printf("Enter q2: ");
                        scanf("%f", &q2);
                        q2 = convert_unit(q2, unit);
                        if(q2 == 0)
                        {   
                            choice = 0;
                            break;
                        }

                        r = sqrt((q1 * q2)/(F/(9 * powl(10, 9))));
                        printf("r = %f\n", r);
                        choice = 0;
                    }
                    else
                        choice = 0;
                }
                else
                    choice = 0;
                break;
            
            //RESISTANCE OF AN ELECTRICAL WIRES
            case 7:
                printf("RESISTANCE OF AN ELECTRICAL WIRES\n");
                printf("Choosing material:\n");
                printf("S for Silver 1.59E-8| C for Copper 1.68E-8 | G for Gold 2.44E-8 | A for Aluminum 2.82E-8 | I for Iron 1.00E-7\n");
                printf("Choosing: ");
                scanf(" %c", &material);
                if(material == 'S')
                    p = 1.59 * powl(10, -8);
                else if(material == 'C')
                    p = 1.68 * powl(10, -8);
                else if(material == 'G')
                    p = 2.44 * powl(10, -8);
                else if(material == 'A')
                    p = 2.82 * powl(10, -8);
                else if(material == 'I')
                    p = 1.00 * powl(10, -7);
             
                printf("What are you finding? R|L(in m)|r(in m): ");
                scanf(" %c", &resistance);

                if(resistance == 'R')
                {
                    printf("Enter L: ");
                    scanf("%f", &L);
                    L = convert_unit(L, unit);
                    if(L == 0)
                    {   
                        choice = 0;
                        break;
                    }

                    printf("Enter r: ");
                    scanf("%f", &r);
                    r = convert_unit(r, unit);
                    if(r == 0)
                    {   
                        choice = 0;
                        break;
                    }

                    A = 3.14 * (r * r);
                    R = p * (L/A);
                    printf("R = %f\n", R);
                    choice = 0;
                }
                else if(resistance == 'L')
                {
                    printf("Enter R: ");
                    scanf("%f", &R);
                    R = convert_unit(R, unit);
                    if(R == 0)
                    {   
                        choice = 0;
                        break;
                    }

                    printf("Enter r: ");
                    scanf("%f", &r);
                    r = convert_unit(r, unit);
                    if(r == 0)
                    {   
                        choice = 0;
                        break;
                    }

                    A = 3.14 * (r * r);
                    L = (R/p) * A;
                    printf("L = %f\n", L);
                    choice = 0;
                }
                else if(resistance == 'r')
                {
                    printf("Enter R: ");
                    scanf("%f", &R);
                    R = convert_unit(R, unit);
                    if(R == 0)
                    {   
                        choice = 0;
                        break;
                    }

                    printf("Enter L: ");
                    scanf("%f", &L);
                    L = convert_unit(L, unit);
                    if(L == 0)
                    {   
                        choice = 0;
                        break;
                    }

                    A = L/(R/p);
                    r = sqrt(A/3.14);
                    printf("r = %f\n", r);
                    choice = 0;
                }
                else
                    choice = 0;
                break;

            //ELECTRIC POWER
            case 8:
                printf("ELECTRIC POWER\n");
                printf("Choosing formula: 1) P = W/t | 2) P = VI | 3) P = I^2R | 4) P = V^2R: ");
                scanf(" %c", &decide);
                if(decide == '1')
                {
                    printf("What are you finding? P|W|t(in second): ");
                    scanf(" %c", &electric_power);
                    if(electric_power == 'P')
                    {
                        printf("Enter W: ");
                        scanf("%f", &W);
                        W = convert_unit(W, unit);
                        if(W == 0)
                        {   
                            choice = 0;
                            break;
                        }

                        printf("Enter t in second: ");
                        scanf("%f", &t);
                        t = convert_unit(t, unit);
                        if(t == 0)
                        {   
                            choice = 0;
                            break;
                        }

                        P = W/ t;
                        printf("P = %f\n", P);
                        choice = 0;
                    }
                    else if(electric_power == 'W')
                    {
                        printf("Enter P: ");
                        scanf("%f", &P);
                        P = convert_unit(P, unit);
                        if(P == 0)
                        {   
                            choice = 0;
                            break;
                        }

                        printf("Enter t in second: ");
                        scanf("%f", &t);
                        t = convert_unit(t, unit);
                        if(t == 0)
                        {   
                            choice = 0;
                            break;
                        }

                        W = P * t;
                        printf("W = %f\n", W);
                        choice = 0;
                    }
                    else if(electric_power == 't')
                    {
                        printf("Eneter W: ");
                        scanf("%f", &W);
                        W = convert_unit(W, unit);
                        if(W == 0)
                        {   
                            choice = 0;
                            break;
                        }

                        printf("Enter P: ");
                        scanf("%f", &P);
                        P = convert_unit(P, unit);
                        if(P == 0)
                        {   
                            choice = 0;
                            break;
                        }

                        t = W/P;
                        printf("t = %f\n", t);
                        choice = 0;
                    }
                    else
                        choice = 0;
                }
                else if(decide == '2')
                {    
                    printf("What are you finding? P|V|I: ");
                    scanf(" %c", &electric_power);
                    if(electric_power == 'P')
                    {
                        printf("Enter V: ");
                        scanf("%f", &V);
                        V = convert_unit(V, unit);
                        if(V == 0)
                        {   
                            choice = 0;
                            break;
                        }

                        printf("Enter I: ");
                        scanf("%f", &I);
                        I = convert_unit(I, unit);
                        if(I == 0)
                        {   
                            choice = 0;
                            break;
                        }

                        P = V * I;
                        printf("P = %f\n", P);
                        choice = 0;
                    }
                    else if(electric_power == 'V')
                    {
                        printf("Enter P: ");
                        scanf("%f", &P);
                        P = convert_unit(P, unit);
                        if(P == 0)
                        {   
                            choice = 0;
                            break;
                        }

                        printf("Enter I: ");
                        scanf("%f", &I);
                        I = convert_unit(I, unit);
                        if(I == 0)
                        {   
                            choice = 0;
                            break;
                        }

                        V = P / I;
                        printf("V = %f\n", V);
                        choice = 0;
                    }
                    else if(electric_power == 'I')
                    {
                        printf("Enter P: ");
                        scanf("%f", &P);
                        P = convert_unit(P, unit);
                        if(P == 0)
                        {   
                            choice = 0;
                            break;
                        }

                        printf("Enter V: ");
                        scanf("%f", &V);
                        V = convert_unit(V, unit);
                        if(V == 0)
                        {   
                            choice = 0;
                            break;
                        }

                        I = P/V;
                        printf("I = %f\n", I);
                        choice = 0;
                    }
                    else
                        choice = 0;
                }
                else if(decide == '3')
                {   
                    printf("What are you finding? P|I|R: ");
                    scanf(" %c", &electric_power);
                    if(electric_power == 'P')
                    {
                        printf("Enter I: ");
                        scanf("%f", &I);
                        I = convert_unit(I, unit);
                        if(I == 0)
                        {   
                            choice = 0;
                            break;
                        }

                        printf("Enter R: ");
                        scanf("%f", &R);
                        R = convert_unit(R, unit);
                        if(R == 0)
                        {   
                            choice = 0;
                            break;
                        }

                        P = (I * I) * R;
                        printf("P = %f\n", P);
                        choice = 0; 
                    }
                    else if(electric_power == 'I')
                    {
                        printf("Enter P: ");
                        scanf("%f", &P);
                        P = convert_unit(P, unit);
                        if(P == 0)
                        {   
                            choice = 0;
                            break;
                        }

                        printf("Enter R: ");
                        scanf("%f", &R);
                        R = convert_unit(R, unit);
                        if(R == 0)
                        {   
                            choice = 0;
                            break;
                        }

                        I = sqrt(P/R);
                        printf("I = %f\n", I);
                        choice = 0;
                    }
                    else if(electric_power == 'R')
                    {
                        printf("Enter P: ");
                        scanf("%f", &P);
                        P = convert_unit(P, unit);
                        if(P == 0)
                        {   
                            choice = 0;
                            break;
                        }

                        printf("Enter I: ");
                        scanf("%f", &I);
                        I = convert_unit(I, unit);
                        if(I == 0)
                        {   
                            choice = 0;
                            break;
                        }

                        R = P/(I * I);
                        printf("R = %f\n", R);
                        choice = 0;
                    }
                    else
                        choice = 0;
                }
                else if(decide == '4')
                {    
                    printf("What are you finding? P|V|R: ");
                    scanf(" %c", &electric_power);
                    if(electric_power == 'P')
                    {
                        printf("Enter V: ");
                        scanf("%f", &V);
                        V = convert_unit(V, unit);
                        if(V == 0)
                        {   
                            choice = 0;
                            break;
                        }

                        printf("Enter R: ");
                        scanf("%f", &R);
                        R = convert_unit(R, unit);
                        if(R == 0)
                        {   
                            choice = 0;
                            break;
                        }

                        P = (V * V)/R;
                        printf("P = %f\n", P);
                        choice = 0;
                    }
                    else if(electric_power == 'V')
                    {
                        printf("Enter P: ");
                        scanf("%f", &P);
                        P = convert_unit(P, unit);
                        if(P == 0)
                        {   
                            choice = 0;
                            break;
                        }

                        printf("Enter R: ");
                        scanf("%f", &R);
                        R = convert_unit(R, unit);
                        if(R == 0)
                        {   
                            choice = 0;
                            break;
                        }

                        V = sqrt(P/R);
                        printf("V = %f\n", V);
                        choice = 0;
                    }
                    else if(electric_power == 'R')
                    {
                        printf("Enter V: ");
                        scanf("%f", &V);
                        V = convert_unit(V, unit);
                        if(V == 0)
                        {   
                            choice = 0;
                            break;
                        }

                        printf("Enter P: ");
                        scanf("%f", &P);
                        P = convert_unit(P, unit);
                        if(P == 0)
                        {   
                            choice = 0;
                            break;
                        }

                        R = (V * V)/P;
                        printf("R = %f\n", R);
                        choice = 0;
                    }
                    else
                        choice = 0;
                }
                else
                    choice = 0;
                break;

            //ELECTRIC ENERGY
            case 9:
                printf("ELECTRIC ENERGY\n");
                printf("What are you finding? E|P|t(in second): ");
                scanf(" %c", &electric_energy);
                if(electric_energy == 'E')
                {
                    printf("Enter P: ");
                    scanf("%f", &P);
                    P = convert_unit(P, unit);
                    if(P == 0)
                    {   
                        choice = 0;
                        break;
                    }

                    printf("Enter t in second: ");
                    scanf("%f", &t);
                    t = convert_unit(t, unit);
                    if(t == 0)
                    {   
                        choice = 0;
                        break;
                    }

                    E = P * t;
                    printf("E = %f\n", E);
                    choice = 0;
                }
                else if(electric_energy == 'P')
                {
                    printf("Enter E: ");
                    scanf("%f", &E);
                    E = convert_unit(E, unit);
                    if(E == 0)
                    {   
                        choice = 0;
                        break;
                    }

                    printf("Enter t in second: ");
                    scanf("%f", &t);
                    t = convert_unit(t, unit);
                    if(t == 0)
                    {   
                        choice = 0;
                        break;
                    }

                    P = E/ t;
                    printf("P = %f\n", P);
                    choice = 0;
                }
                else if(electric_energy == 't')
                {
                    printf("Enter E: ");
                    scanf("%f", &E);
                    E = convert_unit(E, unit);
                    if(E == 0)
                    {   
                        choice = 0;
                        break;
                    }

                    printf("Enter P: ");
                    scanf("%f", &P);
                    P = convert_unit(P, unit);
                    if(P == 0)
                    {   
                        choice = 0;
                        break;
                    }

                    t = P/ E;
                    printf("t = %f\n", t);
                    choice = 0;
                }
                else
                    choice = 0;
                break;
            
            //POWER (ENERGY) TRANSFER EFFICIENCY
            case 10:
                printf("POWER (ENERGY) TRANSFER EFFICIENCY\n");
                printf("What are you finding? n|o for Pout| i for Pin: ");
                scanf(" %c", &efficiency);
                if(efficiency == 'n')
                {
                    printf("Enter Pout: ");
                    scanf("%f", &Pout);
                    Pout = convert_unit(Pout, unit);
                    if(Pout == 0)
                    {   
                        choice = 0;
                        break;
                    }

                    printf("Enter Pint: ");
                    scanf("%f", &Pin);
                    Pin = convert_unit(Pin, unit);
                    if(Pin == 0)
                    {   
                        choice = 0;
                        break;
                    }

                    n = (Pout / Pin) * 100;
                    printf("n = %f percent\n", n);
                    choice = 0;
                }
                else if(efficiency == 'o')
                {
                    printf("Enter n: ");
                    scanf("%f", &n);
                    n = convert_unit(n, unit);
                    if(n == 0)
                    {   
                        choice = 0;
                        break;
                    }

                    printf("Enter Pin: ");
                    scanf("%f", &Pin);
                    Pin = convert_unit(Pin, unit);
                    if(Pin == 0)
                    {   
                        choice = 0;
                        break;
                    }

                    Pout = (n / 100) * Pin;
                    printf("Pout = %f\n", Pout);
                    choice = 0;
                }
                else if(efficiency == 'i')
                {
                    printf("Enter n: ");
                    scanf("%f", &n);
                    n = convert_unit(n, unit);
                    if(n == 0)
                    {   
                        choice = 0;
                        break;
                    }

                    printf("Enter Pout: ");
                    scanf("%f", &Pout);
                    Pout = convert_unit(Pout, unit);
                    if(Pout == 0)
                    {   
                        choice = 0;
                        break;
                    }

                    Pin = Pout / (n / 100);
                    printf("Pin = %f\n", Pin);
                    choice = 0;
                }
                else
                    choice = 0;
                break;

            //RESISTOR TOTAL
            case 11:
                printf("RESISTOR TOTAL\n");
                printf("Choosing Series or Parallel? S|P: ");
                scanf(" %c", &R_total);
                if(R_total == 'S')
                {
                    printf("Enter total number of resistors: ");
                    scanf("%d", &R_count);
                    float R_arr[R_count];
                    for(int i = 1; i <= R_count; i++)
                    {
                        printf("R%d =  ", i);
                        scanf("%f", &R_arr[i]);
                        R_arr[i] = convert_unit(R_arr[i], unit);
                        if(R_arr[i] == 0)
                        {   
                            choice = 0;
                            break;
                        }
                    }
                    for(int i = 1; i <= R_count; i++)
                    {
                        sum = sum + R_arr[i];
                    }
                    printf("Rt = %f\n", sum);
                    sum = 0;
                    choice = 0;
                }
                else if(R_total == 'P')
                {
                    printf("Enter total number of resistors: ");
                    scanf("%d", &R_count);
                    float R_arr[R_count];
                    for(int i = 1; i <= R_count; i++)
                    {
                        printf("R%d = ", i);
                        scanf("%f", &R_arr[i]);
                        R_arr[i] = convert_unit(R_arr[i], unit);
                        if(R_arr[i] == 0)
                        {   
                            choice = 0;
                            break;
                        }
                    }
                    for(int i = 1; i <= R_count; i++)
                    {
                        sum = sum + 1/R_arr[i];
                    }
                    printf("Rt = %f\n", 1/sum);
                    sum = 0;
                    choice = 0;
                }
                else
                    choice = 0;
                break;

            //CURRENT IN TWO RESISTANCES PARALLEL 
            case 12:
                printf("CURRENT IN TWO RESISTANCES PARALLEL\n");
                printf("What are you finding? I| 1 for I of R1 | 2 for I of R2: ");
                scanf(" %c", &current);
                if(current == '1')
                {
                    printf("Enter I: ");
                    scanf("%f", &I);
                    I = convert_unit(I, unit);
                    if(I == 0)
                    {   
                        choice = 0;
                        break;
                    }

                    printf("Enter R2: ");
                    scanf("%f", &R2);
                    R2 = convert_unit(R2, unit);
                    if(R2 == 0)
                    {   
                        choice = 0;
                        break;
                    }

                    printf("Enter R1: ");
                    scanf("%f", &R1);
                    R1 = convert_unit(R1, unit);
                    if(R1 == 0)
                    {   
                        choice = 0;
                        break;
                    }

                    I1 = I * (R2/ (R1 + R2));
                    printf("I1 = %f\n", I1);
                    choice = 0;
                }
                else if(current == '2')
                {
                    printf("Enter I: ");
                    scanf("%f", &I);
                    I = convert_unit(I, unit);
                    if(I == 0)
                    {   
                        choice = 0;
                        break;
                    }
                    
                    printf("Enter R1: ");
                    scanf("%f", &R1);
                    R1 = convert_unit(R1, unit);
                    if(R1 == 0)
                    {   
                        choice = 0;
                        break;
                    }

                    printf("Enter R2: ");
                    scanf("%f", &R2);
                    R2 = convert_unit(R2, unit);
                    if(R2 == 0)
                    {   
                        choice = 0;
                        break;
                    }

                    I2 = I * (R1/(R1 + R2));
                    printf("I2 = %f\n", I2);
                    choice = 0;

                }
                else if(current == 'I')
                {
                    printf("Choosing 1 for given I1 | 2 for given I2: ");
                    scanf(" %c", &binary);
                    if(binary == '1')
                    {
                        printf("Enter I1: ");
                        scanf("%f", &I1);
                        I1 = convert_unit(I1, unit);
                        if(I1 == 0)
                        {   
                            choice = 0;
                            break;
                        }

                        printf("Enter R2: ");
                        scanf("%f", &R2);
                        R2 = convert_unit(R2, unit);
                        if(R2 == 0)
                        {   
                            choice = 0;
                            break;
                        }

                        printf("Enter R1: ");
                        scanf("%f", &R1);
                        R1 = convert_unit(R1, unit);
                        if(R1 == 0)
                        {   
                            choice = 0;
                            break;
                        }

                        I = I1 / (R2/(R1 + R2));
                        printf("I = %f\n", I);
                        choice = 0;
                    }
                    else if(binary == '2')
                    {
                        printf("Enter I2: ");
                        scanf("%f", &I2);
                        I2 = convert_unit(I2, unit);
                        if(I2 == 0)
                        {   
                            choice = 0;
                            break;
                        }

                        printf("Enter R1: ");
                        scanf("%f", &R1);
                        R1 = convert_unit(R1, unit);
                        if(R1 == 0)
                        {   
                            choice = 0;
                            break;
                        }

                        printf("Enter R2: ");
                        scanf("%f", &R2);
                        R2 = convert_unit(R2, unit);
                        if(R2 == 0)
                        {   
                            choice = 0;
                            break;
                        }

                        I = I2 / (R1/(R1 + R2));
                        printf("I = %f\n", I);
                        choice = 0;
                    }
                    else
                        choice = 0;
                }
                else
                    choice = 0;
                break;               
        }
    }            
    return 0;
}