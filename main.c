/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: varnaud <varnaud@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/23 18:14:17 by varnaud           #+#    #+#             */
/*   Updated: 2017/11/24 00:17:08 by varnaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "chessboard.h"

int		main(int argc, char **argv)
{
	t_chessboard *chessboard;

	chessboard = create_chessboard();
	display(chessboard);
	free(chessboard);
}
