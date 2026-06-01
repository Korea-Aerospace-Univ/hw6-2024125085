// 2024125085 소프트웨어학과 한수민
#include <stdio.h>

int main()
{
    char arr[10] = {};                  // char 배열 선언
    
    int count=0,num=0;                        // 비교해줄 수 있는 변수 선언(중복횟수)
    char c01=' ',c02=' ';                   // 문자를 저장하는 변수 선언
    
    for(char *p=arr;p<arr+10;p++){      //배열의 주소값을 1씩 더하는 연산의
        scanf("%c",p);                  //반복으로 포인터를 이용한 배열에 값 넣기
    }
    for(char *p=arr;p<arr+10;p++){      // 이중 반복문 : 두 가지의 같은 배열을
        for(char *q=arr;q<arr+10;q++){  // 반복시키며 안의 문자열을 비교함
            if(*p == *q){               // 문자열이 같을 시
                count++;                // count++
                c01 = *p;               // 해당 index의 문자열 변수에 저장
            }
            if(count > num){            // 중복 횟수를 비교함(가장클시)
                num=count;              // num변수에 중복횟수 저장
                c02=c01;                // c02에 가장 중복이 잦은 문자 저장
            }
        }
        count=0;                        // 변수초기화(count)
        c01=' ';                        // 변수초기화(c01)
    }
    printf("%c %d", c02, num);          // c02,num(가장많이 반복한문자, 반복횟수)  
                                        // 출력
    return 0;
}
