# Copyright (c) 2019 Wind River Systems, Inc.
#
# The right to copy, distribute, modify, or otherwise make use
# of this software may be licensed only pursuant to the terms
# of an applicable Wind River license agreement.
#
# Modification history
# --------------------
# 01sep17,l_z  created ()
#
# DESCRIPTION
# RPM spec file.
#

Name: 
Group: 
Prefix: 
Provides: installonlypkg
Requires: infrastructure_platform

#VX7Name: 
#VX7Group: 
#VX7Prefix: 
#VX7Provides: installonlypkg
#VX7Requires: infrastructure

Summary: VxWorks <add comment here
Version: 1.0.0.0

BuildArch: noarch

Vendor: Wind River Systems
URL: http://windriver.com
Packager: Wind River <http://www.windriver.com>
License: WindRiver
Distribution: vxworks-7
Release: vx7


AutoReqProv: no


#do not strip out binaries
%global __os_install_post %{nil}

%define _unpackaged_files_terminate_build 0

%description
VxWorks <add comment here>

%files
%defattr(-, root, root, 0755)
%{prefix}/*

%changelog
* Fri Aug 24 2018 Wind River 1.0.0.0
- Initial version
