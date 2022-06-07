int _putchar(char c);
void print_alphabet(void);
void print_alphabet_x10(void){

	char alphabet[26] = "abcdefghijklmnopqrstuvwxyz";
	int i = 0;
	int repertition = 1;

	while(repertition <= 10){
		while (i < 26)
		{
			putchar(alphabet[i]);
			i++;
		}
		putchar('\n');
		repertition++;
		i=0;
	}
}

