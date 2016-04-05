/*
 * main.cpp - An example program to test the API.
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

#include <iostream>
#include "../head/colorapi.h"

int main(int argc, char **argv)
{
	std::cout << "Copyright (C) 2016 Adrian Schollmeyer\n";
	std::cout << color::blink1;
	std::cout << color::fg::blue << 	"H"
		<< color::fg::cyan << 			"e"
		<< color::fg::green << 			"l"
		<< color::fg::yellow << 		"l"
		<< color::fg::red << 			"o "
		<< color::reset;
	std::cout << color::blink1;
	std::cout << color::bg::blue << 	"W"
		<< color::bg::cyan << 			"o"
		<< color::bg::green << 			"r"
		<< color::bg::yellow << 		"l"
		<< color::bg::red << 			"d"
		<< color::reset << std::endl;
	std::cout << color::bold << "Hello" << color::reset << color::crossed << "World" << std::endl
		<< color::reset << color::italic << "Hello" << color::reset << color::conceal << "World" << std::endl
		<< color::reset << color::faint << "Hello" << color::reset << color::negative << "World" << std::endl
		<< color::reset << color::underline << "Hello f*ckin' World :P\n" << color::reset;
	std::cout << std::endl << std::endl;
	
	std::cout << "        " << color::bg::white << "          " << color::reset << std::endl;
	std::cout << "        " << color::bg::white << "  " << color::bg::black 	<< "      " << color::bg::white << "  " << color::reset << std::endl;
	std::cout << "made in " << color::bg::white << "  " << color::bg::red 		<< "      " << color::bg::white << "  " << color::reset << std::endl;
	std::cout << "        " << color::bg::white << "  " << color::bg::yellow 	<< "      " << color::bg::white << "  " << color::reset << std::endl;
	std::cout << "        " << color::bg::white << "          " << color::reset << std::endl;
	std::cout << "Please visit " << color::fg::cyan << "https://github.com/NexAdn/linuxcolorapi" << color::reset << " for the source code!\n";
    return 0;
}