//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseSettingCell.h"

@class UIButton, UIImageView;

@interface BaseSelcetCell : BaseSettingCell
{
    UIImageView *_rightIconView;
    UIButton *_touchButton;
}

@property(retain, nonatomic) UIButton *touchButton; // @synthesize touchButton=_touchButton;
@property(retain, nonatomic) UIImageView *rightIconView; // @synthesize rightIconView=_rightIconView;
- (void).cxx_destruct;
- (void)dealloc;
- (void)click:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

