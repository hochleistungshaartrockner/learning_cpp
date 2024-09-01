---
tags: [knowledge]
---

[[Structural Language Features]]
# Comments
atomic-summary:: "... can be single line `//...` or multi-line `/*...*/` "
 

The first lesson is learning how not to code in a programming language. that way, you can annotate what you are doing in further lessons.

In general comments are ignored by the compiler.

commenting in C++ can be done in two ways: single line comments or multi-line comments:

## single line comments

Single line comments start with a double forward slash `//` and end with a new-line-character

example:

```cpp
// This is a comment
int i = 1; // this is another comment
```

## multi line comments
Multi line comments start with a `/*` and end with a `*/`.

example:

```cpp
/*
this
is
a
multi
line
comment
// this is a single line comment
*/
```

multi line comments cannot be nested. An opening comment will be terminated by the next closing comment, that the compiler can find.