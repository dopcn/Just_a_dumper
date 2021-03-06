//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "NFOutEventCenterProtocol-Protocol.h"

@class NSString, UIButton, UILabel, UIView;
@protocol INFLabelEditCollectionViewCellDataSource, NFLabelEditCollectionViewCellDelegate;

@interface NFLabelEditCollectionViewCell : UICollectionViewCell <NFOutEventCenterProtocol>
{
    _Bool _editing;
    id <NFLabelEditCollectionViewCellDelegate> _delegate;
    UILabel *_descLabel;
    UIButton *_closeButton;
    UIView *_bgView;
    id <INFLabelEditCollectionViewCellDataSource> _dataSource;
}

@property(nonatomic) _Bool editing; // @synthesize editing=_editing;
@property(retain, nonatomic) id <INFLabelEditCollectionViewCellDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) UIView *bgView; // @synthesize bgView=_bgView;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(nonatomic) id <NFLabelEditCollectionViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didApplyTheme;
- (void)onLongPress:(id)arg1;
- (void)onTap:(id)arg1;
- (void)onCloseClicked:(id)arg1;
- (void)updateCellInfo:(id)arg1 isEditing:(_Bool)arg2;
- (void)layoutSubviews;
- (void)updateStyle;
- (void)setupViews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

