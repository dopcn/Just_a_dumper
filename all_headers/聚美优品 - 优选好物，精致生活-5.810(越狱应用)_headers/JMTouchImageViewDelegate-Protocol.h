//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class JMTouchImageView;

@protocol JMTouchImageViewDelegate <NSObject>

@optional
- (void)imageViewStoppedTracking:(JMTouchImageView *)arg1;
- (void)imageViewMoved:(JMTouchImageView *)arg1;
- (void)imageViewStartedTracking:(JMTouchImageView *)arg1;
- (void)imageViewWasTapped:(JMTouchImageView *)arg1;
@end

