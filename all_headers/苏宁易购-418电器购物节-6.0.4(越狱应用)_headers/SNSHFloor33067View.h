//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SNSHCommonView.h"

@class NSMutableArray, SNSHCMSFloorDTO, UIImageView, UILabel, UIScrollView, UIView;
@protocol SNSHFloor33067ViewDelegate;

@interface SNSHFloor33067View : SNSHCommonView
{
    SNSHCMSFloorDTO *floorDTO;
    id <SNSHFloor33067ViewDelegate> _delegate;
    NSMutableArray *_keywordArray;
    NSMutableArray *_fullKeywordArray;
    NSMutableArray *_routeArray;
    UIImageView *_topBgView;
    UIView *_topView;
    UILabel *_topTipLabel;
    UIImageView *_arrowImgView;
    UIView *_bottomView;
    UIView *_bottomGrayView;
    UIView *_bottomContentBgView;
    UIScrollView *_bottomScrollView;
}

@property(retain, nonatomic) UIScrollView *bottomScrollView; // @synthesize bottomScrollView=_bottomScrollView;
@property(retain, nonatomic) UIView *bottomContentBgView; // @synthesize bottomContentBgView=_bottomContentBgView;
@property(retain, nonatomic) UIView *bottomGrayView; // @synthesize bottomGrayView=_bottomGrayView;
@property(retain, nonatomic) UIView *bottomView; // @synthesize bottomView=_bottomView;
@property(retain, nonatomic) UIImageView *arrowImgView; // @synthesize arrowImgView=_arrowImgView;
@property(retain, nonatomic) UILabel *topTipLabel; // @synthesize topTipLabel=_topTipLabel;
@property(retain, nonatomic) UIView *topView; // @synthesize topView=_topView;
@property(retain, nonatomic) UIImageView *topBgView; // @synthesize topBgView=_topBgView;
@property(retain, nonatomic) NSMutableArray *routeArray; // @synthesize routeArray=_routeArray;
@property(retain, nonatomic) NSMutableArray *fullKeywordArray; // @synthesize fullKeywordArray=_fullKeywordArray;
@property(retain, nonatomic) NSMutableArray *keywordArray; // @synthesize keywordArray=_keywordArray;
@property(nonatomic) __weak id <SNSHFloor33067ViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)buttonClick:(id)arg1;
- (void)hideBottomView;
- (void)showBottomView;
- (void)showOrHideBottomView;
- (void)updateWithFloorDTO:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

