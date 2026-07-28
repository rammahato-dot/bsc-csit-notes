# Set Operations

> **Course:** Discrete Structures  
> **Unit:** 1 – Set Theory and Logic

---

## Table of Contents

- [Learning Objectives](#learning-objectives)
- [Introduction](#introduction)
- [Union of Sets](#union-of-sets)
- [Intersection of Sets](#intersection-of-sets)
- [Difference of Sets](#difference-of-sets)
- [Complement of a Set](#complement-of-a-set)
- [Symmetric Difference](#symmetric-difference)
- [Venn Diagrams](#venn-diagrams)
- [Set Identities](#set-identities)
- [Solved Examples](#solved-examples)
- [Applications](#applications)
- [Exam Tips](#exam-tips)
- [Common Mistakes](#common-mistakes)
- [Practice Questions](#practice-questions)
- [Summary](#summary)

---

# Learning Objectives

After studying this chapter, you should be able to:

- Perform basic operations on sets.
- Find the union and intersection of sets.
- Determine the difference between two sets.
- Find the complement of a set.
- Calculate the symmetric difference.
- Solve problems using Venn diagrams.
- Apply important set identities.

---

# Introduction

Set operations allow us to combine, compare, and manipulate sets. They are widely used in mathematics, databases, probability, programming, digital logic, and computer science.

Suppose:

```text
A = {1,2,3,4}

B = {3,4,5,6}
```

Different operations produce different results depending on the relationship between the two sets.

---

# Union of Sets

The **union** of two sets contains every distinct element that belongs to **A**, **B**, or both.

### Notation

```text
A ∪ B
```

### Formula

```text
A ∪ B = {x | x ∈ A or x ∈ B}
```

### Example

```text
A = {1,2,3}

B = {3,4,5}
```

```text
A ∪ B = {1,2,3,4,5}
```

---

# Intersection of Sets

The **intersection** of two sets contains only the elements common to both sets.

### Notation

```text
A ∩ B
```

### Formula

```text
A ∩ B = {x | x ∈ A and x ∈ B}
```

### Example

```text
A = {1,2,3}

B = {3,4,5}
```

```text
A ∩ B = {3}
```

---

# Difference of Sets

The **difference** of two sets consists of elements present in one set but not in the other.

### Notation

```text
A − B
```

### Formula

```text
A − B = {x | x ∈ A and x ∉ B}
```

### Example

```text
A = {1,2,3,4}

B = {3,4,5}
```

```text
A − B = {1,2}
```

Similarly,

```text
B − A = {5}
```

> **Note:** Set difference is **not commutative**.

```text
A − B ≠ B − A
```

---

# Complement of a Set

The **complement** of a set contains all elements of the universal set that are **not** in the given set.

### Notation

```text
A'
```

or

```text
Aᶜ
```

### Formula

```text
A' = U − A
```

### Example

```text
U = {1,2,3,4,5,6,7,8}

A = {2,4,6}
```

```text
A' = {1,3,5,7,8}
```

---

# Symmetric Difference

The **symmetric difference** contains elements that belong to either set, but **not both**.

### Notation

```text
A △ B
```

### Formula

```text
A △ B = (A − B) ∪ (B − A)
```

### Example

```text
A = {1,2,3}

B = {3,4,5}
```

```text
A △ B = {1,2,4,5}
```

---

# Venn Diagrams

Venn diagrams provide a visual representation of relationships between sets.

## Union

```text
Everything inside A or B.
```

## Intersection

```text
Only the overlapping region.
```

## Difference

```text
Only the part of A outside B.
```

## Complement

```text
Everything outside A but inside U.
```

---

# Set Identities

## Identity Laws

| Law | Formula |
|------|---------|
| Identity | `A ∪ ∅ = A` |
| Identity | `A ∩ U = A` |

---

## Domination Laws

| Law | Formula |
|------|---------|
| Domination | `A ∪ U = U` |
| Domination | `A ∩ ∅ = ∅` |

---

## Idempotent Laws

| Law | Formula |
|------|---------|
| Idempotent | `A ∪ A = A` |
| Idempotent | `A ∩ A = A` |

---

## Complement Laws

| Law | Formula |
|------|---------|
| Complement | `A ∪ A' = U` |
| Complement | `A ∩ A' = ∅` |

---

## Commutative Laws

| Law | Formula |
|------|---------|
| Commutative | `A ∪ B = B ∪ A` |
| Commutative | `A ∩ B = B ∩ A` |

---

## Associative Laws

| Law | Formula |
|------|---------|
| Associative | `(A ∪ B) ∪ C = A ∪ (B ∪ C)` |
| Associative | `(A ∩ B) ∩ C = A ∩ (B ∩ C)` |

---

## Distributive Laws

| Law | Formula |
|------|---------|
| Distributive | `A ∪ (B ∩ C) = (A ∪ B) ∩ (A ∪ C)` |
| Distributive | `A ∩ (B ∪ C) = (A ∩ B) ∪ (A ∩ C)` |

---

## De Morgan's Laws

| Law | Formula |
|------|---------|
| First | `(A ∪ B)' = A' ∩ B'` |
| Second | `(A ∩ B)' = A' ∪ B'` |

---

# Solved Examples

## Example 1

Given

```text
A = {1,2,3,4}

B = {3,4,5,6}
```

Find:

```text
A ∪ B
A ∩ B
A − B
B − A
```

### Solution

```text
A ∪ B = {1,2,3,4,5,6}

A ∩ B = {3,4}

A − B = {1,2}

B − A = {5,6}
```

---

## Example 2

Given

```text
U = {1,2,3,4,5,6}

A = {2,4}
```

Find:

```text
A'
```

### Solution

```text
A' = {1,3,5,6}
```

---

# Applications

Set operations are used in:

- Database queries (SQL UNION, INTERSECT, EXCEPT)
- Search engines
- Data analysis
- Probability
- Digital logic
- Programming
- Artificial Intelligence

---

# Exam Tips

- Union includes **all unique elements**.
- Intersection includes **common elements only**.
- Difference is **not commutative**.
- Complement always depends on the universal set.
- Memorize De Morgan's Laws.

---

# Common Mistakes

❌ Writing duplicate elements in a union.

Wrong

```text
{1,2,3,3,4}
```

Correct

```text
{1,2,3,4}
```

---

❌ Confusing union with intersection.

Remember:

- Union → All elements.
- Intersection → Common elements.

---

❌ Forgetting the universal set while finding complements.

Always identify **U** first.

---

# Practice Questions

## Theory

1. Define union and intersection.
2. Explain the difference between set difference and symmetric difference.
3. State De Morgan's Laws for sets.
4. What is the complement of a set?

## Problems

1. Find `A ∪ B` and `A ∩ B` for:
   ```text
   A = {2,4,6}
   B = {4,5,6,7}
   ```

2. Find `A − B` and `B − A`.

3. If

   ```text
   U = {1,2,3,4,5,6,7}
   A = {2,3,5}
   ```

   Find `A'`.

4. Verify one of De Morgan's Laws using an example.

---

# Summary

- Union combines all distinct elements.
- Intersection finds common elements.
- Difference finds elements in one set but not the other.
- Complement finds elements outside a set within the universal set.
- Symmetric difference finds elements belonging to exactly one of the sets.
- Set identities simplify expressions and proofs.
- De Morgan's Laws are essential for solving set problems and logical proofs.

---

## Next Topic

➡️ **03 – Principle of Inclusion and Exclusion**