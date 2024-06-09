# 알고리즘 문제 풀이

[![Solved.ac
프로필](http://mazassumnida.wtf/api/v2/generate_badge?boj=songsubin)](https://solved.ac/songsubin)
[![mazandi profile](http://mazandi.herokuapp.com/api?handle=songsubin&theme=cold)](https://solved.ac/songsubin)

알고리즘 문제 솔루션 저장소입니다. 모든 솔루션은 C++ 언어로 작성되었으며, `ctrl + F`로 검색할 수 있습니다.

<br>

## Table of Contents

  - [코딩 규칙](#coding-rules)
  - [알고리즘 분류](#algorithm-tag)
  - [커밋 가이드라인](#commit-guidelines)
  - [이슈 가이드라인](#issue-guidelines)
  - [문제 솔루션 검색](#problem-solution)

<br>

## Coding Rules

### Header

  - 헤더 파일은 알파벳 순서로 정렬한다.

### Variable

  - 변수명은 snake case를 따른다.
  - 변수명은 문제에 나온 명칭을 그대로 사용한다.
  - 문제에 나온 명칭을 사용할 수 없으면 의미 있는 변수명을 짓는다.
  - 임시로 값을 저장하는 변수를 제외하고 모두 전역 변수로 선언한다.
  - 변수 선언 순서: 기본 자료형 > 표준 라이브러리 컨테이너 > 방향 벡터 배열

### Function

  - 함수명은 pascal case를 따른다.
  - 함수명은 동사로 시작한다. (예외: DFS, BFS, Factorial 등)

### Formatting

  - 들여쓰기는 공백 문자 4개를 사용한다.
  - 한 줄짜리 if, for, while 문에는 되도록 중괄호를 사용하지 않는다.
  - 시간 초과가 일어날 수 있으므로 `endl` 대신 `'\n'` 개행 문자를 사용한다.
  - 시간 복잡도가 중요한 문제는 `ios::sync_with_stdio(false); cin.tie(nullptr);`를 써야 한다.

<br>

## Algorithm Tag

알고리즘별로 분류하여 알고리즘 공부의 효용성을 높였습니다.

### Programmers

  - 코딩 테스트 고득점 키트 문제는 [프로그래머스 분류](https://school.programmers.co.kr/learn/challenges?tab=algorithm_practice_kit)에 따른다.

### Baekjoon

  - 솔루션은 기본적으로 가장 주요한 태그 하나로만 분류한다.
  - 여러 알고리즘이 포함될 경우 [문제 수가 적은 태그](https://www.acmicpc.net/problem/tags)로 분류한다.

<br>

## Commit Guidelines

### Commit Message Format

  ```
  <type>: <subject>
  ```

### Commit Type

  - docs: README.md 등 문서 수정
  - feat: 새로운 문제 풀이 코드 추가
  - fix: 기존 문제 풀이 코드 오류 수정
  - refactor: 오류 수정을 제외한 리팩토링
  - style: 코드 의미에 영향이 없는 코드 수정
  - chore: 위에 해당하지 않는 기타 변경 사항
  - rename: 파일 이동 (파일명 변경)
  - remove: 파일 삭제

### Commit Example

  ```
  feat: add boj1000.cpp
  docs: add coding rules
  rename: boj1000.cpp to boj2000.cpp
  ```

<br>

## Issue Guidelines

  - [수정] 수정이 필요한 사항
    - `틀렸습니다` : 제출하면 틀리는 코드
    - `리팩토링` : 리팩토링이 필요한 코드
    - `아이디어` : 새로운 문제 풀이 아이디어
    - `기타` : 코드를 제외한 기타 수정 사항
  - [복습] 복습이 필요한 사항
    - `복습` : 복습이 필요한 코드

<br>

## Problem Solution

`ctrl + F`로 원하는 풀이를 찾을 수 있습니다.

### Programmers

<table>
<thead>
  <tr>
    <th>레벨</th>
    <th>문제</th>
    <th>해설</th>
    <th>코드</th>
  </tr>
</thead>
<tbody>
  <!-- 레벨 & 문제번호 순으로 정렬한다. -->
  <!--
  <tr>
    <td>Level 레벨</td>
    <td><a href="문제링크">문제제목</a></td>
    <td><a href="해설링크">알고리즘분류</a></td>
    <td><a href="코드링크">C++</a></td>
  </tr>
  -->
  <tr>
    <td>Level 1</td>
    <td><a href="https://school.programmers.co.kr/learn/courses/30/lessons/42748">K번째수</a></td>
    <td><a>정렬</a></td>
    <td><a href="sorting/prog42748.cpp">C++</a></td>
  </tr>
  <tr>
    <td>Level 1</td>
    <td><a href="https://school.programmers.co.kr/learn/courses/30/lessons/42840">모의고사</a></td>
    <td><a>완전탐색</a></td>
    <td><a href="brute-force/prog42840.cpp">C++</a></td>
  </tr>
  <tr>
    <td>Level 1</td>
    <td><a href="https://school.programmers.co.kr/learn/courses/30/lessons/86491">최소직사각형</a></td>
    <td><a>완전탐색</a></td>
    <td><a href="brute-force/prog86491.cpp">C++</a></td>
  </tr>
  <tr>
    <td>Level 2</td>
    <td><a href="https://school.programmers.co.kr/learn/courses/30/lessons/1844">게임 맵 최단거리</a></td>
    <td><a>BFS</a></td>
    <td><a href="bfs/prog1844.cpp">C++</a></td>
  </tr>
  <tr>
    <td>Level 2</td>
    <td><a href="https://school.programmers.co.kr/learn/courses/30/lessons/42746">가장 큰 수</a></td>
    <td><a>정렬</a></td>
    <td><a href="sorting/prog42746.cpp">C++</a></td>
  </tr>
  <tr>
    <td>Level 2</td>
    <td><a href="https://school.programmers.co.kr/learn/courses/30/lessons/43165">타겟 넘버</a></td>
    <td><a>BFS</a></td>
    <td><a href="bfs/prog43165.cpp">C++</a></td>
  </tr>
  <tr>
    <td>Level 3</td>
    <td><a href="https://school.programmers.co.kr/learn/courses/30/lessons/43105">정수 삼각형</a></td>
    <td><a>DP</a></td>
    <td><a href="dp/prog43105.cpp">C++</a></td>
  </tr>
  <tr>
    <td>Level 3</td>
    <td><a href="https://school.programmers.co.kr/learn/courses/30/lessons/43238">입국심사</a></td>
    <td><a>이진탐색</a></td>
    <td><a href="binary-search/prog43238.cpp">C++</a></td>
  </tr>
</tbody>
</table>

### Baekjoon Online Judge

(2024년 현재 백준 목차 업데이트 중)

<table>
<thead>
  <tr>
    <th>번호</th>
    <th>문제</th>
    <th>해설</th>
    <th>코드</th>
  </tr>
</thead>
<tbody>
  <!-- 문제번호 순으로 정렬한다. -->
  <!--
  <tr>
    <td>번호</td>
    <td><a href="문제링크">문제제목</a></td>
    <td><a href="해설링크">알고리즘분류</a></td>
    <td><a href="코드링크">C++</a></td>
  </tr>
  -->
  <tr>
    <td>1000</td>
    <td><a href="https://www.acmicpc.net/problem/1000">A+B</a></td>
    <td><a href="implementation/README.md#boj1000">구현</a></td>
    <td><a href="implementation/boj1000.cpp">C++</a></td>
  </tr>
  <tr>
    <td>1001</td>
    <td><a href="https://www.acmicpc.net/problem/1001">A-B</a></td>
    <td><a href="implementation/README.md#boj1001">구현</a></td>
    <td><a href="implementation/boj1001.cpp">C++</a></td>
  </tr>
  <tr>
    <td>1002</td>
    <td><a href="https://www.acmicpc.net/problem/1002">터렛</a></td>
    <td><a href="mathematics/README.md#boj1002">수학</a></td>
    <td><a href="mathematics/boj1002.cpp">C++</a></td>
  </tr>
  <tr>
    <td>1003</td>
    <td><a href="https://www.acmicpc.net/problem/1003">피보나치 함수</a></td>
    <td><a href="dp/README.md#boj1003">DP</a></td>
    <td><a href="dp/boj1003.cpp">C++</a></td>
  </tr>
  <tr>
    <td>1004</td>
    <td><a href="https://www.acmicpc.net/problem/1004">어린 왕자</a></td>
    <td><a href="mathematics/README.md#boj1004">수학</a></td>
    <td><a href="mathematics/boj1004.cpp">C++</a></td>
  </tr>
  <tr>
    <td>1005</td>
    <td><a href="https://www.acmicpc.net/problem/1005">ACM Craft</a></td>
    <td><a href="topological-sort/README.md#boj1005">위상정렬</a></td>
    <td><a href="topological-sort/boj1005.cpp">C++</a></td>
  </tr>
  <tr>
    <td>1007</td>
    <td><a href="https://www.acmicpc.net/problem/1007">벡터 매칭</a></td>
    <td><a>수학</a></td>
    <td><a href="mathematics/boj1007.cpp">C++</a></td>
  </tr>
  <tr>
    <td>1008</td>
    <td><a href="https://www.acmicpc.net/problem/1008">A/B</a></td>
    <td><a>구현</a></td>
    <td><a href="implementation/boj1005.cpp">C++</a></td>
  </tr>
  <tr>
    <td>1009</td>
    <td><a href="https://www.acmicpc.net/problem/1009">분산처리</a></td>
    <td><a href="mathematics/README.md#boj1009">수학</a></td>
    <td><a href="mathematics/boj1009.cpp">C++</a></td>
  </tr>
  <tr>
    <td>1267</td>
    <td><a href="https://www.acmicpc.net/problem/1267">핸드폰 요금</a></td>
    <td><a>구현</a></td>
    <td><a href="implementation/boj1267.cpp">C++</a></td>
  </tr>
  <tr>
    <td>1475</td>
    <td><a href="https://www.acmicpc.net/problem/1475">방 번호</a></td>
    <td><a>구현</a></td>
    <td><a href="implementation/boj1475.cpp">C++</a></td>
  </tr>
  <tr>
    <td>1919</td>
    <td><a href="https://www.acmicpc.net/problem/1919">애너그램 만들기</a></td>
    <td><a>구현</a></td>
    <td><a href="implementation/boj1919.cpp">C++</a></td>
  </tr>
  <tr>
    <td>2309</td>
    <td><a href="https://www.acmicpc.net/problem/2309">일곱 난쟁이</a></td>
    <td><a>완전탐색</a></td>
    <td><a href="brute-force/boj2309.cpp">C++</a></td>
  </tr>
  <tr>
    <td>2438</td>
    <td><a href="https://www.acmicpc.net/problem/2438">별 찍기 - 1</a></td>
    <td><a>구현</a></td>
    <td><a href="implementation/boj2438.cpp">C++</a></td>
  </tr>
  <tr>
    <td>2439</td>
    <td><a href="https://www.acmicpc.net/problem/2439">별 찍기 - 2</a></td>
    <td><a>구현</a></td>
    <td><a href="implementation/boj2439.cpp">C++</a></td>
  </tr>
  <tr>
    <td>2440</td>
    <td><a href="https://www.acmicpc.net/problem/2440">별 찍기 - 3</a></td>
    <td><a>구현</a></td>
    <td><a href="implementation/boj2440.cpp">C++</a></td>
  </tr>
  <tr>
    <td>2441</td>
    <td><a href="https://www.acmicpc.net/problem/2441">별 찍기 - 4</a></td>
    <td><a>구현</a></td>
    <td><a href="implementation/boj2441.cpp">C++</a></td>
  </tr>
  <tr>
    <td>2442</td>
    <td><a href="https://www.acmicpc.net/problem/2442">별 찍기 - 5</a></td>
    <td><a>구현</a></td>
    <td><a href="implementation/boj2442.cpp">C++</a></td>
  </tr>
  <tr>
    <td>2443</td>
    <td><a href="https://www.acmicpc.net/problem/2443">별 찍기 - 6</a></td>
    <td><a>구현</a></td>
    <td><a href="implementation/boj2443.cpp">C++</a></td>
  </tr>
  <tr>
    <td>2444</td>
    <td><a href="https://www.acmicpc.net/problem/2444">별 찍기 - 7</a></td>
    <td><a>구현</a></td>
    <td><a href="implementation/boj2444.cpp">C++</a></td>
  </tr>
  <tr>
    <td>2445</td>
    <td><a href="https://www.acmicpc.net/problem/2445">별 찍기 - 8</a></td>
    <td><a>구현</a></td>
    <td><a href="implementation/boj2445.cpp">C++</a></td>
  </tr>
  <tr>
    <td>2446</td>
    <td><a href="https://www.acmicpc.net/problem/2446">별 찍기 - 9</a></td>
    <td><a>구현</a></td>
    <td><a href="implementation/boj2446.cpp">C++</a></td>
  </tr>
  <tr>
    <td>2480</td>
    <td><a href="https://www.acmicpc.net/problem/2480">주사위 세개</a></td>
    <td><a>구현</a></td>
    <td><a href="implementation/boj2480.cpp">C++</a></td>
  </tr>
  <tr>
    <td>2490</td>
    <td><a href="https://www.acmicpc.net/problem/2490">윷놀이</a></td>
    <td><a>구현</a></td>
    <td><a href="implementation/boj2490.cpp">C++</a></td>
  </tr>
  <tr>
    <td>2557</td>
    <td><a href="https://www.acmicpc.net/problem/2557">Hello World</a></td>
    <td><a>구현</a></td>
    <td><a href="implementation/boj2557.cpp">C++</a></td>
  </tr>
  <tr>
    <td>2562</td>
    <td><a href="https://www.acmicpc.net/problem/2562">최댓값</a></td>
    <td><a>구현</a></td>
    <td><a href="implementation/boj2562.cpp">C++</a></td>
  </tr>
  <tr>
    <td>2576</td>
    <td><a href="https://www.acmicpc.net/problem/2576">홀수</a></td>
    <td><a>구현</a></td>
    <td><a href="implementation/boj2576.cpp">C++</a></td>
  </tr>
  <tr>
    <td>2577</td>
    <td><a href="https://www.acmicpc.net/problem/2577">숫자의 개수</a></td>
    <td><a>구현</a></td>
    <td><a href="implementation/boj2577.cpp">C++</a></td>
  </tr>
  <tr>
    <td>2587</td>
    <td><a href="https://www.acmicpc.net/problem/2587">대표값2</a></td>
    <td><a>구현</a></td>
    <td><a href="implementation/boj2587.cpp">C++</a></td>
  </tr>
  <tr>
    <td>2752</td>
    <td><a href="https://www.acmicpc.net/problem/2752">세수정렬</a></td>
    <td><a>구현</a></td>
    <td><a href="implementation/boj2752.cpp">C++</a></td>
  </tr>
  <tr>
    <td>2753</td>
    <td><a href="https://www.acmicpc.net/problem/2753">윤년</a></td>
    <td><a>구현</a></td>
    <td><a href="implementation/boj2753.cpp">C++</a></td>
  </tr>
  <tr>
    <td>3273</td>
    <td><a href="https://www.acmicpc.net/problem/3273">두 수의 합</a></td>
    <td><a>구현</a></td>
    <td><a href="two-pointer/boj3273.cpp">C++</a></td>
  </tr>
  <tr>
    <td>9498</td>
    <td><a href="https://www.acmicpc.net/problem/9498">시험 성적</a></td>
    <td><a>구현</a></td>
    <td><a href="implementation/boj9498.cpp">C++</a></td>
  </tr>
  <tr>
    <td>10093</td>
    <td><a href="https://www.acmicpc.net/problem/10093">숫자</a></td>
    <td><a>구현</a></td>
    <td><a href="implementation/boj10093.cpp">C++</a></td>
  </tr>
  <tr>
    <td>10171</td>
    <td><a href="https://www.acmicpc.net/problem/10171">고양이</a></td>
    <td><a>구현</a></td>
    <td><a href="implementation/boj10171.cpp">C++</a></td>
  </tr>
  <tr>
    <td>10804</td>
    <td><a href="https://www.acmicpc.net/problem/10804">카드 역배치</a></td>
    <td><a>구현</a></td>
    <td><a href="implementation/boj10804.cpp">C++</a></td>
  </tr>
  <tr>
    <td>10807</td>
    <td><a href="https://www.acmicpc.net/problem/10807">개수 세기</a></td>
    <td><a>구현</a></td>
    <td><a href="implementation/boj10807.cpp">C++</a></td>
  </tr>
  <tr>
    <td>10808</td>
    <td><a href="https://www.acmicpc.net/problem/10808">알파벳 개수</a></td>
    <td><a>구현</a></td>
    <td><a href="implementation/boj10808.cpp">C++</a></td>
  </tr>
  <tr>
    <td>10869</td>
    <td><a href="https://www.acmicpc.net/problem/10869">사칙연산</a></td>
    <td><a>구현</a></td>
    <td><a href="implementation/boj10869.cpp">C++</a></td>
  </tr>
  <tr>
    <td>10871</td>
    <td><a href="https://www.acmicpc.net/problem/10871">X보다 작은 수</a></td>
    <td><a>구현</a></td>
    <td><a href="implementation/boj10871.cpp">C++</a></td>
  </tr>
  <tr>
    <td>11328</td>
    <td><a href="https://www.acmicpc.net/problem/11328">Strfry</a></td>
    <td><a>구현</a></td>
    <td><a href="implementation/boj11328.cpp">C++</a></td>
  </tr>
  <tr>
    <td>13300</td>
    <td><a href="https://www.acmicpc.net/problem/13300">방 배정</a></td>
    <td><a>구현</a></td>
    <td><a href="implementation/boj13300.cpp">C++</a></td>
  </tr>
  <tr>
    <td>15552</td>
    <td><a href="https://www.acmicpc.net/problem/15552">빠른 A+B</a></td>
    <td><a>구현</a></td>
    <td><a href="implementation/boj15552.cpp">C++</a></td>
  </tr>
</tbody>
</table>
