CC = clang
CFLAGS = -std=c11 -Wall -Wextra -Werror -Wpedantic

SRC_DIR = src
INC_DIR = inc
OBJ_DIR = obj
BIN_DIR = .

SRC_FILES = $(wildcard $(SRC_DIR)/*.c)
OBJ_FILES = $(patsubst $(SRC_DIR)/%.c,$(OBJ_DIR)/%.o,$(SRC_FILES))

BIN_NAME = minilibmx.a

all: $(BIN_NAME)

$(BIN_NAME): create_obj_dir $(OBJ_FILES)
	ar rcs $(BIN_DIR)/$(BIN_NAME) $(OBJ_FILES)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	$(CC) $(CFLAGS) -I$(INC_DIR) -c -o $@ $<

create_obj_dir:
	mkdir -p $(OBJ_DIR)

clean:
	rm -f $(OBJ_FILES)

uninstall: clean
	rm -rf $(BIN_DIR)/$(BIN_NAME) $(OBJ_DIR)

reinstall: uninstall all

.PHONY: all clean uninstall reinstall create_obj_dir

