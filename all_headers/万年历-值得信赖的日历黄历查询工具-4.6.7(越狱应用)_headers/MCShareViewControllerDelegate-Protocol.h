//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MCShareViewController;

@protocol MCShareViewControllerDelegate <NSObject>
- (void)mcShareViewShareCancel:(MCShareViewController *)arg1;
- (void)mcShareViewShareFailed:(MCShareViewController *)arg1;
- (void)mcShareViewShareSuccess:(MCShareViewController *)arg1;
@end

