/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chessboard.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: varnaud <varnaud@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/23 22:39:05 by varnaud           #+#    #+#             */
/*   Updated: 2017/11/24 01:16:11 by varnaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "chessboard.h"

//TODO: Change arguments to include differents starting position
t_chessboard	*create_chessboard(void)
{
	t_chessboard	*chessboard;

	if ((chessboard = malloc(sizeof(t_chessboard))) == NULL)
		return (NULL);
	chessboard->square[0][0] |= BLACK_ROOK;
	chessboard->square[0][1] |= BLACK_KNIGHT;
	chessboard->square[0][2] |= BLACK_BISHOP;
	chessboard->square[0][3] |= BLACK_QUEEN;
	chessboard->square[0][4] |= BLACK_KING;
	chessboard->square[0][5] |= BLACK_BISHOP;
	chessboard->square[0][6] |= BLACK_KNIGHT;
	chessboard->square[0][7] |= BLACK_ROOK;
	chessboard->square[1][0] |= BLACK_PAWN;
	chessboard->square[1][1] |= BLACK_PAWN;
	chessboard->square[1][2] |= BLACK_PAWN;
	chessboard->square[1][3] |= BLACK_PAWN;
	chessboard->square[1][4] |= BLACK_PAWN;
	chessboard->square[1][5] |= BLACK_PAWN;
	chessboard->square[1][6] |= BLACK_PAWN;
	chessboard->square[1][7] |= BLACK_PAWN;

	chessboard->square[7][0] |= WHITE_ROOK;
	chessboard->square[7][1] |= WHITE_KNIGHT;
	chessboard->square[7][2] |= WHITE_BISHOP;
	chessboard->square[7][3] |= WHITE_QUEEN;
	chessboard->square[7][4] |= WHITE_KING;
	chessboard->square[7][5] |= WHITE_BISHOP;
	chessboard->square[7][6] |= WHITE_KNIGHT;
	chessboard->square[7][7] |= WHITE_ROOK;
	chessboard->square[6][0] |= WHITE_PAWN;
	chessboard->square[6][1] |= WHITE_PAWN;
	chessboard->square[6][2] |= WHITE_PAWN;
	chessboard->square[6][3] |= WHITE_PAWN;
	chessboard->square[6][4] |= WHITE_PAWN;
	chessboard->square[6][5] |= WHITE_PAWN;
	chessboard->square[6][6] |= WHITE_PAWN;
	chessboard->square[6][7] |= WHITE_PAWN;

	return (chessboard);
}

wchar_t			get_piece(int square)
{
	if (square & WHITE_PAWN)
		return (L'♙');
	if (square & WHITE_KNIGHT)
		return (L'♘');
	if (square & WHITE_BISHOP)
		return (L'♗');
	if (square & WHITE_ROOK)
		return (L'♖');
	if (square & WHITE_QUEEN)
		return (L'♕');
	if (square & WHITE_KING)
		return (L'♔');

	if (square & BLACK_PAWN)
		return (L'♟');
	if (square & BLACK_KNIGHT)
		return (L'♞');
	if (square & BLACK_BISHOP)
		return (L'♝');
	if (square & BLACK_ROOK)
		return (L'♜');
	if (square & BLACK_QUEEN)
		return (L'♛');
	if (square & BLACK_KING)
		return (L'♚');
	return (0);
}

int				move(t_chessboard *chessboard, int s1, int s2)
{
	return (0);
}

//TODO: Toggle for colors
void			display(t_chessboard *chessboard)
{
	int		i;
	int		j;
	wchar_t	piece;

	setlocale(LC_ALL, "");
	i = 0;
	while (i < 8)
	{
		j = 0;
		printf("%d ", 8 - i);
		while (j < 8)
		{
			piece = get_piece(chessboard->square[i][j]);
			if (piece == 0)
				printf("\e[%dm\e[%dm☐ \e[0m", SQUARE_COLOR(i, j), SQUARE_COLOR(i, j) - 10);
			else
				printf("\e[%dm%lc \e[0m", SQUARE_COLOR(i, j), piece);
			j++;
		}
		printf("\n");
		i++;	
	}
	printf("  a b c d e f g h\n");
}
