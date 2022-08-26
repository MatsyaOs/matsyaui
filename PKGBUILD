
# Maintainer: Your Name <admin@matsyos.ml>
pkgname=matsyaui
pkgver=1
pkgrel=1
pkgdesc="UI of Matsya Ui."
arch=('x86_64')
url="https://github.com/MatsyaOs/matsyaui"
license=('GPL')
groups=('Matsya')
makedepends=('libqt5x11extras5-dev' 'libkf5windowsystem-dev' 'qtbase5-private-dev' 'libxcb1-dev' 'libxcb-shape0-dev' 'libxcb-icccm4-dev')
depends=('kwindowsystem'  'qt5-declarative'  'qt5-graphicaleffects'  'qt5-quickcontrols2'
)
source=('git'+'https://github.com/MatsyaOs/matsyaui')
md5sums=('SKIP')


build() {

	cd "$srcdir"/matsyaui/

  cmake -DCMAKE_INSTALL_PREFIX=/usr .
  make
}

package() {
  cd matsyaui
  DESTDIR="$pkgdir" make install
}
