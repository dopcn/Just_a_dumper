//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIView, UIViewController;

@interface GLACPopupController : NSObject
{
    UIView *_view;
    UIViewController *_a;
}

+ (void)close;
+ (void)show:(id)arg1 backgroundEnable:(_Bool)arg2;
+ (void)show:(id)arg1;
@property(retain, nonatomic) UIViewController *a; // @synthesize a=_a;
@property(retain, nonatomic) UIView *view; // @synthesize view=_view;
- (void).cxx_destruct;
- (void)openPopup:(_Bool)arg1;

@end

