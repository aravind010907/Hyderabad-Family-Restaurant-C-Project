#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<dos.h>

main()
{
		int ask1,ask2,ask3,askloop=1,qtytif,qtylnch1,qtylnch2,qtysnks,qtydnr;
		float day_total=0,total=0,p_rice=60.00,rice=90.00,biryani=250.00,meals=210.00,sambar=40.00,v_curry=50.00,nv_curry=80.00,egg=50.00,idlydosa=30.00,vada=40.00,puri=50.00,tea=10.00,cake=50.00;

	while(askloop==1)
	{
		total=0;
		system("cls");
		printf("\n\t\t\t    Hyderabad Family Restaurant\n");
		printf("\t\t\t    ------------------------\n");

		printf("\t1. Tiffins \n");
		printf("\t2. Lunch \n");
		printf("\t3. Snacks \n");
		printf("\t4. Dinner \n");
		printf("\tEnter your choice::\t\t");
		scanf("%d",&ask1);
		system("cls");

		//To show the menu and select from it
		switch(ask1)
		{
			case 1:
			while(1)
			{
				system("cls");
				printf("\n\t\t\t    Hyderabad Family Restaurant\n");
				printf("\t\t\t    ------------------------\n\n\n");
				printf("\t\t\t\t    Tiffins \n");
				printf("\t\t\t\t    ------- \n");
				printf("\t 1. Idly \n");
				printf("\t 2. Dosa \n");
				printf("\t 3. Vada \n");
				printf("\t 4. Puri \n");
				printf("\t Press <0> to -EXIT-\n");
				printf("\n\nEnter your choice::\t");
				scanf("%d",&ask2);

				if(ask2==0)
					break;


				printf("\n\nEnter the quantity::\t");
				scanf("%d",&qtytif);


				switch(ask2)
				{
					case 1:
					case 2:
							total+=idlydosa*qtytif;
							break;
					case 3:
							total+=vada*qtytif;
							break;
					case 4:
							total+=puri*qtytif;
							break;
				}
			}
				break;
			case 2:
			while(1)
			{
				system("cls");
				printf("\n\t\t\t    Hyderabad Family Restaurant\n");
				printf("\t\t\t    ------------------------\n\n\n");
				printf("\t\t\t\t    Lunch \n");
				printf("\t\t\t\t    ----- \n");
				printf("\n\t Rice Items \n");
				printf("\t ---------- \n");
				printf("\t 1. Full Meals\n");
				printf("\t 2. Plate Meals\n");
				printf("\t 3. Fried rice\n");
				printf("\t 4. Egg rice \n");
				printf("\t 5. Chicken Biryani\n");
				printf("\t 6. Mutton Biryani\n");
				printf("\t 7. Plain rice\n");
				printf("\t Press <0> to -EXIT-\n");
				printf("\n\nEnter your choice::\t");
				scanf("%d",&ask2);
				if (ask2==0)
					break;
				printf("\n\nEnter the quantity::\t");
				scanf("%d",&qtylnch1);
				switch(ask2)
				{
					case 1:
					case 2:
						total+=meals*qtylnch1;
						break;
					case 3:
					case 4:
						total+=rice*qtylnch1;
						break;
					case 5:
					case 6:
						total+=biryani*qtylnch1;
						break;
					case 7:
						total+=p_rice*qtylnch1;

				}


				system("cls");

				printf("\n\t\t\t    Hyderabad Family Restaurant\n");
				printf("\t\t\t    ------------------------\n\n\n");
				printf("\t\t\t\t    Lunch \n");
				printf("\t\t\t\t    ----- \n");
				printf("\t Curry Items \n");
				printf("\t ----------- \n");
				printf("\t 1. Sambar \n");
				printf("\t 2. Brinjal Curry \n");
				printf("\t 3. Potato Curry \n");
				printf("\t 4. Potato Fry \n");
				printf("\t 5. Chicken Curry \n");
				printf("\t 6. Mutton Curry \n");
				printf("\t 7. Fish Curry \n");
				printf("\t 8. Egg Curry \n");
				printf("\t Press <0> to -EXIT-\n");
				printf("\n\nEnter your Choice::\t");
				scanf("%d",&ask3);
				if (ask3!=0)
				{
					printf("\n\nEnter the quantity::\t");
					scanf("%d",&qtylnch2);
					switch(ask3)
					{
						case 1: total+=sambar*qtylnch2;
							break;
						case 2:
						case 3:
						case 4:
							total+=v_curry*qtylnch2;
							break;
						case 5:
						case 6:
						case 7:
							total+=nv_curry*qtylnch2;
							break;
						case 8:
							total+=egg*qtylnch2;
					}

				}
			}
				break;
			case 3:
			while(1)
			{
				system("cls");
				printf("\n\t\t\t    Hyderabad Family Restaurant\n");
				printf("\t\t\t    ------------------------\n\n\n");
				printf("\t\t\t\t    Snacks \n");
				printf("\t\t\t\t    ------ \n");
				printf("\t 1. Tea \n");
				printf("\t 2. Chocolate Cake(slice)\n");
				printf("\t 3. Vanilla Cake(slice) \n");
				printf("\t 4. Butterscoth Cake(slice) \n");
				printf("\t 5. Choco-Vanilla Cake(slice) \n");
				printf("\t Press <0> to -EXIT- \n");
				printf("\n\nEnter your choice::\t");
				scanf("%d",&ask2);
				if(ask2==0)
					break;
				printf("\n\nEnter the quantity::\t");
				scanf("%d",&qtysnks);
				switch(ask2)
				{
					case 1:
						total+=tea*qtysnks;
						break;
					case 2:
					case 3:
					case 4:
					case 5:
						total+=cake*qtysnks;
				}


			}
				break;
			case 4:
			while(1)
			{
				system("cls");
				printf("\n\t\t\t    Hyderabad Family Restaurant\n");
				printf("\t\t\t    ------------------------\n\n\n");
				printf("\t\t\t\t    Dinner \n");
				printf("\t\t\t\t    ------ \n");
				printf("\n\t Rice Items \n");
				printf("\t ---------- \n");
				printf("\t 1. Full Meals\n");
				printf("\t 2. Plate Meals\n");
				printf("\t 3. Fried rice\n");
				printf("\t 4. Egg rice \n");
				printf("\t 5. Chicken Biryani\n");
				printf("\t 6. Mutton Biryani\n");
				printf("\t 7. Plain rice\n");
				printf("\t Press <0> to -EXIT- \n");
				printf("\n\nEnter your choice::\t");
				scanf("%d",&ask2);
				if( ask2==0)
					break;
				printf("\n\nEnter the quantity::\t");
				scanf("%d",&qtylnch1);

				switch(ask2)
				{
					case 1:
					case 2:
						total+=meals*qtylnch1;
						break;
					case 3:
					case 4:
						total+=rice*qtylnch1;
						break;
					case 5:
					case 6:
						total+=biryani*qtylnch1;
						break;
					case 7:
						total+=p_rice*qtylnch1;
						break;
				}

				system("cls");


				printf("\n\t\t\t    Hyderabad Family Restaurant\n");
				printf("\t\t\t    ------------------------\n\n\n");
				printf("\t\t\t\t    Dinner \n");
				printf("\t\t\t\t    ------ \n");
				printf("\t Curry Items \n");
				printf("\t ----------- \n");
				printf("\t 1. Sambar \n");
				printf("\t 2. Brinjal Curry \n");
				printf("\t 3. Potato Curry \n");
				printf("\t 4. Potato Fry \n");
				printf("\t 5. Chicken Curry \n");
				printf("\t 6. Mutton Curry \n");
				printf("\t 7. Fish Curry \n");
				printf("\t 8. Egg Curry \n");
				printf("\t Press <0> to -EXIT- \n");
				printf("\n\nEnter your Choice::\t");
				scanf("%d",&ask3);

				if (ask3!=0)
				{
					printf("\n\nEnter the quantity::\t");
					scanf("%d",&qtylnch2);

					switch(ask3)
					{
						case 1: total+=sambar*qtylnch2;
								break;
						case 2:
						case 3:
						case 4:
							total+=v_curry*qtylnch2;
							break;
						case 5:
						case 6:
						case 7:
							total+=nv_curry*qtylnch2;
							break;
						case 8:
							total+=egg*qtylnch2;

					}
				}
			}
				break;
			default:
				printf("\n\n\t\t\tInvalid Choice...\n");
		}
		system("cls");
		gotoxy(38,3);
		printf("Bill");
		gotoxy(35,4);
		printf("---====---");
		gotoxy(33,5);
		printf(" Total: %-5.2f \n\n\n",total);
		printf("  \t\tThank you for coming to Hyderabad Family Restaurant\n");
		printf("  \t\t\tHoping to see you again");
		sleep(2);
		delay(500);


		gotoxy(1,19);
		printf("  Next Order :: <press '1'> \n");
		printf("  ---------- \n");
		printf("  Close Software :: <press '0'> \n");
		printf("  --------------\n\t\t\t\t");
		scanf("%d",&askloop);
		day_total=day_total+total;
	    }
	    system("cls");
	    gotoxy(30,12);
	    printf("Today's Income : %.2f\n",day_total);
	    gotoxy(30,13);
	    printf("-----------------------\n\n\n\n");
	    sleep(2);
}
