//
//  GTFloatingWindowConfig.h
//  GTSDK
//
//  Created by shangmi on 2023/6/30.
//

#import <Foundation/Foundation.h>
@class GTMultiplyingModel;
NS_ASSUME_NONNULL_BEGIN

//工具栏按钮间隔
extern CGFloat const toolbar_gap_width;
//工具栏按钮宽度
extern CGFloat const toolbar_button_width;
//工具栏按钮高度
extern CGFloat const toolbar_button_height;
//悬浮弹窗宽度
extern CGFloat const floatingWindow_width;
//悬浮弹窗高度
extern CGFloat const floatingWindow_height;
//悬浮弹窗+切换工具栏的总高度(竖屏)
extern CGFloat const floatingWindowAndChange_height;

@interface GTFloatingWindowConfig : NSObject

//返回展现的加速数字（分为整型和浮点型）
+ (GTMultiplyingModel *)didOperation:(BOOL)isAdd SpeedModel:(GTMultiplyingModel *)model;

/// 更新加速器配置
+(void)updateSpeedUpRateConfig;
@end

NS_ASSUME_NONNULL_END
