# 다이나믹 프로그래밍

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
    <td>1003</td>
    <td>실버 Ⅲ</td>
    <td><a href="https://www.acmicpc.net/problem/1003">피보나치 함수</a></td>
    <td><a href="#boj1003">DP</td>
    <td><a href="boj1003.cpp">C++</a></td>
  </tr>
</tbody>
</table>

<br>

## <a id="boj1003">백준 1003번 피보나치 함수</a>

[Problem](https://www.acmicpc.net/problem/1003) / [Solution](boj1003.cpp)

### 문제 요약

fibonacci(N)을 호출했을 때 fibonacci(0)과 fibonacci(1)이 각각 몇 번 호출되는지 출력합니다.

### 입력 조건

- 테스트 케이스의 개수 T를 입력받는다.
  - 정수 N을 입력받는다. (0 ≤ N ≤ 40)

### 문제 풀이

fibonacci(N)을 호출하면 fibonacci(N-1)과 fibonacci(N-2)가 호출됩니다. 따라서 fibonacci(N)을 호출했을 때 fibonacci(0)과 fibonacci(1)이 호출되는 횟수는 fibonacci(N-1)을 호출했을 때 fibonacci(0)과 fibonacci(1)이 호출되는 횟수와 fibonacci(N-2)를 호출했을 때 fibonacci(0)과 fibonacci(1)이 호출되는 횟수를 더한 값과 같습니다.

fibonacci(N)을 호출했을 때 fibonacci(0)이 호출되는 횟수를 dp[0][N]이라고 하고, fibonacci(N)을 호출했을 때 fibonacci(1)이 호출되는 횟수를 dp[1][N]이라고 하면 다음과 같은 식이 성립합니다.

- dp[0][N] = dp[0][N-1] + dp[0][N-2]
- dp[1][N] = dp[1][N-1] + dp[1][N-2]
