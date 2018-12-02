//
//  main.m
//  testMalloc
//
//  Created by wqan3313 on 2018/11/30.
//


int main(int argc, const char * argv[]) {

    void* memarry[1000000];
    unsigned int bytes = 255;
    
    for (int i = 0; i < 1000000; i++) {
	memarry[i] = malloc(bytes);
	//free(memarry[i]);
    }
    for (int i = 0; i < 1000000; i++) {
	//free(memarry[i]);
    }
    for (int i = 257; i < 1008; i++) {
	void *tinyMalloc = malloc(512);
    }
    
    void *smallMalloc = malloc(1024);
    void *largerMalloc = malloc(127*1024);
    NSLog(@"Hello, World!");

    return 0;
}
