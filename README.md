# 백준 알고리즘 문제 풀이

[![Solved.ac
프로필](http://mazassumnida.wtf/api/generate_badge?boj=songsubin)](https://solved.ac/songsubin)

## Coding Rules

  - 들여쓰기는 공백 문자 4개를 사용한다.
  - 변수명은 snake case, 함수명은 pascal case를 따른다.
  - 한 줄짜리 if, for, while 문에는 되도록 중괄호를 사용하지 않는다.
  - 변수는 임시로 값을 저장하는 변수를 제외하고 모두 전역 변수로 선언한다.
  - 시간 복잡도가 중요한 문제는 `ios::sync_with_stdio(false); cin.tie(nullptr);`를 써야 한다.
  - 특별한 경우를 제외하고 정답을 출력할 때 끝에 `'\n'` 개행 문자를 출력한다. `endl`은 사용하지 않는다.

## Commit Message Guidelines

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

  - [수정] 수정이 필요한 사항 (라벨: 리팩토링, 아이디어, 틀렸습니다)
  - [복습] 복습이 필요한 사항 (라벨: 복습)
