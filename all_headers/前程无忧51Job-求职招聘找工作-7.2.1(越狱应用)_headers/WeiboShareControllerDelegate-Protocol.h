//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class WeiboShareController;

@protocol WeiboShareControllerDelegate
- (void)attentionSuccess:(WeiboShareController *)arg1;
- (void)shareSuccess:(WeiboShareController *)arg1;

@optional
- (void)shareRequireLogin:(WeiboShareController *)arg1;
- (void)shareCanceled:(WeiboShareController *)arg1;
@end

