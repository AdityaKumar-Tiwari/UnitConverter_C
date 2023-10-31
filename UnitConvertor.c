#include <stdio.h>

	int main()
	{
		char input ,start,choice;
		float Inch_to_meter=0.0254 ;
		float Pound_to_kgs=0.453592 ;
		float Kms_to_miles=0.621371 ;
		float Inches_to_foot=0.0833333 ;
		float Cms_to_Inches=0.393701 ;
		float meter_to_miles=0.000621371;
		float first, solution;
		
		printf("\t\t ......WELCOME TO UNIT CONVERTER...... \n");
		printf("If you want to start calculatior , then Press 's' Button.\n\n");
		scanf("%c",&start);
		
		if (start == 's')
		{
			printf("\t\t...... Let's start conversion .....\n");
			printf("Select one of the measuring unit.");
			printf(" \n1.Length\n 2.Mass\n 3.Capacity\n 4.Temperature\n 5.Time\n");
			scanf("%d",&input);
			
			switch(input)
			{
				case 1:
					printf("\t\t...You chosed for conversion in length... \n");
					
					printf("Select conversion to perform :\n");
					printf("1.Meter to Milimeter\n 2.Meter to Centimeter\n 3.Kilometer to Meter\n 4.Inches to Meter\n 5.Centimeter to Inches\n 6.Inches to Foot\n 7.Meter to Miles");
					scanf("%d",&choice);
					
					switch(choice)
				{
					case 1:
						printf("\t\t...You chosed Meter to Milimeter... \n");
						printf("Enter the value in terms of (Meter) unit :\n");
						scanf("%f",&first);
						solution = first * 1000;
						printf("%f Meter is equal to %f Milimeters \n",first , solution);
						break;
					case 2:
						printf("\t\t...You chosed Meter to Centimeter... \n");
						printf("Enter the value in terms of (Meter) unit :\n");
						scanf("%f",&first);
						solution = first * 100;
						printf("%f Meter is equal to %f centimeter \n",first , solution);
						break;
					case 3:
						printf("\t\t...You chosed Kilometer to Meter... \n");
						printf("Enter the value in terms of (Kms) unit :\n");
						scanf("%f",&first);
						solution = first * 1000;
						printf("%f Kms is equal to %f meter \n",first , solution);
						break;
					case 4:
						printf("\t\t...You chosed Inches to Meter... \n");
						printf("Enter the value in terms of (Inches) unit :\n");
						scanf("%f",&first);
						solution = first * Inch_to_meter;
						printf("%f Inches is equal to %f meter \n",first , solution);
						break;
					case 5:
						printf("\t\t...You chosed Centimeter to Inches... \n");
						printf("Enter the value in terms of (cms) unit :\n");
						scanf("%f",&first);
						solution = first * Cms_to_Inches;
						printf("%f cms is equal to %f inches \n",first , solution);
						break;
					case 6:
						printf("\t\t...You chosed Inches to Foot... \n");
						printf("Enter the value in terms of (Inches) unit :\n");
						scanf("%f",&first);
						solution = first * Inches_to_foot;
						printf("%f cms is equal to %f inches \n",first , solution);
						break;
					case 7:
						printf("\t\t...You chosed Meter to Miles... \n");
						printf("Enter the value in terms of (Meter) unit :\n");
						scanf("%f",&first);
						solution = first * meter_to_miles;
						printf("%f Meter is equal to %f Milimeters \n",first , solution);
						break;
					default:
						printf ("Selected wrong choice");
						break;
				}
					break;
					
					
				case 2:
					printf("\t\t...You chosed for conversion in mass... \n");
					printf("1.Kilograms to Gram \n 2.Kilogram to Tonne\n 3.Pounds to Kilogram\n 4.Pounds in Ounces\n 5.Tones to Pounds\n 6.Inches to Foot\n ");
					scanf("%d",&choice);
					
					switch(choice)
				{
					case 1:
						printf("\t\t...You chosed Kilograms to Grams... \n");
						printf("Enter the value in terms of (Kilograms) unit :\n");
						scanf("%f",&first);
						solution = first * 1000;
						printf("%f Kilograms is equal to %f Grams \n",first , solution);
						break;
					case 2:
						printf("\t\t...You chosed Kilograms to Tonne... \n");
						printf("Enter the value in terms of (Kilograms) unit :\n");
						scanf("%f",&first);
						solution = first * 0.001;
						printf("%f Kilogram is equal to %f Tonne \n",first , solution);
						break;
					case 3:
						printf("\t\t...You chosed Pounds to Kilogram... \n");
						printf("Enter the value in terms of (Pounds) unit :\n");
						scanf("%f",&first);
						solution = first * 0.453592;
						printf("%f Pounds is equal to %f Kilogram \n",first , solution);
						break;
					case 4:
						printf("\t\t...You chosed Pounds in Ounces... \n");
						printf("Enter the value in terms of (Pounds) unit :\n");
						scanf("%f",&first);
						solution = first * 16;
						printf("%f Pounds is equal to %f Ounces \n",first , solution);
						break;
					case 5:
						printf("\t\t...You chosed Tones to Pounds... \n");
						printf("Enter the value in terms of (Tones) unit :\n");
						scanf("%f",&first);
						solution = first * 2205;
						printf("%f Tones is equal to %f Pounds \n",first , solution);
						break;
					default:
						printf ("Selected wrong choice");
						break;
				}
					break;
					
					
				case 3:
					printf("\t\t...You chosed for conversion in capacity... \n");
					
					printf("Enter the value in terms of (Inches) unit :\n");
					printf("1.Liter(L) to Mililiter(ml)\n 2.kiloliter to Liter(L)\n 3.Liter to Galon\n 4.Liter(L) to (Meter)^3\n 5.(Centimeter)^3 to Liter(L)\n ");
					scanf("%d",&choice);
					
					switch(choice)
				{
					case 1:
						printf("\t\t...You chosed Liter(L) to Mililiter(mL)... \n");
						printf("Enter the value in terms of (Meter) unit :\n");
						scanf("%f",&first);
						solution = first * 1000;
						printf("%f Meter is equal to %f Milimeters \n",first , solution);
						break;
					case 2:
						printf("\t\t...You chosed kiloliter to Liter(L)... \n");
						printf("Enter the value in terms of (kiloliter) unit :\n");
						scanf("%f",&first);
						solution = first * 1000;
						printf("%f kiloliter is equal to %f L \n",first , solution);
						break;
					case 3:
						printf("\t\t...You chosed Liter to Galon... \n");
						printf("Enter the value in terms of (L) unit :\n");
						scanf("%f",&first);
						solution = first * 0.219969;
						printf("%f L is equal to %f Galon \n",first , solution);
						break;
					case 4:
						printf("\t\t...You chosed Liter(L) to (Meter)^3... \n");
						printf("Enter the value in terms of (L) unit :\n");
						scanf("%f",&first);
						solution = first * 0.001;
						printf("%f L is equal to %f m^3 \n",first , solution);
						break;
					case 5:
						printf("\t\t...You chosed (Centimeter)^3 to Liter(L)... \n");
						printf("Enter the value in terms of (cms^3) unit :\n");
						scanf("%f",&first);
						solution = first * 0.001;
						printf("%f cms^3 is equal to %f L \n",first , solution);
						break;
					default:
						printf ("Selected wrong choice");
						break;
				}
					break;
					
					case 4:
					printf("\t\t...You chosed for conversion in temperature... \n");
					printf("1.Kelvin to celcius \n 2.Kelvin to farenheit\n 3.celcius to farenheit\n 4.celcius to kelvin\n 5.farenheit to celcius\n 6.farenheit to kelvin\n ");
					scanf("%d",&choice);
					
					switch(choice)
				{
					case 1:
						printf("\t\t...You chosed Kelvin to celcius... \n");
						printf("Enter the value in terms of (kelvin) unit :\n");
						scanf("%f",&first);
						solution = first - 273.15;
						printf("%f Kelvin is equals to %f celcius \n",first , solution);
						break;
					case 2:
						printf("\t\t...You chosed Kelvin to farenheit ... \n");
						printf("Enter the value in terms of (Kelvin) unit :\n");
						scanf("%f",&first);
						solution = (first -273.15) * (9/5) - 32;
						printf("%f Kelvin is equal to %f farenheit  \n",first , solution);
						break;
					case 3:
						printf("\t\t...You chosed celcius to farenheit... \n");
						printf("Enter the value in terms of (celcius) unit :\n");
						scanf("%f",&first);
						solution = (first *9/5 )+ 32;
						printf("%f celcius is equal to %f farenheit \n",first , solution);
						break;
					case 4:
						printf("\t\t...You chosed celcius to kelvin... \n");
						printf("Enter the value in terms of (celcius) unit :\n");
						scanf("%f",&first);
						solution = first + 273.15;
						printf("%f celcius is equal to %f kelvin \n",first , solution);
						break;
					case 5:
						printf("\t\t...You chosed farenheit to celcius... \n");
						printf("Enter the value in terms of (farenheit) unit :\n");
						scanf("%f",&first);
						solution = (first - 32) * 5/9;
						printf("%f farenheit is equal to %f celcius \n",first , solution);
						break;
					case 6:
						printf("\t\t...You chosed farenheit to kelvin ... \n");
						printf("Enter the value in terms of (farenheit) unit :\n");
						scanf("%f",&first);
						solution = (first + 475.67) * 9/5;
						printf("%f farenheit is equal to %f kelvin \n",first , solution);
						break;
					default:
						printf ("Selected wrong choice");
						break;
				}
					break;
					
				case 5:
					printf("\t\t...You chosed for conversion in Time... \n");
					
					printf("Enter the value in terms of (Inches) unit :\n");
					printf("1.Minutes to Seconds\n 2.Hours to Minutes\n 3.Hours to Seconds\n 4.Days to Hours\n 5.Days to Minutes\n 6.Days to seconds\n");
					scanf("%d",&choice);
					
					switch(choice)
				{
					case 1:
						printf("\t\t...You chosed Minutes to Seconds... \n");
						printf("Enter the value in terms of (min) unit :\n");
						scanf("%f",&first);
						solution = first * 60;
						printf("%f min is equal to %f sec \n",first , solution);
						break;
					case 2:
						printf("\t\t...You chosed Hours to Minutes ... \n");
						printf("Enter the value in terms of (hrs) unit :\n");
						scanf("%f",&first);
						solution = first * 60;
						printf("%f hrs is equal to %f min \n",first , solution);
						break;
					case 3:
						printf("\t\t...You chosed Hours to Seconds... \n");
						printf("Enter the value in terms of (hrs) unit :\n");
						scanf("%f",&first);
						solution = first *3600;
						printf("%f hrs is equal to %f sec \n",first , solution);
						break;
					case 4:
						printf("\t\t...You chosed Days to Hours... \n");
						printf("Enter the value in terms of (Days) unit :\n");
						scanf("%f",&first);
						solution = first * 24 ;
						printf("%f Days is equal to %f hrs \n",first , solution);
						break;
					case 5:
						printf("\t\t...You chosed Days to Minutes... \n");
						printf("Enter the value in terms of (Days) unit :\n");
						scanf("%f",&first);
						solution = first * 1440;
						printf("%f Days is equal to %f min \n",first , solution);
						break;
					case 6:
						printf("\t\t...You choosed Days to seconds... \n");
						printf("Enter the value in terms of (Days) unit :\n");
						scanf("%f",&first);
						solution = first * 86400;
						printf("%f Days is equal to %f sec \n",first , solution);
						break;
					default:
						printf ("Selected wrong choice");
						break;
				}
					break;

				default:
					printf ("Selected wrong choice");
					break;
			}
		}
		else
		{
			printf("Quitting the program....");
		}
		
		return 0;
	}