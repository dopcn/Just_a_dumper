//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QYCustomButton.h"

@class NSString, UIButton, UIImageView;

@interface QYUSearchCacheBtn : QYCustomButton
{
    NSString *_vipLevel;
    UIButton *_borderView;
    UIImageView *_vipMark;
    NSString *_ctrl;
}

@property(retain, nonatomic) NSString *ctrl; // @synthesize ctrl=_ctrl;
@property(retain, nonatomic) UIImageView *vipMark; // @synthesize vipMark=_vipMark;
@property(retain, nonatomic) UIButton *borderView; // @synthesize borderView=_borderView;
@property(readonly, nonatomic) NSString *vipLevel; // @synthesize vipLevel=_vipLevel;
- (void).cxx_destruct;
- (void)setCtrl:(id)arg1 vip:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

