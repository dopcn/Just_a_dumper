//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CORouteBaseCell.h"

#import "COGridViewDelegate-Protocol.h"

@class COGridView, NSString, UIImageView, UILabel;
@protocol COGridViewDelegate, CONaviAsistantCellGirdActionDelegate;

@interface CONaviAsistantCell : CORouteBaseCell <COGridViewDelegate>
{
    UILabel *_titileLb;
    COGridView *_gridView;
    UIImageView *_newTipImgview;
    _Bool _isHideTitle;
    id <COGridViewDelegate> _delegateBridge;
    long long _gridViewTag;
}

+ (double)getCellHeight:(long long)arg1;
@property(nonatomic) long long gridViewTag; // @synthesize gridViewTag=_gridViewTag;
@property(nonatomic) __weak id <COGridViewDelegate> delegateBridge; // @synthesize delegateBridge=_delegateBridge;
- (void).cxx_destruct;
- (void)setHideTitle:(_Bool)arg1;
- (struct CGRect)titlebarFrame;
- (void)setCellInfo:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
@property(nonatomic) __weak id <CONaviAsistantCellGirdActionDelegate> gridActiondelegate;
- (id)cacheImage;
- (void)setCacheImage:(id)arg1;
- (void)gridView:(id)arg1 didSelectRowAtIndex:(long long)arg2;
- (id)gridView:(id)arg1 gridAtIndex:(long long)arg2;
- (id)selecetedImage:(struct CGSize)arg1;
- (long long)totolNumbersOfGrids:(id)arg1;
- (long long)numberOfColumnsInGrids:(id)arg1;
- (double)gridViewHeightForRow:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

