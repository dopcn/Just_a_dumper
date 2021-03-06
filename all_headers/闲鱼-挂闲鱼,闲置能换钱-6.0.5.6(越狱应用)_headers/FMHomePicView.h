//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "FMHorListViewDataSource-Protocol.h"
#import "FMHorListViewDelegate-Protocol.h"

@class FMHorListView, NSString, XMItemInfo;

@interface FMHomePicView : UIView <FMHorListViewDelegate, FMHorListViewDataSource>
{
    XMItemInfo *_itemDO;
    FMHorListView *_listView;
    CDUnknownBlockType _clickPicBlock;
    CDUnknownBlockType _clickVoiceBlock;
    _Bool _isNeedAddBrowse;
    CDUnknownBlockType _touchActionBlock;
}

@property(copy, nonatomic) CDUnknownBlockType touchActionBlock; // @synthesize touchActionBlock=_touchActionBlock;
@property(nonatomic) _Bool isNeedAddBrowse; // @synthesize isNeedAddBrowse=_isNeedAddBrowse;
- (void).cxx_destruct;
- (void)clickVoiceButton:(id)arg1;
- (void)touchAction:(unsigned long long)arg1;
- (void)setClickVoiceBlock:(CDUnknownBlockType)arg1;
- (void)setClickPicBlock:(CDUnknownBlockType)arg1;
- (void)setItemDO:(id)arg1;
- (void)listViewScrolled;
- (void)listView:(id)arg1 didSelectColumnAtIndex:(long long)arg2;
- (id)listView:(id)arg1 viewForColumnAtIndex:(long long)arg2;
- (double)listView:(id)arg1 widthForColumnAtIndex:(long long)arg2;
- (long long)numberOfColumnsInListView:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

