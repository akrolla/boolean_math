 /*
 Cody Webb
 CPII 
 2/28/17
 */
 
 
 #include <stdio.h>
 #include "boolean.h"
 #include "complex.h"
 #include "Complex_IO.h"
 #include "Complex_arith.h"
int menu_sel , showmenu;
complex num1, num2, ans; 
 
 int main(void){
		boolean quit = FALSE;
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
							printf("7 Toggle Menu\n");
							printf("8 Quit\n");
							printf("Please Enter a Selection");
							scanf("%d" , &menu_sel);
								}	
					else{
						printf("Please Enter a Selection.\n #7 To Toggle the Menu\n");
						scanf("%d" , &menu_sel);
						}
					switch(menu_sel){
								case 1: num1 = read_complex();
									num2 = read_complex();
									ans = add_complex(num1 , num2);
									write_complex(ans);
									break;
								case 2: num1 = read_complex();
									num2 = read_complex();
									ans = sub_complex(num1 , num2);
									write_complex(ans);
									break;
								case 3: num1 = read_complex();
									num2 = read_complex();
									ans = multiply_complex(num1 , num2);
									write_complex(ans);
							
									break;
								case 4: num1 = read_complex();
									num2 = read_complex();
									divide_complex(num1 , num2);
								
									break;
								case 5: num1 = read_complex();
									conjugate_complex(num1);
									ans = conjugate_complex(num1);
									write_complex(ans);
									break;
								case 6: num1 = read_complex();
									negate_complex(num1);
									ans = negate_complex(num1);
									write_complex(ans);
									break;
								case 7: showmenu = !showmenu;
								
								break;
								case 8: quit = TRUE;
								
								break;
								default: printf("Error! %d is not a valid choice!\n, menu_sel");
									}
					}
		
		
  	}
