//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class AMPopTip;

@interface MTCustomPopTipsView : UIView
{
    AMPopTip *_popTip;
}

@property(retain, nonatomic) AMPopTip *popTip; // @synthesize popTip=_popTip;
- (void).cxx_destruct;
- (void)showVideoSettingsMenuTipsWithFrame:(struct CGRect)arg1;
- (void)showHomeMaterialCenterTipsWithFrame:(struct CGRect)arg1;
- (void)showEffectAlphaTipsWithFrame:(struct CGRect)arg1;
- (void)showWithFrame:(struct CGRect)arg1 maxWidth:(double)arg2 duration:(double)arg3 message:(id)arg4;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)hideAlphaTips;
- (void)showTipsWithType:(long long)arg1 frame:(struct CGRect)arg2;

@end

