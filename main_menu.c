 /*
 Cody Webb
 CPII 
 2/28/17
 */
 
 
 #include <stdio.h>
 #include "boolean.h"

menu_sel; showmenu; 
 
 
 int main(void){
		booean quit = FALSE;
		boolean showmenu = TRUE;
		int menu_sel;
		while(!quit){
					if(showmenu){
							printf("1 Addition\n");
							printf("2 Subtraction\n");
							printf("3 Multiplication\n");
							printf("4 Division\n");
							printf("5 Conjugation\n");
							printf("6 Negation\n");
							printf("7 Toggle Menu\n")
							printf("8 Quit\n");
							printf("Please Enter a Selection");
							scanf("%d" , &menu_sel);
								}	
					else{
						printf("Please Enter a Selection.\n #4 To Toggle the Menu\n");
						scanf("%d" , &menu_sel);
						}
					switch(menu_sel){
								case 1: printf("Addition");
								
								break;
								case 2: printf("Subtraction");
								
								break;
								case 3: printf("Multiplication");
							
								break;
								case 4: printf("Divison");
								
								break;
								case 5: printf("Conjugation");
								
								break;
								case 6:	printf("Negation");
								
								break;
								case 7: showmenu = !showmenu;
								
								break;
								case 8: quit = TRUE;
								
								break;
								default: printf("Error! %d is not a valid choice!\n, menu_sel");
									}
					}
		
		
  	}
