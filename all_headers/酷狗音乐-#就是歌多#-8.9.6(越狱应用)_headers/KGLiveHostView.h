//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface KGLiveHostView : UIView
{
    UIImageView *_headImgView;
    UILabel *_msgLabel;
    UILabel *_timeLabel;
    UIImageView *_msgBgImgView;
}

@property(retain, nonatomic) UIImageView *msgBgImgView; // @synthesize msgBgImgView=_msgBgImgView;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) UILabel *msgLabel; // @synthesize msgLabel=_msgLabel;
@property(retain, nonatomic) UIImageView *headImgView; // @synthesize headImgView=_headImgView;
- (void).cxx_destruct;
- (void)showMsg:(id)arg1;
- (void)tap:(id)arg1;
- (void)initView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

