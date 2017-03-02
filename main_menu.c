 /*
 Cody Webb
 CPII 
 2/28/17
 */
 
 
 #include <stdio.h>
 #include "boolean.h"
 
 
 int main(void){
		booean quit = FALSE;
		boolean showmenu = TRUE;
		int menu_sel;
		while(!quit){
					if(showmenu){
							printf("1");
							printf("2");
							printf("3");
							printf("4 Toggle the Menu");
							printf("Quit\n");
							printf("Please Enter a Selection");
							scanf("%d" , &menu_sel);
								}	
					else{
						printf("Please Enter a Selection.\n #4 To Toggle the Menu\n");
						scanf("%d" , &menu_sel);
						}
					switch(menu_sel){
								case 1: printf("1");
								break;
								case 2: printf("2");
								break;
								case 3: printf("3");
								break;
								case 4: showmenu = !showmenu;
								break;
								case 5: quit = TRUE;
								break;
								default: printf("Error! %d is not a valid choice!\n, menu_sel");
									}
					}
		
		
  	}
