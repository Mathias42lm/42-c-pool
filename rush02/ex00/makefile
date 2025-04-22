NAME = rush-02
MAIN_DICTIONARY = numbers.dict

# Compiler and flags
CC = cc
CFLAGS = -Wall -Wextra -Werror

# Source directories
SRC_DIRS = . ./data/algo ./data/main ./data/struct

# Source files
SRCS = $(foreach dir,$(SRC_DIRS),$(wildcard $(dir)/*.c))

# Object files
OBJS = $(SRCS:.c=.o)

# Targets
all: $(NAME)

$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
	@echo "Compilation complete: $(NAME)"

%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJS)
	@echo "Object files cleaned"

fclean: clean
	@rm -f $(NAME)
	@find data -name "*.dict" -not -name $(MAIN_DICTIONARY) -delete
	@echo "Full clean complete"

re: fclean all

.PHONY: all clean fclean re