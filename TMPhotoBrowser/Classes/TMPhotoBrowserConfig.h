
typedef enum {
    TMWaitingViewModeLoopDiagram = 0, // 环形
    TMWaitingViewModePieDiagram // 饼型
} TMWaitingViewMode;

typedef enum {
    TMPhotoBrowserStyleDefault, //复杂类型，带有弹回原位置动画效果
    TMPhotoBrowserStyleSimple // 简单类型
} TMPhotoBrowserStyle;

#define kMinZoomScale 0.6f
#define kMaxZoomScale 2.0f


#ifndef    weakify
#if __has_feature(objc_arc)

#define weakify( x ) \
_Pragma("clang diagnostic push") \
_Pragma("clang diagnostic ignored \"-Wshadow\"") \
autoreleasepool{} __weak __typeof__(x) __weak_##x##__ = x; \
_Pragma("clang diagnostic pop")

#else

#define weakify( x ) \
_Pragma("clang diagnostic push") \
_Pragma("clang diagnostic ignored \"-Wshadow\"") \
autoreleasepool{} __block __typeof__(x) __block_##x##__ = x; \
_Pragma("clang diagnostic pop")

#endif
#endif

#ifndef    strongify
#if __has_feature(objc_arc)

#define strongify( x ) \
_Pragma("clang diagnostic push") \
_Pragma("clang diagnostic ignored \"-Wshadow\"") \
try{} @finally{} __typeof__(x) x = __weak_##x##__; \
_Pragma("clang diagnostic pop")

#else

#define strongify( x ) \
_Pragma("clang diagnostic push") \
_Pragma("clang diagnostic ignored \"-Wshadow\"") \
try{} @finally{} __typeof__(x) x = __block_##x##__; \
_Pragma("clang diagnostic pop")

#endif
#endif


#define kSCREEN_HEIGHT ([UIScreen mainScreen].bounds.size.height)
#define kSCREEN_WIDTH ([UIScreen mainScreen].bounds.size.width)

//#define iPhoneX ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(1125, 2436), [[UIScreen mainScreen] currentMode].size) : NO)

#define UI_IS_IPAD (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPad)
#define UI_IS_IPHONE (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPhone)
#define UI_IS_RETINA ([[UIScreen mainScreen] scale] >= 2.0)
//判断iPHoneXr
#define SCREENSIZE_IS_XR ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(828, 1792), [[UIScreen mainScreen] currentMode].size) && !UI_IS_IPAD : NO)
//判断iPHoneX、iPHoneXs
#define SCREENSIZE_IS_X ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(1125, 2436), [[UIScreen mainScreen] currentMode].size) && !UI_IS_IPAD : NO)
#define SCREENSIZE_IS_XS ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(1125, 2436), [[UIScreen mainScreen] currentMode].size) && !UI_IS_IPAD : NO)
//判断iPhoneXs Max
#define SCREENSIZE_IS_XS_MAX ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(1242, 2688), [[UIScreen mainScreen] currentMode].size) && !UI_IS_IPAD : NO)

//判断是否为 iPhoneXS  Max，iPhoneXS，iPhoneXR，iPhoneX。根据iPhoneXS Max，iPhoneXS，iPhoneXR，iPhoneX 的宽高比近似做的判断
#define KIsiPhoneHear (((int)((kSCREEN_HEIGHT/kSCREEN_WIDTH)*100) == 216)?YES:NO)


//状态栏高度，iphoneX->44 其他 20
#define kStatusBar_Height ([UIApplication sharedApplication].statusBarFrame.size.height)
//底部安全距离 iphoneX->34 其他 0
#define kBottomSafeHeight (KIsiPhoneHear?34.0f:0.0f)

// browser背景颜色
#define TMPhotoBrowserBackgrounColor ([UIColor colorWithRed:0 green:0 blue:0 alpha:1])

// browser中图片间的margin
#define TMPhotoBrowserImageViewMargin 10

//横竖屏切换动画时长
#define kRotateAnimationDuration 0.35f

// browser中显示图片动画时长
#define TMPhotoBrowserShowImageAnimationDuration 0.35f

// browser中隐藏图片动画时长
#define TMPhotoBrowserHideImageAnimationDuration 0.35f

// 图片下载进度指示进度显示样式（TMWaitingViewModeLoopDiagram 环形，TMWaitingViewModePieDiagram 饼型）
#define kWaitingViewProgressMode TMWaitingViewModePieDiagram

// 图片下载进度指示器背景色
#define TMWaitingViewBackgroundColor ([UIColor colorWithRed:0 green:0 blue:0 alpha:0.2])

// 图片下载进度指示器内部控件间的间距
#define TMWaitingViewItemMargin 6

