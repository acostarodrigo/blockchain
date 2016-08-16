include $(top_srcdir)/src/Makefile.include

AM_CPPFLAGS += -I$(top_srcdir)/src \
  -I$(top_builddir)/src/qt \
  -I$(top_builddir)/src/qt/forms \
  $(PROTOBUF_CFLAGS) \
  $(QR_CFLAGS)
bin_PROGRAMS = IoP-qt
noinst_LIBRARIES = libIoPqt.a
SUBDIRS = . $(BUILD_TEST_QT)
DIST_SUBDIRS = . test

# IoP qt core #
QT_TS = \
  locale/IoP_ach.ts \
  locale/IoP_af_ZA.ts \
  locale/IoP_ar.ts \
  locale/IoP_be_BY.ts \
  locale/IoP_bg.ts \
  locale/IoP_bs.ts \
  locale/IoP_ca_ES.ts \
  locale/IoP_ca.ts \
  locale/IoP_ca@valencia.ts \
  locale/IoP_cmn.ts \
  locale/IoP_cs.ts \
  locale/IoP_cy.ts \
  locale/IoP_da.ts \
  locale/IoP_de.ts \
  locale/IoP_el_GR.ts \
  locale/IoP_en.ts \
  locale/IoP_eo.ts \
  locale/IoP_es_CL.ts \
  locale/IoP_es_DO.ts \
  locale/IoP_es_MX.ts \
  locale/IoP_es.ts \
  locale/IoP_es_UY.ts \
  locale/IoP_et.ts \
  locale/IoP_eu_ES.ts \
  locale/IoP_fa_IR.ts \
  locale/IoP_fa.ts \
  locale/IoP_fi.ts \
  locale/IoP_fr_CA.ts \
  locale/IoP_fr.ts \
  locale/IoP_gl.ts \
  locale/IoP_gu_IN.ts \
  locale/IoP_he.ts \
  locale/IoP_hi_IN.ts \
  locale/IoP_hr.ts \
  locale/IoP_hu.ts \
  locale/IoP_id_ID.ts \
  locale/IoP_it.ts \
  locale/IoP_ja.ts \
  locale/IoP_ka.ts \
  locale/IoP_kk_KZ.ts \
  locale/IoP_ko_KR.ts \
  locale/IoP_ky.ts \
  locale/IoP_la.ts \
  locale/IoP_lt.ts \
  locale/IoP_lv_LV.ts \
  locale/IoP_mn.ts \
  locale/IoP_ms_MY.ts \
  locale/IoP_nb.ts \
  locale/IoP_nl.ts \
  locale/IoP_pam.ts \
  locale/IoP_pl.ts \
  locale/IoP_pt_BR.ts \
  locale/IoP_pt_PT.ts \
  locale/IoP_ro_RO.ts \
  locale/IoP_ru.ts \
  locale/IoP_sah.ts \
  locale/IoP_sk.ts \
  locale/IoP_sl_SI.ts \
  locale/IoP_sq.ts \
  locale/IoP_sr.ts \
  locale/IoP_sv.ts \
  locale/IoP_th_TH.ts \
  locale/IoP_tr.ts \
  locale/IoP_uk.ts \
  locale/IoP_ur_PK.ts \
  locale/IoP_uz@Cyrl.ts \
  locale/IoP_vi.ts \
  locale/IoP_vi_VN.ts \
  locale/IoP_zh_CN.ts \
  locale/IoP_zh_HK.ts \
  locale/IoP_zh_TW.ts

QT_FORMS_UI = \
  forms/aboutdialog.ui \
  forms/addressbookpage.ui \
  forms/askpassphrasedialog.ui \
  forms/coincontroldialog.ui \
  forms/editaddressdialog.ui \
  forms/helpmessagedialog.ui \
  forms/intro.ui \
  forms/openuridialog.ui \
  forms/optionsdialog.ui \
  forms/overviewpage.ui \
  forms/receivecoinsdialog.ui \
  forms/receiverequestdialog.ui \
  forms/rpcconsole.ui \
  forms/sendcoinsdialog.ui \
  forms/sendcoinsentry.ui \
  forms/signverifymessagedialog.ui \
  forms/transactiondescdialog.ui

QT_MOC_CPP = \
  moc_addressbookpage.cpp \
  moc_addresstablemodel.cpp \
  moc_askpassphrasedialog.cpp \
  moc_IoPaddressvalidator.cpp \
  moc_IoPamountfield.cpp \
  moc_IoPgui.cpp \
  moc_IoPunits.cpp \
  moc_clientmodel.cpp \
  moc_coincontroldialog.cpp \
  moc_coincontroltreewidget.cpp \
  moc_csvmodelwriter.cpp \
  moc_editaddressdialog.cpp \
  moc_guiutil.cpp \
  moc_intro.cpp \
  moc_macdockiconhandler.cpp \
  moc_macnotificationhandler.cpp \
  moc_monitoreddatamapper.cpp \
  moc_notificator.cpp \
  moc_openuridialog.cpp \
  moc_optionsdialog.cpp \
  moc_optionsmodel.cpp \
  moc_overviewpage.cpp \
  moc_paymentserver.cpp \
  moc_qvalidatedlineedit.cpp \
  moc_qvaluecombobox.cpp \
  moc_receivecoinsdialog.cpp \
  moc_receiverequestdialog.cpp \
  moc_recentrequeststablemodel.cpp \
  moc_rpcconsole.cpp \
  moc_sendcoinsdialog.cpp \
  moc_sendcoinsentry.cpp \
  moc_signverifymessagedialog.cpp \
  moc_splashscreen.cpp \
  moc_trafficgraphwidget.cpp \
  moc_transactiondesc.cpp \
  moc_transactiondescdialog.cpp \
  moc_transactionfilterproxy.cpp \
  moc_transactiontablemodel.cpp \
  moc_transactionview.cpp \
  moc_utilitydialog.cpp \
  moc_walletframe.cpp \
  moc_walletmodel.cpp \
  moc_walletview.cpp

IoP_MM = \
  macdockiconhandler.mm \
  macnotificationhandler.mm

QT_MOC = \
  IoP.moc \
  intro.moc \
  overviewpage.moc \
  rpcconsole.moc

QT_QRC_CPP = qrc_IoP.cpp
QT_QRC = IoP.qrc

PROTOBUF_CC = paymentrequest.pb.cc
PROTOBUF_H = paymentrequest.pb.h
PROTOBUF_PROTO = paymentrequest.proto

IoP_QT_H = \
  addressbookpage.h \
  addresstablemodel.h \
  askpassphrasedialog.h \
  IoPaddressvalidator.h \
  IoPamountfield.h \
  IoPgui.h \
  IoPunits.h \
  clientmodel.h \
  coincontroldialog.h \
  coincontroltreewidget.h \
  csvmodelwriter.h \
  editaddressdialog.h \
  guiconstants.h \
  guiutil.h \
  intro.h \
  macdockiconhandler.h \
  macnotificationhandler.h \
  monitoreddatamapper.h \
  notificator.h \
  openuridialog.h \
  optionsdialog.h \
  optionsmodel.h \
  overviewpage.h \
  paymentrequestplus.h \
  paymentserver.h \
  qvalidatedlineedit.h \
  qvaluecombobox.h \
  receivecoinsdialog.h \
  receiverequestdialog.h \
  recentrequeststablemodel.h \
  rpcconsole.h \
  sendcoinsdialog.h \
  sendcoinsentry.h \
  signverifymessagedialog.h \
  splashscreen.h \
  trafficgraphwidget.h \
  transactiondesc.h \
  transactiondescdialog.h \
  transactionfilterproxy.h \
  transactionrecord.h \
  transactiontablemodel.h \
  transactionview.h \
  utilitydialog.h \
  walletframe.h \
  walletmodel.h \
  walletmodeltransaction.h \
  walletview.h \
  winshutdownmonitor.h

RES_ICONS = \
  res/icons/add.png \
  res/icons/address-book.png \
  res/icons/IoP.ico \
  res/icons/IoP.png \
  res/icons/IoP_testnet.ico \
  res/icons/IoP_testnet.png \
  res/icons/clock1.png \
  res/icons/clock2.png \
  res/icons/clock3.png \
  res/icons/clock4.png \
  res/icons/clock5.png \
  res/icons/configure.png \
  res/icons/connect0_16.png \
  res/icons/connect1_16.png \
  res/icons/connect2_16.png \
  res/icons/connect3_16.png \
  res/icons/connect4_16.png \
  res/icons/debugwindow.png \
  res/icons/edit.png \
  res/icons/editcopy.png \
  res/icons/editpaste.png \
  res/icons/export.png \
  res/icons/filesave.png \
  res/icons/history.png \
  res/icons/key.png \
  res/icons/lock_closed.png \
  res/icons/lock_open.png \
  res/icons/overview.png \
  res/icons/qrcode.png \
  res/icons/quit.png \
  res/icons/receive.png \
  res/icons/remove.png \
  res/icons/send.png \
  res/icons/synced.png \
  res/icons/toolbar.png \
  res/icons/toolbar_testnet.png \
  res/icons/transaction0.png \
  res/icons/transaction2.png \
  res/icons/transaction_conflicted.png \
  res/icons/tx_inout.png \
  res/icons/tx_input.png \
  res/icons/tx_output.png \
  res/icons/tx_mined.png

IoP_QT_CPP = \
  IoP.cpp \
  IoPaddressvalidator.cpp \
  IoPamountfield.cpp \
  IoPgui.cpp \
  IoPunits.cpp \
  clientmodel.cpp \
  csvmodelwriter.cpp \
  guiutil.cpp \
  intro.cpp \
  monitoreddatamapper.cpp \
  notificator.cpp \
  optionsdialog.cpp \
  optionsmodel.cpp \
  qvalidatedlineedit.cpp \
  qvaluecombobox.cpp \
  rpcconsole.cpp \
  splashscreen.cpp \
  trafficgraphwidget.cpp \
  utilitydialog.cpp \
  winshutdownmonitor.cpp

if ENABLE_WALLET
IoP_QT_CPP += \
  addressbookpage.cpp \
  addresstablemodel.cpp \
  askpassphrasedialog.cpp \
  coincontroldialog.cpp \
  coincontroltreewidget.cpp \
  editaddressdialog.cpp \
  openuridialog.cpp \
  overviewpage.cpp \
  paymentrequestplus.cpp \
  paymentserver.cpp \
  receivecoinsdialog.cpp \
  receiverequestdialog.cpp \
  recentrequeststablemodel.cpp \
  sendcoinsdialog.cpp \
  sendcoinsentry.cpp \
  signverifymessagedialog.cpp \
  transactiondesc.cpp \
  transactiondescdialog.cpp \
  transactionfilterproxy.cpp \
  transactionrecord.cpp \
  transactiontablemodel.cpp \
  transactionview.cpp \
  walletframe.cpp \
  walletmodel.cpp \
  walletmodeltransaction.cpp \
  walletview.cpp
endif

RES_IMAGES = \
  res/images/about.png \
  res/images/splash.png \
  res/images/splash_testnet.png

RES_MOVIES = $(wildcard res/movies/spinner-*.png)

IoP_RC = res/IoP-qt-res.rc

libIoPqt_a_CPPFLAGS = $(AM_CPPFLAGS) $(QT_INCLUDES) \
  -I$(top_srcdir)/src/qt/forms $(QT_DBUS_INCLUDES)
libIoPqt_a_SOURCES = $(IoP_QT_CPP) $(IoP_QT_H) $(QT_FORMS_UI) \
  $(QT_QRC) $(QT_TS) $(PROTOBUF_PROTO) $(RES_ICONS) $(RES_IMAGES) $(RES_MOVIES)

nodist_libIoPqt_a_SOURCES = $(QT_MOC_CPP) $(QT_MOC) $(PROTOBUF_CC) \
  $(PROTOBUF_H) $(QT_QRC_CPP)

BUILT_SOURCES = $(nodist_libIoPqt_a_SOURCES)

#Generating these with a half-written protobuf header leads to wacky results.
#This makes sure it's done.
$(QT_MOC): $(PROTOBUF_H)
$(QT_MOC_CPP): $(PROTOBUF_H)

# IoP-qt binary #
IoP_qt_CPPFLAGS = $(AM_CPPFLAGS) $(QT_INCLUDES) \
  -I$(top_srcdir)/src/qt/forms
IoP_qt_SOURCES = IoP.cpp
if TARGET_DARWIN
  IoP_qt_SOURCES += $(IoP_MM)
endif
if TARGET_WINDOWS
  IoP_qt_SOURCES += $(IoP_RC)
endif
IoP_qt_LDADD = libIoPqt.a $(LIBIoP_SERVER)
if ENABLE_WALLET
IoP_qt_LDADD += $(LIBIoP_WALLET)
endif
IoP_qt_LDADD += $(LIBIoP_CLI) $(LIBIoP_COMMON) $(LIBLEVELDB) $(LIBMEMENV) \
  $(BOOST_LIBS) $(QT_LIBS) $(QT_DBUS_LIBS) $(QR_LIBS) $(PROTOBUF_LIBS) $(BDB_LIBS)
IoP_qt_LDFLAGS = $(QT_LDFLAGS)

# forms/foo.h -> forms/ui_foo.h
QT_FORMS_H=$(join $(dir $(QT_FORMS_UI)),$(addprefix ui_, $(notdir $(QT_FORMS_UI:.ui=.h))))

#locale/foo.ts -> locale/foo.qm
QT_QM=$(QT_TS:.ts=.qm)

.PHONY: FORCE
.SECONDARY: $(QT_QM)

IoPstrings.cpp: FORCE
	$(MAKE) -C $(top_srcdir)/src qt/IoPstrings.cpp

translate: IoPstrings.cpp $(QT_FORMS_UI) $(QT_FORMS_UI) $(IoP_QT_CPP) $(IoP_QT_H) $(IoP_MM)
	@test -n $(LUPDATE) || echo "lupdate is required for updating translations"
	@QT_SELECT=$(QT_SELECT) $(LUPDATE) $^ -locations relative -no-obsolete -ts locale/IoP_en.ts

$(QT_QRC_CPP): $(QT_QRC) $(QT_QM) $(QT_FORMS_H) $(RES_ICONS) $(RES_IMAGES) $(RES_MOVIES) $(PROTOBUF_H)
	@cd $(abs_srcdir); test -f $(RCC) && QT_SELECT=$(QT_SELECT) $(RCC) -name IoP -o $(abs_builddir)/$@ $< || \
	  echo error: could not build $@
	$(SED) -e '/^\*\*.*Created:/d' $@ > $@.n && mv $@{.n,}
	$(SED) -e '/^\*\*.*by:/d' $@  > $@.n && mv $@{.n,}

CLEANFILES = $(BUILT_SOURCES) $(QT_QM) $(QT_FORMS_H) *.gcda *.gcno
