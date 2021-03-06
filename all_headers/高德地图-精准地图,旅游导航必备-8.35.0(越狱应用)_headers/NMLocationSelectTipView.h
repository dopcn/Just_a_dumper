//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NMBaseMapComponentView.h"

@class UIButton, UIImageView, UILabel;
@protocol NMLocationSelectTipViewDataSource, NMLocationSelectTipViewDelegate;

@interface NMLocationSelectTipView : NMBaseMapComponentView
{
    UILabel *_mainTitle;
    UILabel *_subTitle;
    UIButton *_selectBtn;
    UIImageView *_locationImageView;
    _Bool _isFromFeedBack;
    id <NMLocationSelectTipViewDataSource> _dataSource;
    id <NMLocationSelectTipViewDelegate> _delegate;
}

@property(nonatomic) _Bool isFromFeedBack; // @synthesize isFromFeedBack=_isFromFeedBack;
@property(nonatomic) __weak id <NMLocationSelectTipViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <NMLocationSelectTipViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (void)dealloc;
- (void)selectBtnClick;
- (void)reloadNMData;
- (void)updateToPortraitSize;
- (void)updateNMTheme;
- (void)loadUI;
- (id)initWithFrame:(struct CGRect)arg1;

@end

