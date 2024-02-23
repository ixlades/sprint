CC = clang
CFLAGS = -std=c11 -Wall -Wextra -Werror -Wpedantic

SRC_DIR = src
INC_DIR = inc
OBJ_DIR = obj
BIN_DIR = .

SRC_FILES = src/mx_atoi.c src/mx_isdigit.c src/mx_isspace.c src/mx_printchar.c src/mx_printint.c src/mx_printstr.c src/mx_strcpy.c src/mx_strcmp.c src/mx_strlen.c

OBJ_FILES = obj/mx_atoi.o obj/mx_isdigit.o obj/mx_isspace.o obj/mx_printchar.o obj/mx_printint.o obj/mx_printstr.o obj/mx_strcpy.o obj/mx_strcmp.o obj/mx_strlen.o

BIN_NAME = minilibmx.a

all : $(BIN_NAME)

$(BIN_NAME): create_obj_dir $(OBJ_FILES)
	ar rcs $(BIN_DIR)/$(BIN_NAME) $(OBJ_FILES)

obj/mx_atoi.o: src/mx_atoi.c
	$(CC) $(CFLAGS) -I$(INC_DIR) -c -o obj/mx_atoi.o src/mx_atoi.c

obj/mx_isdigit.o: src/mx_isdigit.c
	$(CC) $(CFLAGS) -I$(INC_DIR) -c -o obj/mx_isdigit.o src/mx_isdigit.c

obj/mx_isspace.o: src/mx_isspace.c
	$(CC) $(CFLAGS) -I$(INC_DIR) -c -o obj/mx_isspace.o src/mx_isspace.c

obj/mx_printchar.o: src/mx_printchar.c
	$(CC) $(CFLAGS) -I$(INC_DIR) -c -o obj/mx_printchar.o src/mx_printchar.c

obj/mx_printint.o: src/mx_printint.c
	$(CC) $(CFLAGS) -I$(INC_DIR) -c -o obj/mx_printint.o src/mx_printint.c

obj/mx_printstr.o: src/mx_printstr.c
	$(CC) $(CFLAGS) -I$(INC_DIR) -c -o obj/mx_printstr.o src/mx_printstr.c

obj/mx_strcpy.o: src/mx_strcpy.c
	$(CC) $(CFLAGS) -I$(INC_DIR) -c -o obj/mx_strcpy.o src/mx_strcpy.c

obj/mx_strcmp.o: src/mx_strcmp.c
	$(CC) $(CFLAGS) -I$(INC_DIR) -c -o obj/mx_strcmp.o src/mx_strcmp.c

obj/mx_strlen.o: src/mx_strlen.c
	$(CC) $(CFLAGS) -I$(INC_DIR) -c -o obj/mx_strlen.o src/mx_strlen.c

create_obj_dir:
	mkdir -p $(OBJ_DIR)

clean:
	rm -f $(OBJ_FILES)

uninstall: clean
	rm -rf $(BIN_DIR)/$(BIN_NAME) $(OBJ_DIR)

reinstall: uninstall all

.PHONY: all clean uninstall reinstall create_obj_dir

