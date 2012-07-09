######################### -*- Mode: Makefile-Gmake -*- ########################
## armeb.mk --- 
##
## This program is free software; you can redistribute it and/or modify
## it under the terms of the GNU General Public License as published by
## the Free Software Foundation; either version 2 of the License, or
## (at your option) any later version.
##
## This program is distributed in the hope that it will be useful,
## but WITHOUT ANY WARRANTY; without even the implied warranty of
## MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
## GNU General Public License for more details.
##
## You should have received a copy of the GNU General Public License
## along with this program; if not, write to the Free Software
##
###############################################################################

### ARM (new abi)
ifeq ($(strip $(architecture)),armhf)

  kimage := vmlinuz
  target = zImage
  NEED_DIRECT_GZIP_IMAGE=NO
  kimagesrc = arch/$(KERNEL_ARCH)/boot/zImage
  kimagedest = $(INT_IMAGE_DESTDIR)/vmlinuz-$(KERNELRELEASE)
  DEBCONFIG = $(CONFDIR)/config.$(DEB_HOST_ARCH)
  kelfimagesrc = vmlinux
  kelfimagedest = $(INT_IMAGE_DESTDIR)/vmlinux-$(KERNELRELEASE)
  KERNEL_ARCH = arm

endif
