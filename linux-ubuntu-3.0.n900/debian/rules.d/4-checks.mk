# Check ABI for package against last release (if not same abinum)
$(abidir)/%: $(stampdir)/stamp-build-%
	install -d $(abidir)
	sed -e 's/^\(.\+\)[[:space:]]\+\(.\+\)[[:space:]]\(.\+\)$$/\3 \2 \1/'	\
		$(builddir)/build-$*/Module.symvers | sort > $@

abi-check-%: $(abidir)/%
	@perl -f $(DROOT)/scripts/abi-check "$*" "$(prev_abinum)" "$(abinum)" \
		"$(prev_abidir)" "$(abidir)" "$(skipabi)"

# Check the module list against the last release (always)
$(abidir)/%.modules: abi-check-%
	install -d $(abidir)
	find $(builddir)/build-$*/ -name \*.ko | \
		sed -e 's/.*\/\([^\/]*\)\.ko/\1/' | sort > $@

module-check-%: $(abidir)/%.modules
	@perl -f $(DROOT)/scripts/module-check "$*" \
		"$(prev_abidir)" "$(abidir)" $(skipmodule)

checks-%: module-check-%
	@# Will be calling more stuff later

# Check the config against the known options list.
config-prepare-check-%: $(stampdir)/stamp-prepare-tree-%
	@perl -f $(DROOT)/scripts/config-check \
		$(builddir)/build-$*/.config "$(arch)" "$*" "$(sharedconfdir)" "$(skipconfig)"

