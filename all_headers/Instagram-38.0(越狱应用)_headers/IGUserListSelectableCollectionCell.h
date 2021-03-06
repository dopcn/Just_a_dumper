//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "IGUserListSelectableCellType-Protocol.h"

@class IGTableLayoutSpec, IGUser, IGUserContentView, NSString, UIImage, UIImageView, UIView;

@interface IGUserListSelectableCollectionCell : UICollectionViewCell <IGUserListSelectableCellType>
{
    _Bool _isListRedesignEnabled;
    _Bool _userSelected;
    IGUser *_user;
    IGUserContentView *_userContentView;
    UIImageView *_checkmarkImageView;
    UIImage *_selectedCheckBox;
    UIImage *_emptyCheckBox;
    UIView *_separatorLineView;
    IGTableLayoutSpec *_tableInterface;
}

@property(readonly, nonatomic) IGTableLayoutSpec *tableInterface; // @synthesize tableInterface=_tableInterface;
@property(readonly, nonatomic) _Bool userSelected; // @synthesize userSelected=_userSelected;
@property(readonly, nonatomic) UIView *separatorLineView; // @synthesize separatorLineView=_separatorLineView;
@property(retain, nonatomic) UIImage *emptyCheckBox; // @synthesize emptyCheckBox=_emptyCheckBox;
@property(retain, nonatomic) UIImage *selectedCheckBox; // @synthesize selectedCheckBox=_selectedCheckBox;
@property(readonly, nonatomic) UIImageView *checkmarkImageView; // @synthesize checkmarkImageView=_checkmarkImageView;
@property(readonly, nonatomic) IGUserContentView *userContentView; // @synthesize userContentView=_userContentView;
@property(readonly, nonatomic) IGUser *user; // @synthesize user=_user;
@property(nonatomic) _Bool isListRedesignEnabled; // @synthesize isListRedesignEnabled=_isListRedesignEnabled;
- (void).cxx_destruct;
- (void)configureSeparatorLine;
- (void)clearImageCache;
- (void)setupCheckmarkImageViewForSelectionState;
- (void)setupCheckmarkImageView;
- (void)layoutSubviews;
- (void)setUserSelected:(_Bool)arg1;
- (void)configureCellWithUser:(id)arg1 module:(id)arg2;
- (void)setupSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

