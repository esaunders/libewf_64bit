/*
 * Legacy functions
 *
 * Copyright (c) 2010-2012, Joachim Metz <joachim.metz@gmail.com>
 *
 * Refer to AUTHORS for acknowledgements.
 *
 * This software is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This software is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this software.  If not, see <http://www.gnu.org/licenses/>.
 */

#if !defined( _LIBSMRAW_LEGACY_H )
#define _LIBSMRAW_LEGACY_H

#include <common.h>
#include <types.h>

#include "libsmraw_extern.h"
#include "libsmraw_libcerror.h"
#include "libsmraw_types.h"

#if defined( __cplusplus )
extern "C" {
#endif

#if !defined( HAVE_LOCAL_LIBSMRAW )

LIBSMRAW_EXTERN \
int libsmraw_handle_set_maximum_amount_of_open_handles(
     libsmraw_handle_t *handle,
     int maximum_amount_of_open_handles,
     libcerror_error_t **error );

LIBSMRAW_EXTERN \
int libsmraw_handle_get_amount_of_information_values(
     libsmraw_handle_t *handle,
     int *amount_of_information_values,
     libcerror_error_t **error );

LIBSMRAW_EXTERN \
int libsmraw_handle_get_information_value_size(
     libsmraw_handle_t *handle,
     const uint8_t *identifier,
     size_t identifier_length,
     size_t *value_size,
     libcerror_error_t **error );

LIBSMRAW_EXTERN \
int libsmraw_handle_get_information_value(
     libsmraw_handle_t *handle,
     const uint8_t *identifier,
     size_t identifier_length,
     uint8_t *value,
     size_t value_size,
     libcerror_error_t **error );

LIBSMRAW_EXTERN \
int libsmraw_handle_set_information_value(
     libsmraw_handle_t *handle,
     const uint8_t *identifier,
     size_t identifier_length,
     const uint8_t *value,
     size_t value_length,
     libcerror_error_t **error );

LIBSMRAW_EXTERN \
int libsmraw_handle_get_amount_of_integrity_hash_values(
     libsmraw_handle_t *handle,
     int *amount_of_integrity_hash_values,
     libcerror_error_t **error );

LIBSMRAW_EXTERN \
int libsmraw_handle_get_integrity_hash_value_size(
     libsmraw_handle_t *handle,
     const uint8_t *identifier,
     size_t identifier_length,
     size_t *value_size,
     libcerror_error_t **error );

LIBSMRAW_EXTERN \
int libsmraw_handle_get_integrity_hash_value(
     libsmraw_handle_t *handle,
     const uint8_t *identifier,
     size_t identifier_length,
     uint8_t *value,
     size_t value_size,
     libcerror_error_t **error );

LIBSMRAW_EXTERN \
int libsmraw_handle_set_integrity_hash_value(
     libsmraw_handle_t *handle,
     const uint8_t *identifier,
     size_t identifier_length,
     const uint8_t *value,
     size_t value_length,
     libcerror_error_t **error );

#endif /* !defined( HAVE_LOCAL_LIBSMRAW ) */

#if defined( __cplusplus )
}
#endif

#endif

