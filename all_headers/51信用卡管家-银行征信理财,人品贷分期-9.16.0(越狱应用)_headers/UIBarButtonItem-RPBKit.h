//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIBarButtonItem.h>

@class NSString;

@interface UIBarButtonItem (RPBKit)
+ (id)rpb_rightBarButtonWithImage:(id)arg1 target:(id)arg2 action:(SEL)arg3;
+ (id)rpb_rightBarButtonWithTitle:(id)arg1 target:(id)arg2 action:(SEL)arg3;
- (void)rpb_setBadgeColor:(id)arg1 backgroundColor:(id)arg2;
- (void)rpb_setBadgeColor:(id)arg1;
@property(retain, nonatomic) NSString *badge;
- (void)updateBadgeCenterWithWidth:(double)arg1;
- (void)initBadgeLabel;
- (void)setBadgeLabel:(id)arg1;
- (id)badgeLabel;
- (void)rpb_rightBarButtonUpdateImage:(id)arg1;
@end

