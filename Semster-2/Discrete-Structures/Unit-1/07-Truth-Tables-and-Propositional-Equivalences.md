---
title: Truth Tables and Propositional Equivalences
course: Discrete Structures
unit: 1
topic: Logic
difficulty: Beginner
estimated-study-time: 75 minutes
prerequisites: Propositional Logic
---

# Truth Tables and Propositional Equivalences

> **Course:** Discrete Structures  
> **Unit:** 1 – Set Theory and Logic

---

## Table of Contents

- [Learning Objectives](#learning-objectives)
- [Introduction](#introduction)
- [Truth Values](#truth-values)
- [Truth Tables](#truth-tables)
- [Truth Table for Negation](#truth-table-for-negation)
- [Truth Table for Conjunction](#truth-table-for-conjunction)
- [Truth Table for Disjunction](#truth-table-for-disjunction)
- [Truth Table for Implication](#truth-table-for-implication)
- [Truth Table for Biconditional](#truth-table-for-biconditional)
- [Tautology, Contradiction, and Contingency](#tautology-contradiction-and-contingency)
- [Logical Equivalence](#logical-equivalence)
- [Important Logical Equivalences](#important-logical-equivalences)
- [Solved Examples](#solved-examples)
- [Applications](#applications)
- [Exam Focus](#exam-focus)
- [Quick Revision](#quick-revision)
- [Summary](#summary)

---

# Learning Objectives

After studying this chapter, you should be able to:

- Construct truth tables.
- Determine the truth value of compound propositions.
- Identify tautologies, contradictions, and contingencies.
- Understand logical equivalence.
- Apply common logical laws to simplify expressions.

---

# Introduction

A **truth table** shows how the truth value of a compound proposition depends on the truth values of its components.

Truth tables are used to:

- Verify logical statements
- Compare propositions
- Simplify logical expressions
- Design digital circuits
- Prove logical equivalence

---

# Truth Values

Every proposition has one of two truth values:

| Symbol | Meaning |
|---------|---------|
| T | True |
| F | False |

---

# Truth Tables

For **n** propositions, the truth table contains:

$$
2^n
$$

rows.

Examples:

| Number of Variables | Rows |
|---------------------|-----:|
| 1 | 2 |
| 2 | 4 |
| 3 | 8 |
| 4 | 16 |

---

# Truth Table for Negation

Negation reverses the truth value.

| p | ¬p |
|---|----|
| T | F |
| F | T |

---

# Truth Table for Conjunction

A conjunction is true **only when both propositions are true**.

| p | q | p ∧ q |
|---|---|--------|
| T | T | T |
| T | F | F |
| F | T | F |
| F | F | F |

**Memory Trick:** AND means **both conditions must be true**.

---

# Truth Table for Disjunction

A disjunction is true if **at least one proposition is true**.

| p | q | p ∨ q |
|---|---|--------|
| T | T | T |
| T | F | T |
| F | T | T |
| F | F | F |

**Memory Trick:** OR fails only when **both are false**.

---

# Truth Table for Implication

An implication is false **only when the first proposition is true and the second is false**.

| p | q | p → q |
|---|---|--------|
| T | T | T |
| T | F | F |
| F | T | T |
| F | F | T |

### Memory Trick

Think of a promise:

> "If I study, then I will pass."

The promise is broken **only if you study but do not pass**.

---

# Truth Table for Biconditional

A biconditional is true when both propositions have the **same truth value**.

| p | q | p ↔ q |
|---|---|--------|
| T | T | T |
| T | F | F |
| F | T | F |
| F | F | T |

**Memory Trick:** Same = True, Different = False.

---

# Tautology, Contradiction, and Contingency

## Tautology

A proposition that is **always true**.

Example:

```text
p ∨ ¬p
```

| p | ¬p | p ∨ ¬p |
|---|----|---------|
| T | F | T |
| F | T | T |

---

## Contradiction

A proposition that is **always false**.

Example:

```text
p ∧ ¬p
```

| p | ¬p | p ∧ ¬p |
|---|----|---------|
| T | F | F |
| F | T | F |

---

## Contingency

A proposition that is **sometimes true and sometimes false**.

Example:

```text
p ∧ q
```

It depends on the truth values of `p` and `q`.

---

# Logical Equivalence

Two propositions are **logically equivalent** if they have the **same truth value in every possible case**.

Notation:

```text
p ≡ q
```

Example:

```text
¬(¬p) ≡ p
```

---

# Important Logical Equivalences

## Double Negation

```text
¬(¬p) ≡ p
```

---

## Identity Laws

```text
p ∧ T ≡ p

p ∨ F ≡ p
```

---

## Domination Laws

```text
p ∨ T ≡ T

p ∧ F ≡ F
```

---

## Idempotent Laws

```text
p ∨ p ≡ p

p ∧ p ≡ p
```

---

## Complement Laws

```text
p ∨ ¬p ≡ T

p ∧ ¬p ≡ F
```

---

## Commutative Laws

```text
p ∨ q ≡ q ∨ p

p ∧ q ≡ q ∧ p
```

---

## Associative Laws

```text
(p ∨ q) ∨ r ≡ p ∨ (q ∨ r)

(p ∧ q) ∧ r ≡ p ∧ (q ∧ r)
```

---

## Distributive Laws

```text
p ∨ (q ∧ r) ≡ (p ∨ q) ∧ (p ∨ r)

p ∧ (q ∨ r) ≡ (p ∧ q) ∨ (p ∧ r)
```

---

## De Morgan's Laws

```text
¬(p ∧ q) ≡ ¬p ∨ ¬q

¬(p ∨ q) ≡ ¬p ∧ ¬q
```

These laws are among the most frequently tested in exams.

---

# Solved Examples

## Example 1

Construct the truth table for:

```text
p → q
```

| p | q | p → q |
|---|---|--------|
| T | T | T |
| T | F | F |
| F | T | T |
| F | F | T |

---

## Example 2

Determine whether

```text
p ∨ ¬p
```

is a tautology.

### Solution

The final column contains only **T**, so it is a **tautology**.

---

## Example 3

Show that

```text
¬(¬p)
```

is logically equivalent to

```text
p
```

Construct both truth tables and compare the final columns. Since they match in every row, the expressions are logically equivalent.

---

# Applications

Truth tables are used in:

- Digital logic design
- Programming
- Artificial Intelligence
- Software testing
- Database query optimization
- Formal verification

---

# Exam Focus

⭐ Frequently asked questions in BSc CSIT exams:

- Construct the truth table for a given compound proposition.
- Define tautology, contradiction, and contingency with examples.
- Verify De Morgan's Laws using truth tables.
- Prove logical equivalence using truth tables.
- Write the truth table for implication and biconditional.

---

# Common Mistakes

❌ Thinking implication is false whenever the first statement is false.

Correct:

If `p` is false, then `p → q` is always **true**.

---

❌ Confusing logical equivalence (`≡`) with equality (`=`).

Logical equivalence means two propositions have identical truth tables.

---

❌ Forgetting the number of rows.

Always remember:

```text
Rows = 2ⁿ
```

where **n** is the number of variables.

---

# Quick Revision

### Number of Rows

```text
Rows = 2ⁿ
```

### Important Truth Tables

- NOT → Reverse truth value.
- AND → True only if both are true.
- OR → False only if both are false.
- IF...THEN → False only when T → F.
- IFF → True when both are the same.

### Must-Memorize Laws

- Double Negation
- Identity
- Domination
- Idempotent
- Complement
- Commutative
- Associative
- Distributive
- De Morgan's Laws

---

# Practice Questions

## Theory

1. Define a truth table.
2. What is a tautology?
3. Differentiate between contradiction and contingency.
4. State De Morgan's Laws.

## Problems

1. Construct the truth table for:

```text
(p ∧ q) → p
```

2. Verify:

```text
¬(p ∨ q) ≡ ¬p ∧ ¬q
```

using a truth table.

3. Determine whether:

```text
(p → q) ∨ (q → p)
```

is a tautology.

---

# Summary

- Truth tables evaluate compound propositions.
- A truth table for **n** variables contains **2ⁿ** rows.
- Tautologies are always true.
- Contradictions are always false.
- Contingencies are sometimes true and sometimes false.
- Logical equivalence means two propositions have identical truth tables.
- De Morgan's Laws are essential for simplifying logical expressions.

---

## Next Topic

➡️ **08 – Predicates and Quantifiers**