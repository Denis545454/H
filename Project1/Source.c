#include<stdio.h>

#include<locale.h>

int main() {

	setlocale(LC_ALL, "Rus");

	puts("Кораблик:\n");

	puts("       |        ");
	puts("      /|        ");
	puts("     / |\\       ");
	puts("    /  | \\        ");
	puts(" -------------            ");
	puts(" \\           /   ");
	puts("  ----------            ");
	puts("               ");

	puts("Домик:\n");

	puts("        | /\\            ");
	puts("        |/  \\         ");
	puts("        /    \\       ");
	puts("       --------           ");
	puts("       | |--| |       ");
	puts("       |      |    ");
	puts("       |      |       ");
	puts("       ||-|   |         ");
	puts("       --------                      ");
}