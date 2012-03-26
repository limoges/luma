/* 
 * Luma is a bunch of macros to make remembering ANSI Escape Sequence
 * easier.
 *
 * Copyright (c) 2012 - Julien Limoges (julien.limoges.2@ens.etsmtl.ca)
 *
 * Permissionis hereby granted, free of charge, to any person obtaining
 * a copy of this software and associated documentation files (the 
 * "Software"), to deal in the Software without restriction, including 
 * without limitation the rights to use, copy, modify, merge, publish, 
 * distribute, sublicense, and/or sell copies of the Software, and to
 * permit persons to whom the Software is furnished to do so, subject 
 * to the following conditions:
 *
 * The above copyright notice and this permission notice shall be 
 * included in all copies or substantial portions of the Software.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, 
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
 * IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY 
 * CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
 * TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE 
 * SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.    
 */

#ifndef LUMA_H
#define LUMA_H

#if defined( DISABLE_ANSI_ESCAPE_SEQUENCE ) || defined( DISABLE_LUMA )
#define ESC(sequence) ""
#else
#define LUMA_ESC_BEGIN "\033["   
#define LUMA_ESC_END   "m"       
#define ESC(sequence) LUMA_ESC_BEGIN sequence LUMA_ESC_END
#endif

/* Check that your target terminal emulators support the attributes */

/* Text Attributes Codes */
#define TA_BRIGHT    "1"
#define TA_FAINT     "2"
#define TA_ITALIC    "3"
#define TA_UNDERLINE "4"
#define TA_BLINK     "5"
#define TA_REVERSE   "7"
#define TA_CROSSED   "9"
#define TA_DEFAULT   "0"  

/* Specific Text Attributes Disables */
#define TA_BRIGHT_OFF    "21"
#define TA_FAINT_OFF     "22"
#define TA_ITALIC_OFF    "23"
#define TA_UNDERLINE_OFF "24"
#define TA_BLINK_OFF     "25"
#define TA_REVERSE_OFF   "27"
#define TA_CROSSED_OFF   "29"

/* Foreground Codes */ 
#define FG_BLACK   "30"
#define FG_RED     "31"         
#define FG_GREEN   "32"         
#define FG_YELLOW  "33"         
#define FG_BLUE    "34"         
#define FG_MAGENTA "35"         
#define FG_CYAN    "36"         
#define FG_WHITE   "37"         
#define FG_DEFAULT "39" 
                              
/* Background Codes */ 
#define BG_BLACK   "40"         
#define BG_RED     "41"         
#define BG_GREEN   "42"         
#define BG_YELLOW  "43"         
#define BG_BLUE    "44"         
#define BG_MAGENTA "45"         
#define BG_CYAN    "46"         
#define BG_WHITE   "47"         
#define BG_DEFAULT "49" 

/* Text Attributes Escape Sequences */
#define ET_BRIGHT        ESC(TA_BRIGHT)
#define ET_FAINT         ESC(TA_FAINT)
#define ET_ITALIC        ESC(TA_ITALIC)
#define ET_UNDERLINE     ESC(TA_UNDERLINE)
#define ET_BLINK         ESC(TA_BLINK)
#define ET_REVERSE       ESC(TA_REVERSE)
#define ET_CROSSED       ESC(TA_CROSSED)
/* Text Attributes Disables Escape Sequence */
#define ET_BRIGHT_OFF    ESC(TA_BRIGHT_OFF)
#define ET_FAINT_OFF     ESC(TA_FAINT_OFF)
#define ET_ITALIC_OFF    ESC(TA_ITALIC_OFF)
#define ET_UNDERLINE_OFF ESC(TA_UNDERLINE_OFF)
#define ET_BLINK_OFF     ESC(TA_BLINK_OFF)
#define ET_REVERSE_OFF   ESC(TA_REVERSE_OFF)
#define ET_CROSSED_OFF   ESC(TA_CROSSED_OFF)
#define ET_END           ESC(TA_DEFAULT)

/* Foreground Colors Escape Sequences */
#define EF_BLACK   ESC(FG_BLACK)
#define EF_RED     ESC(FG_RED)
#define EF_GREEN   ESC(FG_GREEN)
#define EF_YELLOW  ESC(FG_YELLOW)
#define EF_BLUE    ESC(FG_BLUE)
#define EF_MAGENTA ESC(FG_MAGENTA)
#define EF_CYAN    ESC(FG_CYAN)
#define EF_WHITE   ESC(FG_WHITE)
#define EF_END     ESC(FG_DEFAULT)

/* Background Colors Escape Sequences */
#define EB_BLACK   ESC(BG_BLACK)   
#define EB_RED     ESC(BG_RED)     
#define EB_GREEN   ESC(BG_GREEN)   
#define EB_YELLOW  ESC(BG_YELLOW)  
#define EB_BLUE    ESC(BG_BLUE)    
#define EB_MAGENTA ESC(BG_MAGENTA) 
#define EB_CYAN    ESC(BG_CYAN)    
#define EB_WHITE   ESC(BG_WHITE)   
#define EB_END     ESC(BG_DEFAULT) 

#define ESC_STOP   ESC(TA_DEFAULT)

#endif /* LUMA_H */

