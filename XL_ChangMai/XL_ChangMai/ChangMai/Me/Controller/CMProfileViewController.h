//
//  CMProfileViewController.h
//  XL_ChangMai
//
//  Created by 李小龙 on 2019/7/30.
//  Copyright © 2019 李小龙. All rights reserved.
//

#import "CMBaseViewController.h"

NS_ASSUME_NONNULL_BEGIN

@interface CMProfileViewController : CMBaseViewController
/** 修改头像 */
@property (nonatomic,copy) void(^setHead)();
@end

NS_ASSUME_NONNULL_END
