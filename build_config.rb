MRuby::Build.new do |conf|
  toolchain :gcc

  enable_debug

  conf.linker do |linker|
    linker.libraries = %w(softfloat)
    linker.library_paths = ["./"]
  end
  conf.cc.flags << "-mcmodel=kernel -mno-red-zone -mfpmath=387 -mno-sse -mno-sse2 -mno-mmx -mno-3dnow -msoft-float -fno-asynchronous-unwind-tables -fno-omit-frame-pointer -fno-stack-protector"
end
# Define cross build settings
# MRuby::CrossBuild.new('32bit') do |conf|
#   toolchain :gcc
#
#   conf.cc.flags << "-m32"
#   conf.linker.flags << "-m32"
#
#   conf.build_mrbtest_lib_only
#
#   conf.gem 'examples/mrbgems/c_and_ruby_extension_example'
#
#   conf.test_runner.command = 'env'
# end
