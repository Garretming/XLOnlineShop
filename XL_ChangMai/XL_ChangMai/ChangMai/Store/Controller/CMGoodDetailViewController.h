//
//  CMGoodDetailViewController.h
//  XL_ChangMai
//
//  Created by 李小龙 on 2019/8/8.
//  Copyright © 2019 李小龙. All rights reserved.
//

#import "CMBaseViewController.h"

NS_ASSUME_NONNULL_BEGIN

@interface CMGoodDetailViewController : CMBaseViewController
@property(nonatomic,assign)long long goodId;
@property(nonatomic,assign)long long storeId;
@property(nonatomic,strong)UIImage *goodImage;
@end

NS_ASSUME_NONNULL_END
