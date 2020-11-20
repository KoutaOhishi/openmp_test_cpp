#include <stdio.h>
#include <omp.h> 

/*

http://www.sanko-shoko.net/note.php?id=9twp

how to compile:
$ cd /path/to/this/file/dir
$ g++ main.cpp -fopenmp 
$ ./a.out
*/

int main() {
    printf("使用可能な最大スレッド数：%d\n", omp_get_max_threads());

#pragma omp parallel for
    for (int i = 0; i < 10; i++) {

        // （何かの処理）

        // 検証用の表示
        printf("thread = %d, i = %2d\n", omp_get_thread_num(), i);
    }

    return 0;
}


