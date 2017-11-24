/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chessboard.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: varnaud <varnaud@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/23 18:15:38 by varnaud           #+#    #+#             */
/*   Updated: 2017/11/24 00:30:55 by varnaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHESSBOARD_H
# define CHESSBOARD_H
# include <stdio.h>
# include <stdlib.h>
# include <locale.h>
# define WHITE_PAWN 1 << 0
# define WHITE_KNIGHT 1 << 1
# define WHITE_BISHOP 1 << 2
# define WHITE_ROOK 1 << 3
# define WHITE_QUEEN 1 << 4
# define WHITE_KING 1 << 6

# define BLACK_PAWN 1 << 7
# define BLACK_KNIGHT 1 << 8
# define BLACK_BISHOP 1 << 9
# define BLACK_ROOK 1 << 10
# define BLACK_QUEEN 1 << 11
# define BLACK_KING 1 << 13

#define BLACK_SQUARE 1 << 14
#define WHITE_SQUARE 1 << 15

#define WHITE_COLOR 47
#define BLACK_COLOR 100

#define SQUARE_COLOR(i, j) (i % 2 == 0 && j % 2 == 0 ? WHITE_COLOR : i % 2 == 0 && j % 2 == 1 ? BLACK_COLOR : i % 2 == 1 && j % 2 == 0 ? BLACK_COLOR : i % 2 == 1 && j % 2 == 1 ? WHITE_COLOR : 0)

/*
** Not to be confused with cheese board
*/

typedef struct	s_chessboard
{
	int			square[8][8];
}				t_chessboard;

t_chessboard	*create_chessboard(void);
void			display(t_chessboard *chessboard);

#endif
