/* Problem -1
This program is to calculates the daily and monthly earnings from a solar panel system:

1. The solar panel has a maximum voltage rating of 100V and a maximum current rating is a 20A.
2. The microcontroller ADC has a maximum input voltage 3.3V.
3. Sensors are used to scale the solar panel voltage and current to the ADC input range.
4. Energy was generated during peak sunlight hours (assumed 5 hours per day).
5. The cost per unit of energy (1 kWh) 6 Rupees.

calculations:

1.Scales ADC voltage readings to the actual voltage and current of the solar panel.
2.Computing the total power output (in kW) based on the scaled voltage and current.
3.Calculating the energy generated in a day (in kWh).
4.Determining the daily and monthly earnings based on the energy produced.
*/

#include <stdio.h>
int main() 
{

    float max_adc_output = 3.3;           // Maximum ADC output voltage in volts
    float max_panel_voltage = 100.0;     // Maximum voltage of the solar panel in volts
    float max_panel_current = 20.0;      // Maximum current of the solar panel in  amps
    float unit_rate = 6.0;               // Cost per unit (1 kWh) in Rupees
    int sunlight_hours = 5;              // Peak sunlight hours per day assumption

    // Simulating ADC readings for maximum conditions
    float adc_voltage_reading = max_adc_output; // ADC voltage for maximum panel voltage
    float adc_current_reading = max_adc_output; // ADC voltage for maximum panel current

    // Calculating the actual voltage from ADC reading
    float actual_voltage = (adc_voltage_reading * max_panel_voltage) / max_adc_output;

    // Calculating the actual current from ADC reading
    float actual_current = (adc_current_reading * max_panel_current) / max_adc_output;

    // Computing power output in kilowatts
    float power_in_kw = (actual_voltage * actual_current) / 1000.0; // Power in kW

    // Energy generated in a day (in kWh)
    float energy_per_day = power_in_kw * sunlight_hours;

    // Calculating earnings in daily, monthly and annualy
    float daily_income = energy_per_day * unit_rate;
    float monthly_income = daily_income * 30; // For 30 days in a month
    float annual_income = daily_income * 365; // For 365 days in a year

    // Printing results
    printf("Problem - 1 Calculation results: \n");
    printf("Actual Voltage: %.2f V\n", actual_voltage);
    printf("Actual Current: %.2f A\n", actual_current);
    printf("Generated Power: %.2f kW\n", power_in_kw);
    printf("Energy Produced in a Day: %.2f kWh/day\n", energy_per_day);
    printf("Earnings Per Day: Rs. %.2f\n", daily_income);
    printf("Earnings Per Month: Rs. %.2f\n", monthly_income);
    printf("Earnings Per Year: Rs. %.2f\n", annual_income);
    
    return 0;
}

