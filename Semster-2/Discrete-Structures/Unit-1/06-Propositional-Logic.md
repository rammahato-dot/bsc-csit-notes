---
title: Propositional Logic
course: Discrete Structures
unit: 1
topic: Logic
difficulty: Beginner
estimated-study-time: 60 minutes
prerequisites: Set Theory
---

# Propositional Logic

> **Course:** Discrete Structures  
> **Unit:** 1 – Set Theory and Logic

---

## Table of Contents

- [Learning Objectives](#learning-objectives)
- [Introduction](#introduction)
- [What is Logic?](#what-is-logic)
- [What is a Proposition?](#what-is-a-proposition)
- [Types of Propositions](#types-of-propositions)
- [Logical Connectives](#logical-connectives)
- [Operator Precedence](#operator-precedence)
- [Examples](#examples)
- [Applications](#applications)
- [Exam Tips](#exam-tips)
- [Common Mistakes](#common-mistakes)
- [Practice Questions](#practice-questions)
- [Summary](#summary)

---

# Learning Objectives

After studying this chapter, you should be able to:

- Understand the concept of logic.
- Define a proposition.
- Distinguish between simple and compound propositions.
- Identify logical connectives.
- Write compound propositions.
- Apply logical notation correctly.

---

# Introduction

Logic is the foundation of mathematics and computer science. It provides a systematic way to determine whether statements are **true** or **false**.

In computer science, logic is used in:

- Programming
- Digital circuits
- Artificial Intelligence
- Database queries
- Algorithms
- Software testing

---

# What is Logic?

Logic is the study of correct reasoning.

It deals with statements that can be evaluated as either **True (T)** or **False (F)**.

Example:

```text
2 + 3 = 5
```

This statement is **True**.

```text
10 < 5
```

This statement is **False**.

---

# What is a Proposition?

A **proposition** is a declarative statement that has exactly one truth value: **True** or **False**.

### Examples

```text
The Earth revolves around the Sun.
```

Truth value: **True**

```text
7 is an even number.
```

Truth value: **False**

---

## Statements That Are NOT Propositions

Questions:

```text
What is your name?
```

Commands:

```text
Close the door.
```

Exclamations:

```text
What a beautiful day!
```

Open sentences:

```text
x > 5
```

The truth depends on the value of **x**, so it is **not** a proposition.

---

# Types of Propositions

## 1. Simple Proposition

A proposition that contains only one statement.

Example:

```text
p: Kathmandu is the capital of Nepal.
```

---

## 2. Compound Proposition

A proposition formed by combining two or more simple propositions using logical connectives.

Example:

```text
p: It is raining.

q: I am carrying an umbrella.

Compound proposition:

p ∧ q
```

---

# Logical Connectives

Logical connectives are symbols used to combine propositions.

| Symbol | Name | Meaning |
|--------|------|---------|
| ¬p | Negation | NOT p |
| p ∧ q | Conjunction | p AND q |
| p ∨ q | Disjunction | p OR q |
| p → q | Implication | If p, then q |
| p ↔ q | Biconditional | p if and only if q |

---

## Negation (NOT)

Negation reverses the truth value of a proposition.

Example:

```text
p: Today is Monday.

¬p: Today is not Monday.
```

---

## Conjunction (AND)

A conjunction is true only when **both** propositions are true.

Example:

```text
p: I study.

q: I pass the exam.

p ∧ q
```

Meaning:

```text
I study AND I pass the exam.
```

---

## Disjunction (OR)

A disjunction is true if **at least one** proposition is true.

Example:

```text
p: I drink tea.

q: I drink coffee.

p ∨ q
```

Meaning:

```text
I drink tea OR coffee.
```

> **Note:** In propositional logic, OR is **inclusive OR**, meaning it is still true if both propositions are true.

---

## Implication (IF...THEN)

An implication represents a conditional statement.

Notation:

```text
p → q
```

Read as:

```text
If p, then q.
```

Example:

```text
If it rains, then the road becomes wet.
```

---

## Biconditional (IF AND ONLY IF)

A biconditional is true when both propositions have the same truth value.

Notation:

```text
p ↔ q
```

Read as:

```text
p if and only if q.
```

Example:

```text
A figure is a square if and only if it has four equal sides and four right angles.
```

---

# Operator Precedence

When multiple logical operators appear in one expression, evaluate them in this order:

| Priority | Operator |
|----------|----------|
| 1 | ¬ (NOT) |
| 2 | ∧ (AND) |
| 3 | ∨ (OR) |
| 4 | → (Implication) |
| 5 | ↔ (Biconditional) |

Example:

```text
¬p ∨ q ∧ r
```

Evaluate as:

```text
(¬p) ∨ (q ∧ r)
```

---

# Examples

## Example 1

Let:

```text
p: It is sunny.

q: I will go outside.
```

Write:

```text
p ∧ q
```

Answer:

```text
It is sunny AND I will go outside.
```

---

## Example 2

Let:

```text
p: The computer is on.
```

Write its negation.

Answer:

```text
¬p

The computer is not on.
```

---

## Example 3

Let:

```text
p: I study.

q: I pass.
```

Write:

```text
p → q
```

Answer:

```text
If I study, then I pass.
```

---

# Applications

Propositional logic is used in:

- Computer programming
- Digital logic circuits
- Artificial Intelligence
- Database systems
- Software engineering
- Formal verification
- Search algorithms

---

# Exam Tips

- A proposition must always have a definite truth value.
- Questions and commands are **not** propositions.
- Learn the symbols of all logical connectives.
- Remember that logical OR is **inclusive**.
- Memorize the order of operator precedence.

---

# Common Mistakes

❌ Treating questions as propositions.

```text
Are you ready?
```

This is **not** a proposition.

---

❌ Confusing implication with causation.

```text
If p then q
```

does not necessarily mean **p causes q**. It only expresses a logical relationship.

---

❌ Assuming OR means only one option.

In logic:

```text
p ∨ q
```

is also true when **both p and q are true**.

---

# Practice Questions

## Theory

1. Define logic.
2. What is a proposition?
3. Differentiate between simple and compound propositions.
4. List the five logical connectives with their symbols.

---

## Problems

1. Determine whether each statement is a proposition:

   - Kathmandu is in Nepal.
   - Close the window.
   - x + 2 = 5.
   - 9 is divisible by 3.

2. Let:

```text
p: It is raining.

q: The road is wet.
```

Write the following using symbols:

- NOT p
- p AND q
- p OR q
- If p, then q
- p if and only if q

---

# Summary

- Logic is the study of correct reasoning.
- A proposition is a statement that is either true or false.
- Propositions may be simple or compound.
- Compound propositions are formed using logical connectives.
- The five basic connectives are NOT, AND, OR, IF...THEN, and IF AND ONLY IF.
- Understanding propositions is essential before studying truth tables and logical equivalences.

---

## Next Topic

➡️ **07 – Truth Tables and Propositional Equivalences**