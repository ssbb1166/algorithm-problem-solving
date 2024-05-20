# 알고리즘 문제 풀이

[![Solved.ac
프로필](http://mazassumnida.wtf/api/generate_badge?boj=songsubin)](https://solved.ac/songsubin)

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

### Variable

  - 변수명은 snake case를 따른다.
  - 변수명은 문제에 나온 명칭을 그대로 사용한다.
  - 문제에 나온 명칭을 사용할 수 없으면 의미 있는 변수명을 짓는다.
  - 임시로 값을 저장하는 변수를 제외하고 모두 전역 변수로 선언한다.

### Function

  - 함수명은 pascal case를 따른다.
  - 함수명은 동사로 시작한다. (예외: DFS, BFS, Factorial 등)

### Formatting

  - 들여쓰기는 공백 문자 4개를 사용한다.
  - 한 줄짜리 if, for, while 문에는 되도록 중괄호를 사용하지 않는다.
  - 시간 복잡도가 중요한 문제는 `ios::sync_with_stdio(false); cin.tie(nullptr);`를 써야 한다.
  - 특별한 경우를 제외하고 정답을 출력할 때 끝에 `'\n'` 개행 문자를 출력한다. `endl`은 사용하지 않는다.

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
</tbody>
</table>

### Baekjoon Online Judge

(2024년 현재 백준 목차 업데이트 중)

<table>
<thead>
  <tr>
    <th>번호</th>
    <th>레벨</th>
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
    <td>레벨</td>
    <td><a href="문제링크">문제제목</a></td>
    <td><a href="해설링크">알고리즘분류</a></td>
    <td><a href="코드링크">C++</a></td>
  </tr>
  -->
  <tr>
    <td>1000</td>
    <td>브론즈Ⅴ</td>
    <td><a href="https://www.acmicpc.net/problem/1000">A+B</a></td>
    <td><a href="implementation/README.md#boj1000">구현</a></td>
    <td><a href="implementation/boj1000.cpp">C++</a></td>
  </tr>
  <tr>
    <td>1001</td>
    <td>브론즈Ⅴ</td>
    <td><a href="https://www.acmicpc.net/problem/1001">A-B</a></td>
    <td><a href="implementation/README.md#boj1001">구현</a></td>
    <td><a href="implementation/boj1001.cpp">C++</a></td>
  </tr>
  <tr>
    <td>1002</td>
    <td>실버 Ⅲ</td>
    <td><a href="https://www.acmicpc.net/problem/1002">터렛</a></td>
    <td><a href="mathematics/README.md#boj1002">수학</a></td>
    <td><a href="mathematics/boj1002.cpp">C++</a></td>
  </tr>
  <tr>
    <td>1003</td>
    <td>실버 Ⅲ</td>
    <td><a href="https://www.acmicpc.net/problem/1003">피보나치 함수</a></td>
    <td><a href="dp/README.md#boj1003">DP</td>
    <td><a href="dp/boj1003.cpp">C++</a></td>
  </tr>
  <tr>
    <td>1004</td>
    <td>실버 Ⅲ</td>
    <td><a href="https://www.acmicpc.net/problem/1004">어린 왕자</a></td>
    <td><a href="mathematics/README.md#boj1004">수학</td>
    <td><a href="mathematics/boj1004.cpp">C++</a></td>
  </tr>
  <tr>
    <td>1005</td>
    <td>골드 Ⅲ</td>
    <td><a href="https://www.acmicpc.net/problem/1005">ACM Craft</a></td>
    <td><a href="topological-sort/README.md#boj1005">위상정렬</td>
    <td><a href="topological-sort/boj1005.cpp">C++</a></td>
  </tr>
</tbody>
</table>
