#include <NDL.h>
#include <SDL.h>

#define keyname(k) #k,

static const char *keyname[] = {
  "NONE",
  _KEYS(keyname)
};

int SDL_PushEvent(SDL_Event *ev) {
    printf("come SDL_PushEvent\n" );
  while(1);
  return 0;
}

int SDL_PollEvent(SDL_Event *ev) {
  // return 0;
  char buf[50] = "";
  int length = NDL_PollEvent(buf,50);

  if(length == 0) return 0;
  else{
    // printf("event is %s\n",buf);
    if(strncmp(buf,"kd",2) == 0){
      ev->type = SDL_KEYDOWN;
    }
    if(strncmp(buf,"ku",2) == 0){
      ev->type = SDL_KEYUP;
    }

    int index = 0 ; 
    while (strcmp(keyname[index] , "PAGEDOWN") != 0 && (strlen(buf +3)-1 !=  strlen(keyname[index])||strncmp(buf +3 , keyname[index],strlen(buf +3)-1) !=0)) 
    {
      index++;
    }

    ev->key.keysym.sym = index;

    return 1;


  }
}

int SDL_WaitEvent(SDL_Event *event) {
  
  char buf[50] = "";
  int length = 0;
  while(length == 0){
    length = NDL_PollEvent(buf,50);
  }
  // printf("event is %s\n ",buf);
  if(strncmp(buf,"kd",2)){
    event->type = SDL_KEYDOWN;
  }

  if(strncmp(buf,"ku",2)){
    event->type = SDL_KEYUP;
  }

  int index = 0 ; 
  while (strcmp(keyname[index] , "PAGEDOWN") != 0 && strncmp(buf +3 , keyname[index],strlen(buf +3)-1) !=0) 
  {
    index++;
  }
  event->key.keysym.sym = index;
  printf("k is %d\n",index);
  
  return 1;
}

int SDL_PeepEvents(SDL_Event *ev, int numevents, int action, uint32_t mask) {
  printf("come SDL_PeepEvents\n" );
  while(1);
  return 0;
}
#define keynum  83
static uint8_t keystate[keynum];
uint8_t* SDL_GetKeyState(int *numkeys) {
for(int i = 0 ; i < keynum ; i ++){
  keystate[i] = 0;
}

 char buf[50] = "";
  // int length = NDL_PollEvent(buf,50);
  int length = 0;
  int cnt = 0;
  while(length == 0){
    length = NDL_PollEvent(buf,50);
    cnt ++;
    if(cnt >= 1000) break;
  }

  if(length != 0) {


    int index = 0 ; 
    while (strcmp(keyname[index] , "PAGEDOWN") != 0 && (strlen(buf +3)-1 !=  strlen(keyname[index])||strncmp(buf +3 , keyname[index],strlen(buf +3)-1) !=0)) 
    {
      index++;
    }

        printf("event is %s\n",buf);
    if(strncmp(buf,"kd",2) == 0){
      keystate[index] = 1;
    }
    if(strncmp(buf,"ku",2) == 0){
      keystate[index] = 0;
    }
    printf("index is %d\n",index);



  }



  return keystate;
  // return NULL;
}
