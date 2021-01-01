/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"SF Pro Display:size=12",
	"Font Awesome 5 Free:pixelsize=14:antialias=true:autohint=true"
};
static const unsigned int bgalpha = 0xd0;
static const unsigned int fgalpha = OPAQUE;
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { "#BBBBBB", "#181818" },
	[SchemeSel] = { "#181818", "#BBBBBB" },
	[SchemeOut] = { "#000000", "#ff0000" },
};
static const unsigned int alphas[SchemeLast][2] = {
	/*		fgalpha		bgalphga	*/
	[SchemeNorm] = { fgalpha, bgalpha },
	[SchemeSel] = { fgalpha, bgalpha },
	[SchemeOut] = { fgalpha, bgalpha },
};

/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 10;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
/* Size of the window border */
static unsigned int border_width = 1;
