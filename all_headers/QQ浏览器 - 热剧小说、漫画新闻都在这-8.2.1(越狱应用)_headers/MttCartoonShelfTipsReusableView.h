//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MttCartoonBaseCollectionReusableView.h"

@class UIButton, UIImageView, UILabel;
@protocol MttCartoonShelfTipsReusableViewDelegate;

@interface MttCartoonShelfTipsReusableView : MttCartoonBaseCollectionReusableView
{
    UILabel *_titleLabel;
    UIButton *_goButton;
    long long _tipsType;
    id <MttCartoonShelfTipsReusableViewDelegate> _delegate;
    UIImageView *_imageView;
    UILabel *_leftLabel;
    UILabel *_rightLabel;
}

@property(retain, nonatomic) UILabel *rightLabel; // @synthesize rightLabel=_rightLabel;
@property(retain, nonatomic) UILabel *leftLabel; // @synthesize leftLabel=_leftLabel;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) __weak id <MttCartoonShelfTipsReusableViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long tipsType; // @synthesize tipsType=_tipsType;
@property(retain, nonatomic) UIButton *goButton; // @synthesize goButton=_goButton;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)onGoButtonClicked:(id)arg1;
- (void)layoutSubviews;
- (void)refreshSkin;
- (void)setupChildView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

