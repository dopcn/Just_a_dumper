//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSString, SFormServiceAreaCell, SServiceAreaItemModel, UIButton, UIImageView, UILabel, UITapGestureRecognizer, UIView;

@interface SServiceAreaItemCell : UICollectionViewCell <UIGestureRecognizerDelegate>
{
    CDUnknownBlockType _didChanged;
    CDUnknownBlockType _didClick;
    SFormServiceAreaCell *_serviceAreaCell;
    SServiceAreaItemModel *_dataModel;
    UIView *_tipView;
    UIImageView *_iconView;
    UILabel *_titleLabel;
    UILabel *_descLabel;
    UIButton *_clickButton;
    UIButton *_tipButton;
    UIView *_upcontainView;
    UIView *_downcontainView;
    UITapGestureRecognizer *_downcontainViewTapGR;
    UITapGestureRecognizer *_upcontainViewTapGR;
}

@property(retain, nonatomic) UITapGestureRecognizer *upcontainViewTapGR; // @synthesize upcontainViewTapGR=_upcontainViewTapGR;
@property(retain, nonatomic) UITapGestureRecognizer *downcontainViewTapGR; // @synthesize downcontainViewTapGR=_downcontainViewTapGR;
@property(retain, nonatomic) UIView *downcontainView; // @synthesize downcontainView=_downcontainView;
@property(retain, nonatomic) UIView *upcontainView; // @synthesize upcontainView=_upcontainView;
@property(retain, nonatomic) UIButton *tipButton; // @synthesize tipButton=_tipButton;
@property(retain, nonatomic) UIButton *clickButton; // @synthesize clickButton=_clickButton;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) UIView *tipView; // @synthesize tipView=_tipView;
@property(retain, nonatomic) SServiceAreaItemModel *dataModel; // @synthesize dataModel=_dataModel;
@property(nonatomic) __weak SFormServiceAreaCell *serviceAreaCell; // @synthesize serviceAreaCell=_serviceAreaCell;
@property(copy, nonatomic) CDUnknownBlockType didClick; // @synthesize didClick=_didClick;
@property(copy, nonatomic) CDUnknownBlockType didChanged; // @synthesize didChanged=_didChanged;
- (void).cxx_destruct;
- (_Bool)isCanBeClicked;
- (void)handleDownSingleTap:(id)arg1;
- (void)handleUpSingleTap:(id)arg1;
- (void)didTipTouchUpInside:(id)arg1;
- (void)didTouchUpInside:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

