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
	const char* reset = 		"\033[0m";
	const char* bold = 		"\033[1m";
	const char* faint = 		"\033[2m";
	const char* italic = 		"\033[3m";
	const char* underline = 	"\033[4m";
	const char* blink1 = 		"\033[5m";
	const char* blink2 = 		"\033[6m";
	const char* negative = 	"\033[7m";
	const char* conceal = 	"\033[8m";
	const char* crossed = 	"\033[9m";
	
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
		const char* black = 	"\033[30m";
		const char* red = 	"\033[31m";
		const char* green = 	"\033[32m";
		const char* yellow = 	"\033[33m";
		const char* blue = 	"\033[34m";
		const char* magenta = "\033[35m";
		const char* cyan = 	"\033[36m";
		const char* white = 	"\033[37m";
	}
	
	namespace bg {
		const char* black = 	"\033[40m";
		const char* red = 	"\033[41m";
		const char* green = 	"\033[42m";
		const char* yellow = 	"\033[43m";
		const char* blue = 	"\033[44m";
		const char* magenta = "\033[45m";
		const char* cyan = 	"\033[46m";
		const char* white = 	"\033[47m";
	}
}