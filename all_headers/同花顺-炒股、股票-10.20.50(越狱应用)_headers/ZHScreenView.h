//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UILabel;

@interface ZHScreenView : UIView
{
    UILabel *_mainLabel;
    UILabel *_otherLabel;
    UIButton *_yingZhengZhuangZhangBtn;
    UIButton *_xinGuShenGouBtn;
    UIButton *_fengHongSongGuBtn;
}

@property(nonatomic) __weak UIButton *fengHongSongGuBtn; // @synthesize fengHongSongGuBtn=_fengHongSongGuBtn;
@property(nonatomic) __weak UIButton *xinGuShenGouBtn; // @synthesize xinGuShenGouBtn=_xinGuShenGouBtn;
@property(nonatomic) __weak UIButton *yingZhengZhuangZhangBtn; // @synthesize yingZhengZhuangZhangBtn=_yingZhengZhuangZhangBtn;
@property(nonatomic) __weak UILabel *otherLabel; // @synthesize otherLabel=_otherLabel;
@property(nonatomic) __weak UILabel *mainLabel; // @synthesize mainLabel=_mainLabel;
- (void).cxx_destruct;
- (void)btnLayoutChange;
- (void)awakeFromNib;

@end

