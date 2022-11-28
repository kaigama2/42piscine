NAME 		= 42_Piscine

Srcs 		= srcs
Objs 		= objs
Subdir 		= C00 C01 C02 C03 C04 C05 C06 C07 C08 C09

Cd_Srcs 	= $(foreach dir, $(Subdir), $(addprefix $(Srcs)/, $(dir)))
Cd_Objs 	= $(foreach dir, $(Subdir), $(addprefix $(Objs)/, $(dir)))
Srcs_target = $(foreach dir, $(Cd_Srcs), $(wildcard $(dir)/*.c))
Obj_files	= $(subst $(Srcs), $(Objs), $(Srcs_target:.c=.o))

Includes 	= -I Includes
Gcc 		= gcc
Cflag 		= -Wall -Wextra -Werror
Rm 			= /bin/rm -rf
Ar 			= ar -rcs

$(Objs)/%.o	: $(Srcs)/%.c
			  @mkdir -p $(Objs) $(Cd_Objs)
			  @$(Gcc) $(Cflag) $(Includes) -c $< -o $@

all:		  $(NAME)

$(NAME):	  $(Obj_files)
			  @$(Ar) $(NAME) $(Obj_files)
			  @ranlib $(NAME)

clean:
			  @$(Rm) $(Obj_files)
			  @$(Rm) $(Objs)

fclean:		  clean
			  @$(Rm) $(NAME)

re:			  fclean all

.Phony:		  all clean fclean re
