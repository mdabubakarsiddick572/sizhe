#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <assert.h>
#define ElementType char

// the structure for stacks
typedef struct tree_node{
	char name[256]; //
	int type; // 0 for directory, 1 for file;
	struct tree_node * nextsibling;// for brothers
	struct tree_node * firstchild; //for its first child
	struct tree_node * parent;  // ponits to it's parent
}tnode;

//creat the root directory
tnode * create_root(){
	//to do
}

//list the files and sub-directories in the current_dir
void list_files(tnode * current_dir){
	//to do
}

// creat a new file or dir in the current_dir
// type = 0,file; type =1 dir
tnode *make_dir(tnode * current_dir, char * name, int type){
	
}

// delete a file or dir specifid by subdir. command:del
void del_dir(tnode * current_dir, char *subdir){

}

// change the current dir. command:cd
tnode * change_curdir(tnode * current_dir, char *subdir){
	
}



int main(int argc, char *argv[]){
	char cmd[100], para[100];
	tnode *root=create_root();
	tnode *cur_dir=root;
	do{
		
	printf(" %s >>",cur_dir->name);
    scanf("%s", cmd);
		if(strcmp(cmd,"ls")==0){
			list_files(cur_dir);
		}else if(strcmp(cmd,"mkdir")==0){ // make a new directory
			scanf("%s",para);
			make_dir(cur_dir,para,0);
		}else if(strcmp(cmd,"mkfile")==0){ // make a new file
				scanf("%s",para);
				make_dir(cur_dir,para,1);
		}else if(strcmp(cmd,"cd")==0){ // change the current directory
				scanf("%s",para);
				tnode *tmp=change_curdir(cur_dir,para);
				if(tmp!=NULL)
					cur_dir=tmp;
		}else if(strcmp(cmd,"del")==0){ // delete a subdirectory
				scanf("%s",para);
				del_dir(cur_dir,para);
		}
		else if(strcmp(cmd,"exit")==0){ //exit the file system
				break;
		}
	}while(1);
	return 1;
}


