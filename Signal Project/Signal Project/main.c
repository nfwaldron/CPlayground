/* Nathan Waldron

 * Project 2: Signal Code

 * May 1, 2014

 * This program does the following:

 * Reads in the X,Y cordinations of two locations.

 * Determines the distance between two locations in either kilometers or miles, depending on user preference.

 * Determines the amount of power in watts per unit of distance needed to transmit a signal between the two coordinates.

 */




#include <stdio.h>

#include <stdlib.h>

#include <math.h>




/* Function Description:

 * Reads in the values of two coordinates on the X,Y plane and calculates

 * the distance between the two coordinates using the formula

 * √ ((x2-x1)^2 + (y2-y1)^2). 

 * Pre: The values of the first two function arguements must be the X,Y coordinates of the first location,

 * and the last two arguements must be the X,Y coordinates of the second location.

 * Post: To utilize the result of this function in the main program,

 * assign to a variable declared in the main function.

 */


double calculate_distance (double x_prime, double y_prime, double x_second, double y_second);



/* Function Description:

 * Reads in the value of an arguement, in this case 'distance' and multiplies that value by 2.5

 * Pre: None

 * Post: To utilize the result of this function in the main program, 

 * assign to a variable declared in the main function.

 */




double calculate_wattage_km (double distance);




/* Function Description:

 * Reads in the value of an arguement, in this case 'distance' and multiplies that value by 4.02

 * Pre: None

 * Post: To utilize the result of this function in the main program,

 * assign to a variable declared in the main function.

 */




double calculate_wattage_miles (double distance);







int main(int argc, const char * argv[])

{

    double x_coord_prime; /* X-plane coordinates of the primary location */

    double y_coord_prime; /* Y-plane coordinates of the primary location */

    double x_coord_second; /* X-plane coordinates of the secondary location */

    double y_coord_second; /* Y-plane coordinates of the secondary location */

    double watts_needed_for_transmission; /* The power in watts needed to trasmit a signal */

    double distance;

    char distance_unit; /* The units of distance between locations either 'k' for kilometers or 'm' for miles */

    

    /* Get the coordinates of the cellphone tower */

    printf("Please enter the X coordinate of the cell phone tower:\n");

    scanf("%lf", &x_coord_prime);

    

    printf("Please enter the Y coordinate of the cell phone tower:\n");

    scanf("%lf", &y_coord_prime);

    

    /* Get the coordinates of the key location */

    printf("Please enter the X coordinate of the location you\nwant to broadcast the signal to:\n");

    scanf("%lf", &x_coord_second);

    

    printf("Please enter the y coordinate of the location you\nwant to broadcast the signal to:\n");

    scanf("%lf", &y_coord_second);

    

     

    /* Request that user enter what unit of measurement they want the result to be reported in i.e. kilometers

     * or miles. */

    do {

    printf("Please what unit of distance measurement the power will be calculated in.");

    printf("\nEnter 'm' if you would like the power to be calculated in watts\nper mile, and enter 'k'");

    printf(" if you would like the power to be calculated\nin watts per kilometers:\n");

    scanf("\n%c", &distance_unit);

    }

    

    while (distance_unit != 'm' && distance_unit != 'M' && distance_unit != 'k' && distance_unit != 'K');

    

    if (distance_unit == 'k' || distance_unit == 'K') {

        

        /* Call the function that calculates the distance between the cellphone tower and the key location

         * and store the result in the variable 'distance' */

        distance = calculate_distance(x_coord_prime, y_coord_prime, x_coord_second, y_coord_second);

        

        /* Call the function that calculates the power needed to transmit a signal between the cellphone tower

         * and the key location, and store the result in the variable watts_needed_for_transmission */

        watts_needed_for_transmission = calculate_wattage_km(distance);

        

       

        /* Output the result of the calculation for the user to see */

        printf("The distance between the cellphone tower and the key location is %.2f\nkilometers,", distance);

        printf(" and the power necessary to transmit a signal over this distance\nis %.2f watts per kilometer.\n",watts_needed_for_transmission);

    }




    

    else if (distance_unit == 'm' || distance_unit == 'M') {

        

        /* Call the function that calculates the distance between the cellphone tower and the key location

         * and store the result in the variable 'distance' */

        distance = calculate_distance(x_coord_prime, y_coord_prime, x_coord_second, y_coord_second);

        

        

        /* Call the function that calculates the power needed to transmit a signal between the cellphone tower

         * and the key location, and store the result in the variable 'watts_needed_for_transmission' */

        watts_needed_for_transmission = calculate_wattage_miles(distance);

        

        

        

        /* Output the result of the calculation for the user to see */

        printf("The distance between the cellphone tower and the key location is %.2f miles,\n", distance);

        printf("and the power necessary to transmit a signal over this distance is %.2f watts per mile.\n",watts_needed_for_transmission);

        

    }

  




    return 0;

}




double calculate_distance (double x_prime, double y_prime, double x_second, double y_second)

{

    double distance; /* Distance between the two (x,y) coordinates */

    double delta_x; /* Distance between the x coordinates */

    double delta_y; /* Distance between the y coordinates */

    double sum_sq_delta_x_and_y; /* Sum of the x and y deltas squared */

    

    /* Calculate the difference bewteen the x coordinates */

    delta_x = x_second - x_prime;

    

    /* Calculate the difference bewteen the y coordinates */

    delta_y = y_second - y_prime;

    

    /* Calculate the value of the sum of the distance between the x and y coordinates squared,

     * and store the result in the variable sum_sq_delta_x_and_y */

    sum_sq_delta_x_and_y = pow(delta_x, 2) + pow(delta_y, 2);

    

    /* Calculate the value of the square root of the sum of the squared x and y deltas */

    distance = sqrt(sum_sq_delta_x_and_y);

    

    return (distance);

}




double calculate_wattage_km (double distance)

{

    double power_watts_km; /* Power in watts per kilometer */

    

    /* Multiply the distance between the two coordinates by 2.5, which is the amount of watts 

     * needed to transmit a signal one kilometer of distance */

     

    power_watts_km = distance * 2.5;

    

    return (power_watts_km);

}




double calculate_wattage_miles (double distance)

{

    double power_watts_mile; /* Power in watts per mile */

    

    /* Multiply the distance between the two coordinates by 4.02, which is the amount of watts

     * needed to transmit a signal one mile of distance */

    

    power_watts_mile = distance * 4.02;

    

    return (power_watts_mile);




}
