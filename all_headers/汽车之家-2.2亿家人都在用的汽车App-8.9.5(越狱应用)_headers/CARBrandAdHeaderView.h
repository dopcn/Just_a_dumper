//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "CARBrandHybridDelegate-Protocol.h"

@class AHAdBaseMetaModel, CARBrandAdHybridView, NSString, UIButton, UIImageView, UILabel;
@protocol CARBrandAdHeaderDelegate;

@interface CARBrandAdHeaderView : UIView <CARBrandHybridDelegate>
{
    AHAdBaseMetaModel *_adData;
    id <CARBrandAdHeaderDelegate> _delegate;
    UIImageView *_brandImg;
    UILabel *_brandTitle;
    UILabel *_brandDetail;
    UIImageView *_brandTag;
    UILabel *_brandTagLabel;
    UIImageView *_brandRightImg;
    UIView *_brandLine;
    UIButton *_clickBtn;
    CARBrandAdHybridView *_hybridView;
}

@property(retain, nonatomic) CARBrandAdHybridView *hybridView; // @synthesize hybridView=_hybridView;
@property(retain, nonatomic) UIButton *clickBtn; // @synthesize clickBtn=_clickBtn;
@property(retain, nonatomic) UIView *brandLine; // @synthesize brandLine=_brandLine;
@property(retain, nonatomic) UIImageView *brandRightImg; // @synthesize brandRightImg=_brandRightImg;
@property(retain, nonatomic) UILabel *brandTagLabel; // @synthesize brandTagLabel=_brandTagLabel;
@property(retain, nonatomic) UIImageView *brandTag; // @synthesize brandTag=_brandTag;
@property(retain, nonatomic) UILabel *brandDetail; // @synthesize brandDetail=_brandDetail;
@property(retain, nonatomic) UILabel *brandTitle; // @synthesize brandTitle=_brandTitle;
@property(retain, nonatomic) UIImageView *brandImg; // @synthesize brandImg=_brandImg;
@property(nonatomic) __weak id <CARBrandAdHeaderDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) AHAdBaseMetaModel *adData; // @synthesize adData=_adData;
- (void).cxx_destruct;
- (void)brandHybridDidEndingWithPage:(long long)arg1 andTag:(long long)arg2;
- (void)clickBtnDidEnding;
- (void)initViews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

