//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KWPublicViewController.h"

@class UIView;

@interface KWQuickLoginBaseViewController : KWPublicViewController
{
    UIView *_backgroundView;
    UIView *_containerView;
}

+ (void)showWithIdentifier:(id)arg1;
@property(nonatomic) __weak UIView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) __weak UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
- (void).cxx_destruct;
- (void)tapDismissAction:(id)arg1;
- (void)hideWithAnimation:(CDUnknownBlockType)arg1;
- (void)showWithAnimation;

@end

