# 11.6 Практическая работа

# Проверки к работе №1
# [**Код к первой работе**](https://github.com/LostDit/11.6/blob/master/Шифр%20Цезаря/Шифр%20Цезаря.cpp)
## Пример 1:
```Text: aBxZ```
```Code: 67```
**Результат:**
```pQmO```
## Пример 2:
```Text: The quick brown fox jumps over the lazy dog```
```Code: 3```
**Результат:**
```Wkh txlfn eurzq ira mxpsv ryhu wkh odcb grj```


# Проверки к работе №2
# [**Код ко второй работе**](https://github.com/LostDit/11.6/blob/master/Проверка%20корректности%20email-адреса/Проверка%20корректности%20email-адреса.cpp)
## Корректные адреса:
### ```simple@example.com```
### ```very.common@example.com```
### ```disposable.style.email.with+symbol@example.com```
### ```other.email-with-hyphen@example.com```
### ```fully-qualified-domain@example.com```
### ```user.name+tag+sorting@example.com (может на самом деле быть перенаправлен на user.name@example.com в зависимости от почтового сервиса)```
### ```x@example.com (однобуквенная локальная часть)```
### ```example-indeed@strange-example.com```
### ```admin@mailserver1```
### ```example@s.example```
### ```mailhost!username@example.org```
### ```user%example.com@example.org```

## Некорректные адреса:
### ```John..Doe@example.com (две точки не могут идти подряд)```
### ```Abc.example.com (нет символа @)```
### ```A@b@c@example.com (символ @ должен быть только один)```
### ```a"b(c)d,e:f;g<h>i[j\k]l@example.com (есть недопустимые символы)```
### ```1234567890123456789012345678901234567890123456789012345678901234+x@example.com (первая часть длиннее 64 символов)```
### ```i_like_underscore@but_its_not_allow_in _this_part.example.com (во второй части есть недопустимый символ «_»)```

# Проверки к работе №3
# [**Код к третьей работе**](https://github.com/LostDit/11.6/blob/master/Валидация%20IP-адреса/Валидация%20IP-адреса.cpp)
## Корректные: 
### ```127.0.0.1```
### ```255.255.255.255```
### ```1.2.3.4``` 
### ```55.77.213.101```

## Некорректные: 
### ```255.256.257.258 (есть числа больше 255)``` 
### ```0.55.33.22. (лишняя точка в конце)``` 
### ```10.00.000.0 (лишние нули)``` 
### ```23.055.255.033 (опять лишние нули)``` 
### ```65.123..9 (две точки подряд)``` 
### ```a.b.c.d (посторонние символы вместо чисел и точек)```
