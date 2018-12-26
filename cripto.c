#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void criptografia ();

int main (){
	
	criptografia();
}
void criptografia (){
	
	char c[100], cc[100];
	int t,i;
	scanf("%[^\n]s", c);
	setbuf(stdin, NULL);
	
	t = strlen(c);
	
	for(i = 0; i < t; i++){
		
		if(c[i] == 'j' || c[i] == 'k'){
			cc[i] = '0';
		}
		else if (c[i] == 'i' || c[i] == 'l'){
			cc[i] = '1';
		}
		else if (c[i] == 'h' || c[i] == 'm'){
			cc[i] = '2';
		}
		else if (c[i] == 'g' || c[i] == 'n'){
			cc[i] = '3';
		}
		else if (c[i] == 'f' || c[i] == 'o'){
			cc[i] = '4';
		}
		else if (c[i] == 'e' || c[i] == 'p' || c[i] == 'z'){
			cc[i] = '5';
		}
		else if (c[i] == 'd' || c[i] == 'q' || c[i] == 'y'){
			cc[i] = '6';
		}
		else if (c[i] == 'c' || c[i] == 'r' || c[i] == 'x'){
			cc[i] = '7';
		}
		else if (c[i] == 'b' || c[i] == 's' || c[i] == 'v'){
			cc[i] = '8';
		}
		else if (c[i] == 'a' || c[i] == 't' || c[i] == 'u'){
			cc[i] = '9';
		}
		else(cc[i] = '*');
	}
	printf("%s",cc);
}
