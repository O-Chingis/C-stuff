# Используем официальный образ Ubuntu с установленным GCC
FROM gcc:latest

# Устанавливаем дополнительные инструменты
RUN apt-get update && apt-get install -y cmake gdb locales \
    && sed -i /ru_RU.UTF-8/s/^# //g /etc/locale.gen \
    && locale-gen ru_RU.UTF-8 \
    && export LANG=ru_RU.UTF-8 \
    && export LC_ALL=ru_RU.UTF-8

# Меняем кодировку на РУ
ENV LANG=C.UTF-8
ENV LC_ALL=C.UTF-8

# Устанавливаем рабочую директорию внутри контейнера
WORKDIR /app

# Копируем файлы из локальной папки в контейнер(копируем все папки и файлы из текущей директории в директорию контейнера)
COPY . /app

# Компилируем код
RUN g++ -o my_program Lesson2.cpp
RUN chmod +x my_program

# Указываем команду по умолчанию (запуск программы)
CMD ["./my_program"]

# После получения результатов, не забудьте удалить образ(docker rmi mycontainer - Если используете Docker.Desktop как и я)
