#include <NDL.h>
#include <SDL.h>
//wzw add		
#include <string.h>
#include<stdio.h>
/*#include<stddef.h>*/

#define keyname(k) #k,
//wzw add
/*static  unsigned char pr_Key[] = {*/
   /*[SDLK_UP]=0,        */
   /*[SDLK_DOWN]=0,      */
   /*[SDLK_LEFT]=0,      */
   /*[SDLK_RIGHT]=0,     */
   /*[SDLK_ESCAPE]=0,    */
   /*[SDLK_INSERT]=0,    */
   /*[SDLK_LALT]=0,      */
   /*[SDLK_RALT]=0,      */
   /*[SDLK_RETURN]=0,    */
   /*[SDLK_SPACE]=0,     */
   /*[SDLK_LCTRL]=0,     */
   /*[SDLK_PAGEUP]=0,    */
   /*[SDLK_PAGEDOWN]=0,  */
   /*[SDLK_HOME]=0,      */
   /*[SDLK_END]=0,       */
   /*[SDLK_r]=0,         */
   /*[SDLK_a]=0,         */
   /*[SDLK_d]=0,         */
   /*[SDLK_e]=0,         */
   /*[SDLK_w]=0,         */
   /*[SDLK_q]=0,         */
   /*[SDLK_f]=0,         */
   /*[SDLK_s]=0,         */
/*};*/

static  unsigned char r_Key[] = {
   [SDLK_UP]=0,        
   [SDLK_DOWN]=0,      
   [SDLK_LEFT]=0,      
   [SDLK_RIGHT]=0,     
   [SDLK_ESCAPE]=0,    
   [SDLK_INSERT]=0,    
   [SDLK_LALT]=0,      
   [SDLK_RALT]=0,      
   [SDLK_RETURN]=0,    
   [SDLK_SPACE]=0,     
   [SDLK_LCTRL]=0,     
   [SDLK_PAGEUP]=0,    
   [SDLK_PAGEDOWN]=0,  
   [SDLK_HOME]=0,      
   [SDLK_END]=0,       
   [SDLK_r]=0,         
   [SDLK_a]=0,         
   [SDLK_d]=0,         
   [SDLK_e]=0,         
   [SDLK_w]=0,         
   [SDLK_q]=0,         
   [SDLK_f]=0,         
   [SDLK_s]=0,         
};


static const char *keyname[] = {
  "NONE",
  _KEYS(keyname)
};

int SDL_PushEvent(SDL_Event *ev) {
  return 0;
}

int SDL_PollEvent(SDL_Event *ev) {
	char buf[64];
	/*static int jishu=0;*/
	/*printf("get here poll event%d\n",jishu++);*/
	if (NDL_PollEvent(buf, sizeof(buf))) {
		/*printf("get pollevent\n");*/
		char str[64];
		char *first,*second;
		strcpy(str,buf);
		/*printf("%s", str);*/
		first=strtok(str," ");
		/*printf("pollevent first=%s\n",first);*/
		second=strtok(NULL,"\n");
		/*printf("pollevent second=%s\n",second);*/
		if(strcmp(first,"kd")==0){
			ev->type=SDL_KEYDOWN;
		}
		else if(strcmp(first,"ku")==0)
			ev->type=SDL_KEYUP;
		/*else*/
			/*ev->type=Other_events;*/
		if(strcmp(second,"J")==0)
			ev->key.keysym.sym=SDLK_J;
		else  if(strcmp(second,"K")==0)
			ev->key.keysym.sym=SDLK_K;
		else  if(strcmp(second,"F")==0)
			ev->key.keysym.sym=SDLK_F;
		else if(strcmp(second,"LEFT")==0)
			ev->key.keysym.sym=SDLK_LEFT;
		else if(strcmp(second,"RIGHT")==0)
			ev->key.keysym.sym=SDLK_RIGHT;
		else if(strcmp(second,"UP")==0){
			ev->key.keysym.sym=SDLK_UP;}
		else if(strcmp(second,"DOWN")==0){
			ev->key.keysym.sym=SDLK_DOWN;}
		else if(strcmp(second,"SPACE")==0){
			ev->key.keysym.sym=SDLK_SPACE;
		}
		else if(strcmp(second,"ESCAPE")==0){
			ev->key.keysym.sym=SDLK_ESCAPE;
		}
		else if(strcmp(second,"INSERT")==0){
			ev->key.keysym.sym=SDLK_INSERT;
		}
		else if(strcmp(second,"LALT")==0){
			ev->key.keysym.sym=SDLK_LALT;
		}
		else if(strcmp(second,"RALT")==0){
			ev->key.keysym.sym=SDLK_RALT;
		}
		else if(strcmp(second,"RETRUN")==0){
			ev->key.keysym.sym=SDLK_RETURN;
		}
		else if(strcmp(second,"BACKSPACE")==0){
			ev->key.keysym.sym=SDLK_BACKSPACE;
		}
		else if(strcmp(second,"SLASH")==0){
			ev->key.keysym.sym=SDLK_SLASH;
		}
		else if(strcmp(second,"LCTRL")==0){
			ev->key.keysym.sym=SDLK_LCTRL;
		}
		else if(strcmp(second,"PAGEUP")==0){
			ev->key.keysym.sym=SDLK_PAGEUP;
		}
		else if(strcmp(second,"PAGEDOWN")==0){
			ev->key.keysym.sym=SDLK_PAGEDOWN;
		}
		else if(strcmp(second,"RETURN")==0){
			ev->key.keysym.sym=SDLK_RETURN;
		}
		/*else if(strcmp(second,"PAGEHOME")==0){*/
			/*ev->key.keysym.sym=SDLK_PAGEHOME;*/
		/*}*/
		else if(strcmp(second,"HOME")==0){
			ev->key.keysym.sym=SDLK_HOME;
		}
		else if(strcmp(second,"END")==0){
			ev->key.keysym.sym=SDLK_END;
		}
		else if(strcmp(second,"R")==0){
			ev->key.keysym.sym=SDLK_r;
		}
		else if(strcmp(second,"A")==0){
			ev->key.keysym.sym=SDLK_a;
		}
		else if(strcmp(second,"D")==0){
			ev->key.keysym.sym=SDLK_d;
		}
		else if(strcmp(second,"E")==0){
			ev->key.keysym.sym=SDLK_e;
		}
		else if(strcmp(second,"W")==0){
			ev->key.keysym.sym=SDLK_w;
		}
		else if(strcmp(second,"Q")==0){
			ev->key.keysym.sym=SDLK_q;
		}
		else if(strcmp(second,"F")==0){
			ev->key.keysym.sym=SDLK_f;
		}
		else if(strcmp(second,"S")==0){
			ev->key.keysym.sym=SDLK_s;
		}
		else if(strcmp(second,"B")==0){
			ev->key.keysym.sym=SDLK_b;
		}
		else if(strcmp(second,"I")==0){
			ev->key.keysym.sym=SDLK_i;
		}
		else if(strcmp(second,"N")==0){
			ev->key.keysym.sym=SDLK_n;
		}
		else if(strcmp(second,"P")==0){
			ev->key.keysym.sym=SDLK_p;
		}
		else if(strcmp(second,"L")==0){
			ev->key.keysym.sym=SDLK_l;
		}
		else if(strcmp(second,"ESCAPE")==0){
			ev->key.keysym.sym=SDLK_ESCAPE;
		}
		else if(strcmp(second,"LSHIFT")==0){
			ev->key.keysym.sym=SDLK_LSHIFT;
		}
		else{ 
			ev->key.keysym.sym=NULL;
		}
		for(int i=0;i<sizeof(r_Key)/sizeof(r_Key[0]);i++)
			if(ev->type==SDL_KEYDOWN&&ev->key.keysym.sym==i)
				r_Key[i]=1;
		for(int i=0;i<sizeof(r_Key)/sizeof(r_Key[0]);i++)
			if(ev->type==SDL_KEYUP&&ev->key.keysym.sym==i)
				r_Key[i]=0;
		/*if(ev->type==SDL_KEYDOWN&&ev->key.keysym.sym==SDLK_SPACE)*/
			/*r_Key[SDLK_SPACE]=1;     */
		/*else if(ev->type==SDL_KEYDOWN&&ev->key.keysym.sym==SDLK_UP)*/
				/*r_Key[SDLK_UP]=1;     */
		/*else if(ev->type==SDL_KEYDOWN&&ev->key.keysym.sym==SDLK_DOWN)*/
				/*r_Key[SDLK_DOWN]=1;     */
		/*else if(ev->type==SDL_KEYDOWN&&ev->key.keysym.sym==SDLK_LEFT)*/
				/*r_Key[SDLK_LEFT]=1;     */
		/*else if(ev->type==SDL_KEYDOWN&&ev->key.keysym.sym==SDLK_RIGHT)*/
				/*r_Key[SDLK_RIGHT]=1;     */
		/*else if(ev->type==SDL_KEYUP&&ev->key.keysym.sym==SDLK_SPACE)*/
				/*r_Key[SDLK_SPACE]=0;     */
		/*else if(ev->type==SDL_KEYUP&&ev->key.keysym.sym==SDLK_UP)*/
				/*r_Key[SDLK_UP]=0;     */
		/*else if(ev->type==SDL_KEYUP&&ev->key.keysym.sym==SDLK_DOWN)*/
				/*r_Key[SDLK_DOWN]=0;     */
		/*else if(ev->type==SDL_KEYUP&&ev->key.keysym.sym==SDLK_LEFT)*/
				/*r_Key[SDLK_LEFT]=0;     */
		/*else if(ev->type==SDL_KEYUP&&ev->key.keysym.sym==SDLK_RIGHT)*/
				/*r_Key[SDLK_RIGHT]=0; */    
		return 1;
	}
	else{
		/*r_Key[SDLK_SPACE]=0;     */
		/*printf("other\n");*/
		/*ev->type=Other_events;*/
		/*ev->key.keysym.sym=NULL;*/
		return 0;
	}
}

int SDL_WaitEvent(SDL_Event *event) {
	char buf[64];
	while(NDL_PollEvent(buf,sizeof(buf))==0);
	char str[64];
	char *first,*second;
	strcpy(str,buf);
	printf("%s", str);
	first=strtok(str," ");
	/*printf("waitevent first=%s\n",first);*/
	second=strtok(NULL,"\n");
	/*printf("waitevent second=%s\n",second);*/
	if(strcmp(first,"kd")==0)
		event->type=SDL_KEYDOWN;
	else if(strcmp(first,"ku")==0)
		event->type=SDL_KEYUP;
	/*else*/
		/*event->type=Other_events;*/
	if(strcmp(second,"J")==0)
		event->key.keysym.sym=SDLK_J;
	else  if(strcmp(second,"K")==0)
		event->key.keysym.sym=SDLK_K;
	else  if(strcmp(second,"F")==0)
		event->key.keysym.sym=SDLK_F;
	else if(strcmp(second,"LEFT")==0)
		event->key.keysym.sym=SDLK_LEFT;
	else if(strcmp(second,"RIGHT")==0)
		event->key.keysym.sym=SDLK_RIGHT;
	else if(strcmp(second,"UP")==0)
		event->key.keysym.sym=SDLK_UP;
	else if(strcmp(second,"DOWN")==0)
		event->key.keysym.sym=SDLK_DOWN;
	else if(strcmp(second,"SPACE")==0)
		event->key.keysym.sym=SDLK_SPACE;
	else if(strcmp(second,"0")==0)
		event->key.keysym.sym=SDLK_0;
	else if(strcmp(second,"1")==0)
		event->key.keysym.sym=SDLK_1;
	else if(strcmp(second,"2")==0)
		event->key.keysym.sym=SDLK_2;
	else if(strcmp(second,"3")==0)
		event->key.keysym.sym=SDLK_3;
	else if(strcmp(second,"4")==0)
		event->key.keysym.sym=SDLK_4;
	else if(strcmp(second,"5")==0)
		event->key.keysym.sym=SDLK_5;
	else if(strcmp(second,"6")==0)
		event->key.keysym.sym=SDLK_6;
	else if(strcmp(second,"7")==0)
		event->key.keysym.sym=SDLK_7;
	else if(strcmp(second,"8")==0)
		event->key.keysym.sym=SDLK_8;
	else if(strcmp(second,"7")==9)
		event->key.keysym.sym=SDLK_9;
	else 
		event->key.keysym.sym=NULL;
	return 1;
}

int SDL_PeepEvents(SDL_Event *ev, int numevents, int action, uint32_t mask) {
  return 0;
}

uint8_t* SDL_GetKeyState(int *numkeys) {
	/*static int jishu=0;*/
	/*printf("get key state	%d\n",jishu++);*/
	/*SDL_PollEvent(&ev);*/

	/*if (getkey){*/
	/*[>if(SDL_PollEvent(ev)){<]*/
		/*if(ev->key.keysym.sym==SDLK_SPACE){*/
			/*printf("get here1\n");*/
			/*r_Key[SDLK_SPACE]=1;     */
		/*}*/
		/*else {*/
			/*printf("get here2\n");*/
			/*r_Key[SDLK_SPACE]=0;     }*/
	/*getkey=0;*/
	/*}*/
	/*static SDL_Event *ev;*/
	/*char buf[64];*/
	/*if (NDL_PollEvent(buf, sizeof(buf))) {*/
		/*[>printf("get pollevent\n");<]*/
		/*char str[64];*/
		/*char *first,*second;*/
		/*strcpy(str,buf);*/
		/*[>printf("%s", str);<]*/
		/*first=strtok(str," ");*/
		/*[>printf("first=%s\n",first);<]*/
		/*second=strtok(NULL,"\n");*/
		/*[>printf("second=%s\n",second);<]*/
		/*if(strcmp(first,"kd")==0)*/
			/*ev->type=SDL_KEYDOWN;*/
		/*else if(strcmp(first,"ku")==0)*/
			/*ev->type=SDL_KEYUP;*/
		/*[>else<]*/
			/*[>ev->type=Other_events;<]*/
		/*if(strcmp(second,"J")==0)*/
			/*ev->key.keysym.sym=SDLK_J;*/
		/*else  if(strcmp(second,"K")==0)*/
			/*ev->key.keysym.sym=SDLK_K;*/
		/*else  if(strcmp(second,"F")==0)*/
			/*ev->key.keysym.sym=SDLK_F;*/
		/*else if(strcmp(second,"LEFT")==0)*/
			/*ev->key.keysym.sym=SDLK_LEFT;*/
		/*else if(strcmp(second,"RIGHT")==0)*/
			/*ev->key.keysym.sym=SDLK_RIGHT;*/
		/*else if(strcmp(second,"UP")==0)*/
			/*ev->key.keysym.sym=SDLK_UP;*/
		/*else if(strcmp(second,"DOWN")==0)*/
			/*ev->key.keysym.sym=SDLK_DOWN;*/
		/*else if(strcmp(second,"SPACE")==0){*/
			/*printf("here=space\n");*/
			/*r_Key[SDLK_SPACE]=1;     */
			/*ev->key.keysym.sym=SDLK_SPACE;}*/
		/*else */
			/*ev->key.keysym.sym=NULL;*/
		/*printf("why no return 3\n");*/
		/*getkey=1;*/
		/*return (uint8_t *)r_Key;*/
		/*printf("why no return 4\n");*/
	/*}*/
	/*else{*/
		/*[>printf("other\n");<]*/
		/*[>ev->type=Other_events;<]*/
		/*[>ev->key.keysym.sym=NULL;<]*/
		/*[>return 0;<]*/
		/*return (uint8_t *)r_Key;*/
	/*}*/

	/*pr_Key[SDLK_SPACE]=r_Key[SDLK_SPACE];*/
	/*pr_Key[SDLK_UP]=r_Key[SDLK_UP];*/
	/*pr_Key[SDLK_DOWN]=r_Key[SDLK_DOWN];*/
	/*r_Key[SDLK_SPACE]=0;*/
	/*r_Key[SDLK_UP]=0;*/
	/*r_Key[SDLK_DOWN]=0;*/
 /*if(r_Key[SDLK_SPACE]==1)    */
	 /*printf("sdlk_space use\n");*/
 return (uint8_t *)r_Key;
  return NULL;
}
