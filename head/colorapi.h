/*
 * colorapi.h
 * 
 * Copyright (C) 2016 Adrian Schollmeyer
 * 
 * Linux-ColorAPI ist Freie Software: Sie können es unter den Bedingungen
    der GNU Lesser General Public License, wie von der Free Software Foundation,
    Version 3 der Lizenz oder (nach Ihrer Wahl) jeder neueren
    veröffentlichten Version, weiterverbreiten und/oder modifizieren.

    Dieses Programm wird in der Hoffnung, dass es nützlich sein wird, aber
    OHNE JEDE GEWÄHRLEISTUNG, bereitgestellt; sogar ohne die implizite
    Gewährleistung der MARKTFÄHIGKEIT oder EIGNUNG FÜR EINEN BESTIMMTEN ZWECK.
    Siehe die GNU General Public License für weitere Details.

    Sie sollten eine Kopie der GNU General Public License zusammen mit diesem
    Programm erhalten haben. Wenn nicht, siehe <http://www.gnu.org/licenses/>.
 */

/* This program was tested with 'xterm' and 'linux' terminal under Ubuntu GNU/Linux.
 * Not all featues work on all terminals!
 */

namespace color {
	char* reset = 		"\033[0m";
	char* bold = 		"\033[1m";
	char* faint = 		"\033[2m";
	char* italic = 		"\033[3m";
	char* underline = 	"\033[4m";
	char* blink1 = 		"\033[5m";
	char* blink2 = 		"\033[6m";
	char* negative = 	"\033[7m";
	char* conceal = 	"\033[8m";
	char* crossed = 	"\033[9m";
	
	char* altfont(unsigned short i)
	{
		switch(i)
		{
			case 1:
				return "\033[11m";
				break;
			case 2:
				return "\033[12m";
				break;
			case 3:
				return "\033[13m";
				break;
			case 4:
				return "\033[14m";
				break;
			case 5:
				return "\033[15m";
				break;
			case 6:
				return "\033[16m";
				break;
			case 7:
				return "\033[17m";
				break;
			case 8:
				return "\033[18m";
				break;
			case 9:
				return "\033[19m";
				break;
			default:
				return "";
				break;
		}
	}
	
	namespace fg {
		char* black = 	"\033[30m";
		char* red = 	"\033[31m";
		char* green = 	"\033[32m";
		char* yellow = 	"\033[33m";
		char* blue = 	"\033[34m";
		char* magenta = "\033[35m";
		char* cyan = 	"\033[36m";
		char* white = 	"\033[37m";
	}
	
	namespace bg {
		char* black = 	"\033[40m";
		char* red = 	"\033[41m";
		char* green = 	"\033[42m";
		char* yellow = 	"\033[43m";
		char* blue = 	"\033[44m";
		char* magenta = "\033[45m";
		char* cyan = 	"\033[46m";
		char* white = 	"\033[47m";
	}
}