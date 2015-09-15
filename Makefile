#
# Copyright (C) 2015 Herman verschooten bvba.
#

include $(TOPDIR)/rules.mk

PKG_BUILDDATE:=`date +%Y%m%d%H%M%S`
PKG_NAME:=httpsredir
PKG_VERSION:=1.0.1
PKG_RELEASE:=3
PKG_SOURCE:=$(PKG_NAME)-$(PKG_VERSION).tar.gz
PKG_SOURCE_URL:= @SF/$(PKG_NAME)
PKG_MD5SUM:=

PKG_FIXUP = libtool

include $(INCLUDE_DIR)/package.mk

define Package/httpsredir
  SUBMENU:=Portal Authentication Registration Configuration
  SECTION:=net
  CATEGORY:=Network
  DEPENDS:=+libmicrohttpd
  TITLE:=A Simple redirector for HTTPS-traffic to http://www.google.com
  URL:=http://www.gratwifi.eu
  MAINTAINER:=Herman verschooten <Herman@verschooten.net>
  MENU:=1
endef

define Package/httpsredir/description
  A Simple redirector for HTTPS-traffic to http://www.google.com
endef

define Package/httpsredir/config
	source "$(SOURCE)/Config.in"
endef

define Build/Prepare
	mkdir -p $(PKG_BUILD_DIR)
	$(CP) ./src/* $(PKG_BUILD_DIR)
endef

define Build/Configure
endef

define Build/Compile
	echo "Starting build $(PKG_BUILDDATE)"

	$(MAKE) -C $(PKG_BUILD_DIR) \
		CC="$(TARGET_CC)" \
		CFLAGS="$(TARGET_CFLAGS) -Wall -DPBUILDDATE=$(PKG_BUILDDATE) -DPVERSION=$(PKG_VERSION)-$(PKG_RELEASE) -DPORT=$(CONFIG_HTTPSREDIR_PORT)" \
		LDFLAGS="$(TARGET_LDFLAGS)" \
		PKG_BUILDDATE="$(PKG_BUILDDATE)"
endef

define Package/httpsredir/conffiles
endef

MAKE_FLAGS += \
	DESTDIR="$(PKG_INSTALL_DIR)" \
	all install

define Package/httpsredir/install
	$(INSTALL_DIR) $(1)/usr/bin
	$(INSTALL_BIN) $(PKG_BUILD_DIR)/httpsredir $(1)/usr/bin/
endef

define Package/httpsredir/preinst
endef

define Package/httpsredir/postinst
endef

define Package/httpsredir/postrm
endef


$(eval $(call BuildPackage,httpsredir))
