/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

/* -b  option; if 0, dmenu appears at bottom */
static int topbar = 1;

/* -noi option; if 0, the input will not be drawn by default */
static int draw_input = 1;                  

 /* add an defined amount of pixels to the bar height */
static const int user_bh = 5; 

/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = { "SourceCodeVF:style=Semibold:size=10" };

/* -p  option; prompt to the left of input field */
static const char *prompt = NULL; 

/* color schemes */
static const char *colors[SchemeLast][2] = {
                 /*     fg         bg      */
	[SchemeNorm] = { "#bbbbbb", "#222222" },
	[SchemeSel]  = { "#eeeeee", "#005577" },
	[SchemeOut]  = { "#000000", "#00ffff" },
};

/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
