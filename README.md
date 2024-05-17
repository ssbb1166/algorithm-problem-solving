# 알고리즘 문제 풀이

[![Solved.ac
프로필](http://mazassumnida.wtf/api/generate_badge?boj=songsubin)](https://solved.ac/songsubin)

알고리즘 문제 솔루션 저장소입니다. 모든 솔루션은 C++ 언어로 작성되었으며, `ctrl + F`로 검색할 수 있습니다.

## Table of Contents

  - [코딩 규칙](#coding-rules)
  - [알고리즘 분류](#algorithm-classification)
  - [커밋 가이드라인](#commit-guidelines)
  - [이슈 가이드라인](#issue-guidelines)
  - [문제 솔루션 검색](#problem-solution)

## Coding Rules

### Variable Naming

  - 변수명은 snake case를 따른다.
  - 변수는 문제에 나온 명칭을 그대로 사용한다.
  - 문제에 나온 명칭을 사용할 수 없을 경우 의미 있는 변수명을 사용한다.
  - 변수는 임시로 값을 저장하는 변수를 제외하고 모두 전역 변수로 선언한다.

### Function Naming

  - 함수명은 pascal case를 따른다.
  - 함수명은 동사로 시작한다. (예외: DFS, BFS, Factorial 등)

### Formatting

  - 들여쓰기는 공백 문자 4개를 사용한다.
  - 한 줄짜리 if, for, while 문에는 되도록 중괄호를 사용하지 않는다.
  - 시간 복잡도가 중요한 문제는 `ios::sync_with_stdio(false); cin.tie(nullptr);`를 써야 한다.
  - 특별한 경우를 제외하고 정답을 출력할 때 끝에 `'\n'` 개행 문자를 출력한다. `endl`은 사용하지 않는다.

## Algorithm Classification

솔루션은 기본적으로 가장 주요한 태그 하나로만 분류된다.

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

## Issue Guidelines

  - [수정] 수정이 필요한 사항
    - `틀렸습니다` : 제출하면 틀리는 코드
    - `리팩토링` : 리팩토링이 필요한 코드
    - `아이디어` : 새로운 문제 풀이 아이디어
    - `기타` : 코드를 제외한 기타 수정 사항
  - [복습] 복습이 필요한 사항
    - `복습` : 복습이 필요한 코드

## Problem Solution

`ctrl + F`로 원하는 풀이를 찾을 수 있습니다.

### Programmers

<table>
<thead>
  <tr>
    <th>레벨</th>
    <th>문제</th>
    <th>풀이</th>
  </tr>
</thead>
<tbody>
  <!-- 레벨 & 문제번호 순으로 정렬한다. -->
  <!--
  <tr>
    <td>Level 레벨</td>
    <td><a href="문제링크">문제제목</a></td>
    <td><a href="코드링크">알고리즘분류</a></td>
  </tr>
  -->
  <tr>
    <td>Level 1</td>
    <td><a href="https://school.programmers.co.kr/learn/courses/30/lessons/42748">K번째수</a></td>
    <td><a href="sorting/prog42748.cpp">정렬</a></td>
  </tr>
  <tr>
    <td>Level 1</td>
    <td><a href="https://school.programmers.co.kr/learn/courses/30/lessons/42840">모의고사</a></td>
    <td><a href="brute-force/prog42840.cpp">완전탐색</a></td>
  </tr>
  <tr>
    <td>Level 2</td>
    <td><a href="https://school.programmers.co.kr/learn/courses/30/lessons/1844">게임 맵 최단거리</a></td>
    <td><a href="bfs/prog1844.cpp">BFS</a></td>
  </tr>
  <tr>
    <td>Level 2</td>
    <td><a href="https://school.programmers.co.kr/learn/courses/30/lessons/42746">가장 큰 수</a></td>
    <td><a href="sorting/prog42746.cpp">정렬</a></td>
  </tr>
  <tr>
    <td>Level 2</td>
    <td><a href="https://school.programmers.co.kr/learn/courses/30/lessons/43165">타겟 넘버</a></td>
    <td><a href="bfs/prog43165.cpp">BFS</a></td>
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
    <th>풀이</th>
  </tr>
</thead>
<tbody>
  <!-- 문제번호 순으로 정렬한다. -->
  <!--
  <tr>
    <td>번호</td>
    <td>레벨</td>
    <td><a href="문제링크">문제제목</a></td>
    <td><a href="코드링크">알고리즘분류</a></td>
  </tr>
  -->
  <tr>
    <td>1000</td>
    <td>브론즈 V</td>
    <td><a href="https://www.acmicpc.net/problem/1000">A+B</a></td>
    <td><a href="implementation">구현</a></td>
  </tr>
</tbody>
</table>
