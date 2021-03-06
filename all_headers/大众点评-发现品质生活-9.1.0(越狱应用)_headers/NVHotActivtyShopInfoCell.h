//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NVBaseShopCell.h"

@class NSIndexPath, NSString, NVHotActivtyShopInfoModule, NVImageView, UIImageView, UILabel;
@protocol NVShopInfoEventDelegate;

@interface NVHotActivtyShopInfoCell : NVBaseShopCell
{
    _Bool _firstLoad;
    NVImageView *_mainImageView;
    NVImageView *_secondImageView;
    UIImageView *_alphaMarkView;
    UIImageView *_secondAlphaMarkView;
    UILabel *_descLabel;
    UILabel *_secondDescLabel;
    NVHotActivtyShopInfoModule *_vc;
    NSIndexPath *_indexPath;
    double _cellHeight;
    NSString *_urlForJumpFirst;
    NSString *_urlForJumpSecond;
    NSString *_secondUrlForJump;
    long long _activityCount;
    id <NVShopInfoEventDelegate> _eventDelegate;
}

@property(nonatomic) _Bool firstLoad; // @synthesize firstLoad=_firstLoad;
@property(nonatomic) __weak id <NVShopInfoEventDelegate> eventDelegate; // @synthesize eventDelegate=_eventDelegate;
@property(nonatomic) long long activityCount; // @synthesize activityCount=_activityCount;
@property(retain, nonatomic) NSString *secondUrlForJump; // @synthesize secondUrlForJump=_secondUrlForJump;
@property(retain, nonatomic) NSString *urlForJumpSecond; // @synthesize urlForJumpSecond=_urlForJumpSecond;
@property(retain, nonatomic) NSString *urlForJumpFirst; // @synthesize urlForJumpFirst=_urlForJumpFirst;
@property(nonatomic) double cellHeight; // @synthesize cellHeight=_cellHeight;
@property(retain, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property(retain, nonatomic) NVHotActivtyShopInfoModule *vc; // @synthesize vc=_vc;
@property(readonly, nonatomic) UILabel *secondDescLabel; // @synthesize secondDescLabel=_secondDescLabel;
@property(readonly, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) UIImageView *secondAlphaMarkView; // @synthesize secondAlphaMarkView=_secondAlphaMarkView;
@property(retain, nonatomic) UIImageView *alphaMarkView; // @synthesize alphaMarkView=_alphaMarkView;
@property(readonly, nonatomic) NVImageView *secondImageView; // @synthesize secondImageView=_secondImageView;
@property(readonly, nonatomic) NVImageView *mainImageView; // @synthesize mainImageView=_mainImageView;
- (void).cxx_destruct;
- (void)setRightLayout;
- (void)setLeftLayout;
- (void)setTowLayout;
- (void)setOnlyOneLayout;
- (void)onClickMainImageSecond;
- (void)onClickMainImageFirst;
- (id)openURL:(id)arg1;
- (double)middleMargin;
- (double)bottomMargin;
- (double)topMargin;
- (void)makeupAlphaMask;
- (double)getMainImageViewWidth;
- (double)getMainImageViewHeight;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

