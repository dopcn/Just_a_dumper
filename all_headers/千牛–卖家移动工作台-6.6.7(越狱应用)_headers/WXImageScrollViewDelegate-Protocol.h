//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class WXImageScrollView;

@protocol WXImageScrollViewDelegate <NSObject>

@optional
- (void)needUpdateOriginalButtonProgress:(double)arg1 hidden:(_Bool)arg2 animatedEnd:(_Bool)arg3 imageScrollView:(WXImageScrollView *)arg4;
- (void)loadingImage:(WXImageScrollView *)arg1;
- (void)didFinishLoadImage:(WXImageScrollView *)arg1;
- (void)willStartLoadImage:(WXImageScrollView *)arg1;
@end

