# Лабораторная работа "Алгебра полиномов"
____
## Техническое задание
____
- Разработать программную систему для выполнения алгебраических операций над полиномами от трех переменных. Полиномы хранятся в виде кольцевого списка с фиктивным звеном. Полиномы хранятся в таблицах. Ключом является имя.
- Разработать 6 видов таблиц, для хранения полиномов:
    - линейная на массиве,
    - линейная на списке,
    - упорядоченная на массиве,
    - дерево (АВЛ или красно-черное),
    - хэш-таблица со списками (метод цепочек),
    - хэш-таблица с открытым перемешиванием.
- Реализовать арифметические операции над полиномами: +,-,*.
- Арифметические операции выполняются с использованием постфиксной формы.
- Реализовать тесты, для контроля корректности выполнения операций.
- Разработать интерфейс.
____
## Объекты и основные алгоритмы
____
Список объектов:
- стек,
- список,
- моном,
- полином,
- общий интерфейс таблиц,
- постфикс,
- авл-дерево,
- хэш-таблицы,
- линейные таблицы (на массиве и списке),
- упорядоченная таблица на массиве.

Список основных алгоритмов:
- поиск (для таблиц),
- удаление (для таблиц),
- вставка (для таблиц),
- алгоритмы для авл-дерева(вставка и удаление вершина, балансировка, поиск),
- перевод арифметического выражения в постфикс,
- вычисление выражения по постфиксной форме,
- арифметические операции над полиномами,
- приведение подобных в полиноме.

