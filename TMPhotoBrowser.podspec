Pod::Spec.new do |s|

s.name         = "TMPhotoBrowser"
s.version      = "1.1.28"
s.summary      = "TMPhotoBrowser.图片浏览器"

s.homepage     = "https://github.com/luoqiangboy/TMPhotoBrowser"
s.license      = { :type => "MIT", :file => "FILE_LICENSE" }
s.author       = "luoqiangboy"
s.platform     = :ios, "9.0"

s.source       = { :git => "https://github.com/luoqiangboy/TMPhotoBrowser.git", :tag => s.version.to_s }
s.source_files  = "TMPhotoBrowser/Classes/*.{h,m}"

s.resource_bundles = {
'TMPhotoBrowser' => ['TMPhotoBrowser/Assets/*.png']
}

s.requires_arc = true
s.dependency "SDWebImage"

end
