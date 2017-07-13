//
//  ZTOrderProtocol.h
//  ZTOrderProtocol
//
//  Created by nrh on 2017/7/13.
//  Copyright © 2017年 zt. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef void(^OrderBlock)(id);

@protocol ZTOrderProtocol <NSObject>

- (UIViewController *)confirmOrderViewControllerWithGoodsId:(NSString *)goodsId sureComplete:(OrderBlock)sureComplete;

@end
