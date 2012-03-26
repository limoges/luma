Luma
====
Luma is just a bunch of macros written to make it easier to use
ANSI Escape Sequence's graphics mode (text styling and coloring).

License stuff is just to make it publicly usable. Have no fear.

Usage
-----
It's pretty easy, just use them like you would use a "string".
For example:

`puts( EF_RED " This is red text " EF_END );`  
Will output "This is red text" to stdout in red color if ANSI escape
sequences are supported on your terminal.

Note:
One should always output `ESC_END` before terminating the program
to make sure that the terminal is back to attributes.

List of escape sequences
------------------------
These are complete escape sequences to use for formatting output.

There are 3 categories of supported escape sequences:
- Text Attributes   `ET`  
  for styling the text.

- Foreground Colors `EF`  
  for changing font color.

- Background Colors `EB`  
  for changing highlight color.

From [Wikipedia/ANSI_escape_code](en.wikipedia.org/wiki/ANSI_escape_code)

`ET_BRIGHT`/`ET_BRIGHT_OFF`  
Turn on/off Bright (increased intensity) or Bold  

`ET_FAINT`/`ET_FAINT_OFF`  
Turn on/off Faint (decrease intensity)  

`ET_ITALIC`/`ET_ITALIC_OFF`  
Turn on/off Italic  

`ET_UNDERLINE`/`ET_UNDERLINE_OFF`  
Turn on/off Underline  

`ET_BLINK`/`ET_BLINK_OFF`  
Turn on/off Blink  

`ET_REVERSE`/`ET_REVERSE_OFF`  
Turn on/off Reverse (swap foreground and background)  
  
`ET_CROSSED`/`ET_CROSSED_OFF`  
Turn on Strikethrough  
  
`EF_COLOR`
Turn on foreground color where COLOR 
{ BLACK, RED, GREEN, YELLOW, BLUE, MAGENTA, CYAN, WHITE, DEFAULT }  
  
`EB_COLOR`
Turn on background color where COLOR
{ BLACK, RED, GREEN, YELLOW, BLUE, MAGENTA, CYAN, WHITE, DEFAULT }

Escape codes
------------
The different codes mapping to different ANSI Escape Sequences.

