/*
 * Normaliz
 * Copyright (C) 2007-2014  Winfried Bruns, Bogdan Ichim, Christof Soeger
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 * As an exception, when this program is distributed through (i) the App Store
 * by Apple Inc.; (ii) the Mac App Store by Apple Inc.; or (iii) Google Play
 * by Google Inc., then that store may impose any digital rights management,
 * device limits and/or redistribution restrictions that are required by its
 * terms of service.
 */

//---------------------------------------------------------------------------
#ifndef NMZ_NAUTY_HPP
#define NMZ_NAUTY_HPP
//---------------------------------------------------------------------------
#include <vector>
#include <list>
#include <iostream>
#include <string>

namespace libnormaliz {
using std::vector;

template<typename Integer>
vector<vector<long> > compute_automs_by_nauty(const vector<vector<Integer> >& Generators,  size_t nr_special_gens,
            const vector<vector<Integer> >& LinForms, const size_t nr_special_linforms, 
            mpz_class& group_order, BinaryMatrix<Integer>& CanType);


} // namespace libnormaliz

//---------------------------------------------------------------------------
#endif
//---------------------------------------------------------------------------