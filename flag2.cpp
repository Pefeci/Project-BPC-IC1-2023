#include "flag2.h"
using namespace std;



int demonstrationFlag2(){
	FILE * temp_file;
	temp_file = tmpfile();
	if (temp_file == NULL){
		printf("Failed to open temporary file.\n");
		return -1;
	}
	char solution[128];

	fputs("DoDupyCervenej", temp_file);
	char answer[128];
	rewind(temp_file);
	
	printf("\n Jak se jmenoval rapovej buh? ");
	scanf("%s", answer);
	printf("\n answer by melo byt: %s \n", answer);
	fgets(solution, sizeof(solution), temp_file);
	printf("\n Soluiton nacteno:t: %s \n", solution);


	if (strcmp(answer, solution) == 0) {
		printf("Hurray you focking did it!");
	}
	
// write data to tmp file
// remove tmp file
	if (rmtmp() == 1) { return 0;};
	return 1;
	

}





