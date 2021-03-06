/*****************************************************************************
 *
 * ALPS MPS DMRG Project
 *
 * Copyright (C) 2014 Institute for Theoretical Physics, ETH Zurich
 *               2011-2013 by Michele Dolfi <dolfim@phys.ethz.ch>
 *
 * This software is part of the ALPS Applications, published under the ALPS
 * Application License; you can use, redistribute it and/or modify it under
 * the terms of the license, either version 1 or (at your option) any later
 * version.
 *
 * You should have received a copy of the ALPS Application License along with
 * the ALPS Applications; see the file LICENSE.txt. If not, the license is also
 * available from http://alps.comp-phys.org/.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, TITLE AND NON-INFRINGEMENT. IN NO EVENT
 * SHALL THE COPYRIGHT HOLDERS OR ANYONE DISTRIBUTING THE SOFTWARE BE LIABLE
 * FOR ANY DAMAGES OR OTHER LIABILITY, WHETHER IN CONTRACT, TORT OR OTHERWISE,
 * ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 *
 *****************************************************************************/

#ifndef SIM_MATRIX_TYPES_H
#define SIM_MATRIX_TYPES_H

#if defined USE_AMBIENT
#include "dmrg/block_matrix/detail/ambient.hpp"
#include "dmrg/block_matrix/detail/alps.hpp"
#include <complex>
typedef ambient::tiles<ambient::matrix<double> > matrix;
typedef ambient::tiles<ambient::matrix< std::complex<double> > > cmatrix;
template <class V>
    using tmatrix = ambient::tiles<ambient::matrix<V> >;
#else
#include "dmrg/block_matrix/detail/alps.hpp"
#include <complex>
typedef alps::numeric::matrix<double> matrix;
typedef alps::numeric::matrix<std::complex<double> > cmatrix;
template <class V>
    using tmatrix = alps::numeric::matrix<V>;
#endif

#endif
