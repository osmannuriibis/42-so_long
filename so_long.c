#include "so_long.h"

int	main(int argc, char** argv)
{
	if(argc != 2)
		errorMsg(ERR_ARG);
	
	if (check_file_type(argv[1]) == FAILURE)
		errorMsg(ERR_FILE_TYPE);
	
	



}