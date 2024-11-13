#include "video.h"

typedef struct canal{
	
	int id;
	int quantidadeDeInscritos;
	char titulo[100];
	char descricao[100];
	char proprietario[100];
	
	tipoVideos video ;
	
}tipoCanal;

void cadastraCanal(tipoCanal *canal);
void exibiCanal(tipoCanal *canal);
void cadastraVideo(tipoCanal *canal);
void exibiVideo(tipoCanal *canal);
