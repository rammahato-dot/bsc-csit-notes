---
title: Predicates and Quantifiers
course: Discrete Structures
unit: 1
topic: Predicate Logic
difficulty: Intermediate
estimated-study-time: 75 minutes
prerequisites: Propositional Logic
---

# Predicates and Quantifiers

> **Course:** Discrete Structures  
> **Unit:** 1 – Set Theory and Logic

---

## Table of Contents

- [Learning Objectives](#learning-objectives)
- [Introduction](#introduction)
- [Predicate Logic](#predicate-logic)
- [Predicates](#predicates)
- [Domain (Universe of Discourse)](#domain-universe-of-discourse)
- [Quantifiers](#quantifiers)
- [Universal Quantifier](#universal-quantifier)
- [Existential Quantifier](#existential-quantifier)
- [Nested Quantifiers](#nested-quantifiers)
- [Translating English Statements](#translating-english-statements)
- [Solved Examples](#solved-examples)
- [Applications](#applications)
- [Exam Focus](#exam-focus)
- [Common Mistakes](#common-mistakes)
- [Quick Revision](#quick-revision)
- [Practice Questions](#practice-questions)
- [Summary](#summary)

---

# Learning Objectives

After studying this chapter, you should be able to:

- Define predicates.
- Understand the concept of a domain.
- Explain universal and existential quantifiers.
- Translate English statements into symbolic form.
- Evaluate quantified statements.
- Apply predicate logic in mathematical reasoning.

---

# Introduction

Propositional logic treats entire statements as either **true** or **false**.

For example,

```text
It is raining.
```

However, many mathematical statements involve **variables**.

Example:

```text
x > 5
```

This statement cannot be classified as true or false until the value of **x** is known.

Predicate logic extends propositional logic by introducing **variables** and **quantifiers**.

---

# Predicate Logic

Predicate logic is a branch of logic that studies statements containing variables.

A predicate becomes a proposition only after assigning values to its variables or applying quantifiers.

Example:

```text
P(x): x is even
```

If

```text
x = 6
```

then

```text
P(6)

=

"6 is even"

(True)
```

---

# Predicates

A **predicate** is a statement containing one or more variables.

General notation:

```text
P(x)

Q(x,y)
```

Examples:

```text
P(x): x > 10
```

```text
Q(x,y): x + y = 10
```

These are **not propositions** because their truth values depend on the variables.

---

# Domain (Universe of Discourse)

The **domain** is the set of all possible values that variables can take.

Examples:

```text
Natural Numbers

N = {1,2,3,...}
```

```text
Integers

Z = {...,-2,-1,0,1,2,...}
```

```text
Real Numbers

R
```

Example:

```text
P(x): x² > 0
```

The truth depends on the chosen domain.

---

# Quantifiers

Quantifiers specify how many elements in the domain satisfy a predicate.

There are two main quantifiers:

| Symbol | Name | Meaning |
|---------|------|---------|
| ∀ | Universal Quantifier | For all |
| ∃ | Existential Quantifier | There exists |

---

# Universal Quantifier

Symbol:

```text
∀
```

Read as:

```text
For all
```

General form:

```text
∀x P(x)
```

Meaning:

```text
P(x) is true for every value of x in the domain.
```

Example:

```text
∀x ∈ N, x + 1 > x
```

This statement is **True**.

---

# Existential Quantifier

Symbol:

```text
∃
```

Read as:

```text
There exists
```

General form:

```text
∃x P(x)
```

Meaning:

```text
There is at least one value of x for which P(x) is true.
```

Example:

```text
∃x ∈ N, x = 5
```

This statement is **True**.

---

# Nested Quantifiers

Sometimes more than one quantifier appears in a statement.

Example:

```text
∀x ∃y (x < y)
```

Meaning:

> For every value of x, there exists a value of y that is greater than x.

For natural numbers, this statement is **True**.

Another example:

```text
∃x ∀y (x > y)
```

Meaning:

> There exists one value that is greater than every value.

For natural numbers, this statement is **False**.

---

# Translating English Statements

## Example 1

Every student passed.

Let

```text
P(x):

x passed
```

Then

```text
∀x P(x)
```

---

## Example 2

Some students play football.

Let

```text
F(x):

x plays football
```

Then

```text
∃x F(x)
```

---

## Example 3

Every natural number has a successor.

```text
∀x ∈ N

∃y ∈ N

(y = x + 1)
```

---

# Solved Examples

## Example 1

Determine the truth value.

```text
∀x ∈ N

x > 0
```

### Solution

Every natural number is positive.

**Answer:** True

---

## Example 2

Determine the truth value.

```text
∃x ∈ N

x < 0
```

### Solution

There are no negative natural numbers.

**Answer:** False

---

## Example 3

Translate:

"There exists an even number."

Let

```text
E(x):

x is even
```

Then

```text
∃x E(x)
```

---

# Applications

Predicate logic is used in:

- Artificial Intelligence
- Database query languages
- Programming languages
- Automated theorem proving
- Formal verification
- Compiler design
- Mathematical proofs

---

# Exam Focus

⭐ Frequently asked questions:

- Define predicate.
- Explain the universal quantifier.
- Explain the existential quantifier.
- Translate English statements into symbolic notation.
- Determine the truth value of quantified statements.

---

# Common Mistakes

❌ Confusing propositions with predicates.

```text
x > 5
```

is **not** a proposition.

---

❌ Thinking

```text
∃
```

means "all."

Remember:

```text
∃

=

There exists at least one.
```

---

❌ Ignoring the domain.

Always identify whether the domain is:

- Natural numbers
- Integers
- Real numbers
- Another specified set

The truth value can change depending on the domain.

---

# Quick Revision

### Predicate

A statement containing variables.

### Domain

The set of all possible values of the variables.

### Universal Quantifier

```text
∀

For all
```

### Existential Quantifier

```text
∃

There exists
```

### Remember

- Universal → Every element.
- Existential → At least one element.

---

# Practice Questions

## Theory

1. Define a predicate with an example.
2. What is the universe of discourse?
3. Explain universal and existential quantifiers.
4. Differentiate between propositions and predicates.

---

## Problems

1. Translate the following into symbolic form:

- Every bird can fly.
- Some students are programmers.
- Every integer has an additive inverse.

2. Determine whether each statement is true or false for the domain of natural numbers:

```text
∀x, x ≥ 1
```

```text
∃x, x = 0
```

```text
∀x ∃y (y > x)
```

---

# Summary

- Predicate logic extends propositional logic by introducing variables.
- A predicate becomes a proposition after assigning values or using quantifiers.
- The domain specifies the possible values of variables.
- The universal quantifier (∀) means "for all."
- The existential quantifier (∃) means "there exists."
- Predicate logic is widely used in mathematics and computer science.

---

## Next Topic

➡️ **09 – Negation of Quantified Statements**