//
//  AnimationCommonOneViewController.h
//  LH_Animation
//
//  Created by 李欢 on 2017/3/30.
//  Copyright © 2017年 李欢. All rights reserved.
//

#import <UIKit/UIKit.h>
typedef NS_ENUM(NSInteger,AnimationType){
    AnimationTypeMove,//2D
    AnimationTypeRoate,
    AnimationTypeGradient,
    AnimationTypeReplicator,
    AnimationTypeEmitterLauyer,
    AnimationTypeCAEAGLayer,
    AnimationTypeCAAnimation,//属性动画
    AnimationTypeBezierPath,//曲线动画
    AnimationTypeBasicAnimation,
    AnimationTypeBasicTwoAnimation,
    AnimationTypeAnimationGroup,
    AnimationTypeAnimationMediaTiming,//huan chong
    AnimationTypeAnimationCAKey,
};
@interface AnimationCommonOneViewController : UIViewController
@property (nonatomic,assign) AnimationType type;
@end
