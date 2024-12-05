/* 
  Problem-2
 1.A residential user has a grid connection and an average monthly electricity consumption 400 units (Parameter1).
 2.The government provides free electricity up to 200 units (Parameter2). 
 3.If the user consumes more than 200 units from the grid, they must pay 12 rupees per unit (Parameter3) for their entire consumption.
 4.User found an alternative energy source costing 15 Rupees per unit (Parameter4). 
 5.To avoid crossing the 200-unit grid limit, they plan to use the alternative source for part of their energy needs (Parameter5).

 Calculations
 1. Calculating the cost if the user relies entirely on the grid power.
 2. Calculating the cost if the user uses 200 units from the grid (free) and 200 units from the alternative source.
 3. Calculating the savings the user can achieve by using the alternative source.
 */

#include <stdio.h>
int main() 
{

    int total_consumption = 400;  // Total units consumed by the user
    int grid_free_limit = 200;    // Free units from grid
    int grid_cost_per_unit = 12;  // Cost per unit if limit is exceeded in rupees
    int alt_cost_per_unit = 15;   // Cost per unit for alternative source in rupees
    int alt_usage = total_consumption - grid_free_limit;  // Alternative usage. 200 = 400 - 200 

    //Cost without using alternative source
    int cost_without_alt = total_consumption * grid_cost_per_unit;

    //Cost with using alternative source
    int cost_with_alt = (grid_free_limit * 0) + (alt_usage * alt_cost_per_unit);

    // Savings
    int savings = cost_without_alt - cost_with_alt;

    // Output
    printf(" Problem - 2 Calculation results: \n");
    printf("Cost without alternative source: %d\n", cost_without_alt); 
    printf("Cost with alternative source: %d\n", cost_with_alt);
    printf("Savings: %d\n", savings); // total savings

    return 0;
}

