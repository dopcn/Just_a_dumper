//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIControl, UILabel;

@interface CDAlbumsBottomView : UIView
{
    CDUnknownBlockType _confirmBlock;
    UIControl *_confirmControl;
    UILabel *_confirmCountLabel;
    UILabel *_confirmLabel;
}

@property(retain, nonatomic) UILabel *confirmLabel; // @synthesize confirmLabel=_confirmLabel;
@property(retain, nonatomic) UILabel *confirmCountLabel; // @synthesize confirmCountLabel=_confirmCountLabel;
@property(retain, nonatomic) UIControl *confirmControl; // @synthesize confirmControl=_confirmControl;
@property(copy, nonatomic) CDUnknownBlockType confirmBlock; // @synthesize confirmBlock=_confirmBlock;
- (void).cxx_destruct;
- (void)setAssetsCount:(long long)arg1;
- (void)confirmControlDidPress;
- (id)init;

@end

