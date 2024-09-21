pkgname="dmenu-tpos"
_pkgver=5.2
pkgver=5.2.r2.a0bbc84
pkgrel=1
pkgdesc="Generic menu for X. TPOS ver."
arch=(x86_64)
url="https://github.com/tmpstpdwn/dmenu-tpos"
license=(MIT)
depends=(
	coreutils
	fontconfig
	freetype2
	glibc
	libfontconfig.so
	libx11
	libxft
	libxinerama
	sh
)
makedepends=(git)
provides=("dmenu")
conflicts=("dmenu")
source=("git+$url")
md5sums=('SKIP')

pkgver() {
  cd "$srcdir/$pkgname"
  printf "${_pkgver}.r%s.%s" "$(git rev-list --count HEAD)" "$(git rev-parse --short HEAD)"
}

prepare() {
    cd "$srcdir/$pkgname"
	# to use a custom config.h, place it in the package directory
	if [[ -f ${SRCDEST}/config.h ]]; then
		cp "${SRCDEST}/config.h" .
	fi

	cat >> config.mk <<eof
CPPFLAGS+=${CPPFLAGS}
CFLAGS+=${CFLAGS}
LDFLAGS+=${LDFLAGS}
eof
}

build() {
  make -C $pkgname \
    11INC=/usr/include/X11 \
    X11LIB=/usr/lib/X11 \
    FREETYPEINC=/usr/include/freetype2 || exit 1
}

package() {
    cd "$srcdir/$pkgname"
	make PREFIX=/usr DESTDIR="$pkgdir" install
	install -vDm644 LICENSE -t "$pkgdir/usr/share/licenses/$pkgname/"
}
