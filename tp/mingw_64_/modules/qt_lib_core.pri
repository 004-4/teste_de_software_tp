QT.core.VERSION = 6.6.0
QT.core.name = QtCore
QT.core.module = Qt6Core
QT.core.libs = $$QT_MODULE_LIB_BASE
QT.core.ldflags = 
QT.core.includes = $$QT_MODULE_INCLUDE_BASE $$QT_MODULE_INCLUDE_BASE/QtCore
QT.core.frameworks = 
QT.core.bins = $$QT_MODULE_BIN_BASE
QT.core.depends =  
QT.core.run_depends = zlib_private
QT.core.uses = libatomic
QT.core.module_config = v2
QT.core.CONFIG = moc resources
QT.core.DEFINES = QT_CORE_LIB
QT.core.enabled_features = cxx11_future cxx17_filesystem std-atomic64 mimetype regularexpression sharedmemory shortcut systemsemaphore xmlstream xmlstreamreader xmlstreamwriter textdate datestring process processenvironment temporaryfile library settings filesystemwatcher filesystemiterator itemmodel proxymodel sortfilterproxymodel identityproxymodel transposeproxymodel concatenatetablesproxymodel stringlistmodel translation easingcurve animation gestures jalalicalendar islamiccivilcalendar timezone commandlineparser cborstreamreader cborstreamwriter permissions shared separate_debug_info signaling_nan thread future concurrent dbus opensslv30 shared shared separate_debug_info reduce_exports openssl
QT.core.disabled_features = clock-monotonic eventfd glib inotify cpp-winrt static cross_compile pkg-config debug_and_release appstore-compliant simulator_and_device rpath force_asserts framework c++20 c++2a c++2b c++2b reduce_relocations wasm-simd128 wasm-exceptions zstd openssl-linked opensslv11
QT_CONFIG += cxx11_future cxx17_filesystem std-atomic64 mimetype regularexpression sharedmemory shortcut systemsemaphore xmlstream xmlstreamreader xmlstreamwriter textdate datestring process processenvironment temporaryfile library settings filesystemwatcher filesystemiterator itemmodel proxymodel sortfilterproxymodel identityproxymodel transposeproxymodel concatenatetablesproxymodel stringlistmodel translation easingcurve animation gestures jalalicalendar islamiccivilcalendar timezone commandlineparser cborstreamreader cborstreamwriter permissions shared separate_debug_info signaling_nan thread future concurrent dbus opensslv30 shared shared separate_debug_info reduce_exports openssl
QT_MODULES += core

