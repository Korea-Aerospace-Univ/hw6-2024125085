// 2024125085 소프트웨어학과 한수민
#include <stdio.h>

int main()
{
    int N = 0;      // N선언(각 배열에 N개의 정수 입력)

    int arr01[20] = {};     // 배열선언 01(값입력)
    int arr02[20] = {};     // 배열선언 02(값입력)
    int arrcalc[20] = {};   // 배열선언 03(연산된 값 저장)
    
    scanf("%d", &N);        // N 입력
    
    for(int *p=arr01; p<arr01+N; p++){      // arr01 입력
        scanf("%d", p);                     // (포인터를 이용함)
    }
    for(int *q=arr02; q<arr02+N; q++){      // arr02 입력
        scanf("%d", q);                     // (포인터를 이용함)
    }
    for(int *r=arrcalc; r<arrcalc+N; r++){  // arrcalc 입력
        *r = arr01[r-arrcalc] + arr02[arrcalc+N-r-1];   // 주소값을 이용한 연산
    }       // r=arrcalc이기때문에(같은주소값)이를통해arr01,arr02의 합을구함
    for(int *r=arrcalc; r<arrcalc+N; r++){ // 연산된 arrcalc내의값 출력
        printf("%d ", *r);
    }
    
    return 0;
}
