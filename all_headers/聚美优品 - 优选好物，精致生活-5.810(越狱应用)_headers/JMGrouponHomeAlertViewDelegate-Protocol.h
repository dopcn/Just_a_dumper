//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class JMGrouponHomeAlertView, NSString, UIButton, UICollectionView;

@protocol JMGrouponHomeAlertViewDelegate <NSObject>

@optional
- (void)grouponHomeAlertView:(JMGrouponHomeAlertView *)arg1 jumpToProductDetailActionWithCollectionView:(UICollectionView *)arg2 andJumpUrl:(NSString *)arg3;
- (void)grouponHomeAlertView:(JMGrouponHomeAlertView *)arg1 grouponActionWithSender:(UIButton *)arg2;
@end

