#include "FloatChecker.h"

bool FloatChecker::isFloat( const std::string& input )
{
	FiniteAutomaton M(
		{ "0", "1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11" },
		{ '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', '.', 'e', 'E', ' ', '-', '+' },
		"0",
		{ 
			{ "0", {
				{ '+', "1" },
				{ '-', "1" },
				{ ' ', "1" },
				{ '1', "2" },
				{ '2', "2" },
				{ '3', "2" },
				{ '4', "2" },
				{ '5', "2" },
				{ '6', "2" },
				{ '7', "2" },
				{ '8', "2" },
				{ '9', "2" },
				{ '.', "5" },
				{ '0', "11" }
			} },
			{ "1", {
				{ ' ', "1" },
				{ '0', "11" },
				{ '1', "2" },
				{ '2', "2" },
				{ '3', "2" },
				{ '4', "2" },
				{ '5', "2" },
				{ '6', "2" },
				{ '7', "2" },
				{ '8', "2" },
				{ '9', "2" },
				{ '.', "3" }
			} },
			{ "2", {
				{ '0', "3" },
				{ '1', "3" },
				{ '2', "3" },
				{ '3', "3" },
				{ '4', "3" },
				{ '5', "3" },
				{ '6', "3" },
				{ '7', "3" },
				{ '8', "3" },
				{ '9', "3" },
				{ '.', "4" }
			} },
			{ "3", {
				{ '.', "4" }
			} },
			{ "4", {
				{ '0', "6" },
				{ '1', "6" },
				{ '2', "6" },
				{ '3', "6" },
				{ '4', "6" },
				{ '5', "6" },
				{ '6', "6" },
				{ '7', "6" },
				{ '8', "6" },
				{ '9', "6" }
			} },
			{ "5", {
				{ '0', "6" },
				{ '1', "6" },
				{ '2', "6" },
				{ '3', "6" },
				{ '4', "6" },
				{ '5', "6" },
				{ '6', "6" },
				{ '7', "6" },
				{ '8', "6" },
				{ '9', "6" }
			} },
			{ "6", {
				{ '0', "6" },
				{ '1', "6" },
				{ '2', "6" },
				{ '3', "6" },
				{ '4', "6" },
				{ '5', "6" },
				{ '6', "6" },
				{ '7', "6" },
				{ '8', "6" },
				{ '9', "6" },
				{ ' ', "7" },
				{ 'e', "8" },
				{ 'E', "8" }
			} },
			{ "7", {
				{ ' ', "7" },
				{ 'e', "8" },
				{ 'E', "8" }
			} },
			{ "8", {
				{ ' ', "8" },
				{ '+', "9" },
				{ '-', "9" },
				{ '1', "10" },
				{ '2', "10" },
				{ '3', "10" },
				{ '4', "10" },
				{ '5', "10" },
				{ '6', "10" },
				{ '7', "10" },
				{ '8', "10" },
				{ '9', "10" }
			} },
			{ "9", {
				{ ' ', "9" },
				{ '1', "10" },
				{ '2', "10" },
				{ '3', "10" },
				{ '4', "10" },
				{ '5', "10" },
				{ '6', "10" },
				{ '7', "10" },
				{ '8', "10" },
				{ '9', "10" }
			} },
			{ "10", {
				{ '0', "10" },
				{ '1', "10" },
				{ '2', "10" },
				{ '3', "10" },
				{ '4', "10" },
				{ '5', "10" },
				{ '6', "10" },
				{ '7', "10" },
				{ '8', "10" },
				{ '9', "10" }
			} },
			{ "11", {
				{ '.', "5" },
				{ ' ', "7" },
				{ 'e', "8" },
				{ 'E', "8" }
			} }
		},
		{ "2", "3", "4", "6", "10", "11" }
	);
	
	return M.accepts( input.c_str() );
}
