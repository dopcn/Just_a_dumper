//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SkinViewController.h"

@class QMWeiYunSpaceCircleView, UILabel;

@interface QMWeiYunSpaceVC : SkinViewController
{
    QMWeiYunSpaceCircleView *_spaceCircleView;
    UILabel *_qqmusicSpaceLabel;
    UILabel *_weiyunSpaceLabel;
    UILabel *_leftSapceLabel;
    UILabel *_totalSpaceLabel;
}

@property(retain, nonatomic) UILabel *totalSpaceLabel; // @synthesize totalSpaceLabel=_totalSpaceLabel;
@property(retain, nonatomic) UILabel *leftSapceLabel; // @synthesize leftSapceLabel=_leftSapceLabel;
@property(retain, nonatomic) UILabel *weiyunSpaceLabel; // @synthesize weiyunSpaceLabel=_weiyunSpaceLabel;
@property(retain, nonatomic) UILabel *qqmusicSpaceLabel; // @synthesize qqmusicSpaceLabel=_qqmusicSpaceLabel;
@property(retain, nonatomic) QMWeiYunSpaceCircleView *spaceCircleView; // @synthesize spaceCircleView=_spaceCircleView;
- (void).cxx_destruct;
- (void)onNotifyWeiyunSpaceChange:(id)arg1;
- (void)expandSpaceButtonPressed;
- (void)refreshSpaceView;
- (void)constructUI;
- (void)dealloc;
- (void)viewDidLoad;
- (void)loadView;

@end

