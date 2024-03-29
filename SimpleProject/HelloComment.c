﻿/*
제 목:  Hello world 출력하기
기 능:  문자열의 출력
파일이름 : HelloComment.c
수정날짜 : 2023. 11. 24
작성자 : 김민정
*/

#include <stdio.h>  // 헤더파일 선언

int main(void)  // main 함수의 시작
{
    /*
    이 삼수 내에서는 하나의 문자열을 출력한다.
    문자열은 모니터로 출력된다.
    */ 
    printf("Hello world! \n\n");    // 문자열의 출력

    printf("홍길동 \n홍 길 동\n홍  길  동\n\n"); // 문제 02-1 의 문제 1 답 출력

    printf("이    름: 김민정 \n");   // 문제 02-2 의 문제 1 답 출력
    printf("주    소: 서울시 성북구 화랑로 214 (래미안 석관) 111동 1302호 \n");
    printf("전화번호: 010-3536-0515 \n");
    return 0;   // 0의 반환
}   // main  함수의 끝