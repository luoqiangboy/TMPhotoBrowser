Pod::Spec.new do |s|

  s.name         = "TMPhotoBrowser"
  s.version      = "1"
  s.summary      = "TMPhotoBrowser."

  s.description  = <<-DESC
                    this is TMPhotoBrowser
                   DESC

  s.homepage     = "https://github.com/luoqiangboy/TMPhotoBrowser"

  s.license      = { :type => "MIT", :file => "FILE_LICENSE" }

  s.author       = "luoqiangboy"

  s.platform     = :ios, "8.0"

  #  When using multiple platforms
  # s.ios.deployment_target = "5.0"
  # s.osx.deployment_target = "10.7"
  # s.watchos.deployment_target = "2.0"
  # s.tvos.deployment_target = "9.0"

  s.source       = { :git => "git@github.com:luoqiangboy/TMPhotoBrowser.git", :tag => s.version.to_s }

  s.source_files  = "TMPhotoBrowser/TMPhotoBrowser/**/*.{h,m}"
  # s.exclude_files = "Classes/Exclude"

  # s.public_header_files = "Classes/**/*.h"

  s.resources  = "TMPhotoBrowser/TMPhotoBrowser/**/*.{storyboard,xib}", "TMPhotoBrowser/Assets.xcassets"
  # s.resources = "Resources/*.png"

  # s.preserve_paths = "FilesToSave", "MoreFilesToSave"

  # s.framework  = "SomeFramework"
  # s.frameworks = "SomeFramework", "AnotherFramework"

  # s.library   = "iconv"
  # s.libraries = "iconv", "xml2"

  s.requires_arc = true

  # s.xcconfig = { "HEADER_SEARCH_PATHS" => "$(SDKROOT)/usr/include/libxml2" }
  # s.dependency "HLNetworking"
  # s.dependency "Lothar"
end
