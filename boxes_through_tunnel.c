#include <stdio.h>
#include <stdlib.h>
#define MAX_HEIGHT 41
struct box
{
	int height,width,length;
};
typedef struct box box;
int get_volume(box b) {
	return b.length*b.height*b.width;
}
int is_lower_than_max_height(box b) {
	return b.height<41?1:0;
}
int main()
{
	int n;
	scanf("%d", &n);
	box *boxes = malloc(n * sizeof(box));
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &boxes[i].length, &boxes[i].width, &boxes[i].height);
	}
	for (int i = 0; i < n; i++) {
		if (is_lower_than_max_height(boxes[i])) {
			printf("%d\n", get_volume(boxes[i]));
		}
	}
	return 0;
}
//MY APPROACH:
/*
#include <stdio.h>
struct box{
    int l,b,h;
};
int volume(struct box i){
    return i.l*i.b*i.h;
}
int main(){
    int n;
    int l,b,h;
    scanf("%d",&n);
    struct box boxes[100];
    for(int i=1;i<=n;i++){
        scanf("%d %d %d",&boxes[i].l,&boxes[i].b,&boxes[i].h);
    }
    for(int i=1;i<=n;i++){
        if(boxes[i].h<41){
        int vol=volume(boxes[i]);
        printf("%d\n",vol);
        }
    }
    return 0;
}
*/