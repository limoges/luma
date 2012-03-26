
#include <stdlib.h>
#include <stdio.h>
#include "luma.h"

int main(void)
{
  printf("\n");
  printf("%s", ET_BRIGHT    "ET_BRIGHT   " ESC_STOP);    
  printf("%s", ET_FAINT     "ET_FAINT    " ESC_STOP);    
  printf("%s", ET_ITALIC    "ET_ITALIC   " ESC_STOP);    
  printf("%s", ET_UNDERLINE "ET_UNDERLINE" ESC_STOP);    
  printf("\n");                            
  printf("%s", ET_BLINK     "ET_BLINK    " ESC_STOP);    
  printf("%s", ET_REVERSE   "ET_REVERSE  " ESC_STOP);    
  printf("%s", ET_CROSSED   "ET_CROSSED  " ESC_STOP);    
                                           
  printf("\n");                            
  printf("%s", EF_BLACK     "EF_BLACK    " ESC_STOP);  
  printf("%s", EF_RED       "EF_RED      " ESC_STOP);  
  printf("%s", EF_GREEN     "EF_GREEN    " ESC_STOP);  
  printf("%s", EF_YELLOW    "EF_YELLOW   " ESC_STOP);  
                                           
  printf("\n");                            
  printf("%s", EF_BLUE      "EF_BLUE     " ESC_STOP);  
  printf("%s", EF_MAGENTA   "EF_MAGENTA  " ESC_STOP);  
  printf("%s", EF_CYAN      "EF_CYAN     " ESC_STOP);  
  printf("%s", EF_WHITE     "EF_WHITE    " ESC_STOP);  
                                           
  printf("\n");                            
  printf("%s", EB_BLACK     "EB_BLACK    " ESC_STOP);  
  printf("%s", EB_RED       "EB_RED      " ESC_STOP);  
  printf("%s", EB_GREEN     "EB_GREEN    " ESC_STOP);  
  printf("%s", EB_YELLOW    "EB_YELLOW   " ESC_STOP);  
                                           
  printf("\n");                            
  printf("%s", EB_BLUE      "EB_BLUE     " ESC_STOP);  
  printf("%s", EB_MAGENTA   "EB_MAGENTA  " ESC_STOP);  
  printf("%s", EB_CYAN      "EB_CYAN     " ESC_STOP);  
  printf("%s", EB_WHITE     "EB_WHITE    " ESC_STOP);  

  exit(EXIT_SUCCESS);
}

