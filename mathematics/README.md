# 수학

## 목차

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
    <td>1002</td>
    <td>실버 Ⅲ</td>
    <td><a href="https://www.acmicpc.net/problem/1002">터렛</a></td>
    <td><a href="#boj1002">수학</td>
    <td><a href="boj1002.cpp">C++</a></td>
  </tr>
  <tr>
    <td>1004</td>
    <td>실버 Ⅲ</td>
    <td><a href="https://www.acmicpc.net/problem/1004">어린 왕자</a></td>
    <td><a href="#boj1004">수학</td>
    <td><a href="boj1004.cpp">C++</a></td>
  </tr>
</tbody>
</table>

<br>

## <a id="boj1002">백준 1002번 터렛</a>

[Problem](https://www.acmicpc.net/problem/1002) / [Solution](boj1002.cpp)

### 문제 요약

- 조규현 좌표: (x1, y1)
- 백승환 좌표: (x2, y2)
- 조규현과 류재명 사이의 거리: r1
- 백승환과 류재명 사이의 거리: r2

류재명이 있을 수 있는 좌표의 개수를 출력합니다. 좌표의 개수가 무한대일 경우 -1을 출력합니다.

### 입력 조건

- 테스트 케이스의 개수 T를 입력받는다.
  - 공백으로 구분된 정수 x1, y1, r1, x2, y2, r2를 입력받는다.

### 문제 풀이

중심이 (x1, y1)이고 반지름이 r1인 원과 중심이 (x2, y2)이고 반지름이 r2인 원의 교점 개수를 출력하는 문제입니다. 작은 원의 반지름을 r1, 큰 원의 반지름을 r2, 중심 사이의 거리를 dist라 하면 교점 개수는 다음과 같습니다.

- 교점 개수가 무한대일 경우
  - dist = 0, r2 - r1 = 0
- 교점 개수가 2개일 경우
  - r2 - r1 < dist < r1 + r2
- 교점 개수가 1개일 경우
  - dist = r1 + r2 (외접)
  - dist = r2 - r1 (내접)
- 교점 개수가 0개일 경우
  - dist > r1 + r2
  - dist < r2 - r1
  - dist = 0

중심 사이의 거리를 구할 때 제곱근을 계산해야 합니다. 오차가 발생할 수 있으므로 양변을 제곱하여 비교합니다.

```
dist = (x2 - x1) * (x2 - x1)
cond1 = (r2 - r1) * (r2 - r1)
cond2 = (r1 + r2) * (r1 + r2)
```

### 핵심 개념

- 두 원의 위치 관계에 따른 교점 개수
- 양변을 제곱하여 비교하는 방법

<br>

## <a id="boj1004">백준 1004번 어린 왕자</a>

[Problem](https://www.acmicpc.net/problem/1004) / [Solution](boj1004.cpp)

### 문제 요약

- 출발점: (x1, y1)
- 도착점: (x2, y2)
- 행성계의 중점과 반지름: (cx, cy, r)

n개의 원이 주어집니다. 어린 왕자가 출발점에서 도착점으로 이동할 때 원을 최소 몇 번 지나야 하는지 출력합니다.

### 입력 조건

- 테스트 케이스의 개수 T를 입력받는다.
  - 공백으로 구분된 정수 x1, y1, x2, y2를 입력받는다. (-1000 ≤ x1, y1, x2, y2 ≤ 1000)
  - 행성계의 개수 n을 입력받는다. (1 ≤ n ≤ 50)
    - 공백으로 구분된 정수 cx, cy, r를 입력받는다. (-1000 ≤ cx, cy ≤ 1000, 1 ≤ r ≤ 1000)

### 문제 풀이

원 정보를 입력받을 때마다 해당 원이 출발점과 도착점의 영역을 분리하는지 확인하는 문제입니다. 출발점과 도착점 중 하나만 원 내부에 위치할 경우, 출발점에서 도착점으로 이동하기 위해 반드시 해당 원을 지나야 합니다. 다음은 출발점과 도착점 중 하나만 원 내부에 위치하는지 판단하는 코드입니다.

```
dist1 = (cx - x1) * (cx - x1) + (cy - y1) * (cy - y1);
dist2 = (cx - x2) * (cx - x2) + (cy - y2) * (cy - y2);
if ((dist1 < r * r) ^ (dist2 < r * r)) cnt++;
```

오차가 발생할 수 있으므로 [백준 1002번 터렛](#boj1002) 문제처럼 양변을 제곱하여 비교합니다.

조건문은 `(dist1 < r * r && dist2 > r * r) || (dist1 > r * r && dist2 < r * r)`처럼 작성할 수도 있지만, XOR 연산을 활용하면 `(dist1 < r * r) ^ (dist2 < r * r)`처럼 간단하게 작성할 수 있습니다.

### 핵심 개념

- 원과 점의 위치 관계
- XOR 연산: 둘 중 하나만 참일 경우 참 반환