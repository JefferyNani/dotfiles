/*  ____ _____  */
/* |  _ \_   _|  Derek Taylor (DistroTube) */
/* | | | || |  	http://www.youtube.com/c/DistroTube */
/* | |_| || |  	http://www.gitlab.com/dwt1/ */
/* |____/ |_|  	*/

/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;      /* -b  option; if 0, dmenu appears at bottom     */
static int centered = 0;    /* -c option; centers dmenu on screen */
static int min_width = 500; /* minimum width when centered */
static int fuzzy = 1; /* -F  option; if 0, dmenu doesn't use fuzzy matching */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
    "Sarasa UI SC:style=bold:size=8:antialias=true:autohint=true",
    "JoyPixels:pixelsize=8:antialias=true:autohint=true"};
static const char *prompt =
    NULL; /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
    /*   fg         bg    */
    [SchemeNorm] = {"#bbbbbb", "#222222"},
    [SchemeSel] = {"#eeeeee", "#24283b"},
    [SchemeOut] = {"#000000", "#565f89"},
    [SchemeSelHighlight] = {"#eeeeee", "#cfc9c2"},
    [SchemeNormHighlight] = {"#eeeeee", "#414868"},
    [SchemeMid] = {"#414868", "#a9b1d6"},
};
/* -l and -g options; controls number of lines and columns in grid if > 0 */
static unsigned int lines = 0;
static unsigned int lineheight =
    22; /* -h option; minimum height of a menu line */
static unsigned int columns = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/* Size of the window border */
static unsigned int border_width = 0; /* -bw option; to add border width */
