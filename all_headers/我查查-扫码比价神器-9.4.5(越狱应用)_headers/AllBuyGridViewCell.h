//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "WccGridViewDataSource-Protocol.h"
#import "WccGridViewDelegate-Protocol.h"

@class NSString, WCCGridView, ZXHomeAllBuying;
@protocol AllBuyGridViewCellDelegate;

@interface AllBuyGridViewCell : UITableViewCell <WccGridViewDataSource, WccGridViewDelegate>
{
    WCCGridView *_gridView;
    ZXHomeAllBuying *_allBuy;
    id <AllBuyGridViewCellDelegate> _delegate;
}

@property(nonatomic) __weak id <AllBuyGridViewCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) ZXHomeAllBuying *allBuy; // @synthesize allBuy=_allBuy;
@property(retain, nonatomic) WCCGridView *gridView; // @synthesize gridView=_gridView;
- (void).cxx_destruct;
- (void)gridView:(id)arg1 selectItemWithSender:(id)arg2 WithIndexPath:(id)arg3;
- (long long)numberOfItemsCountWithGridView:(id)arg1;
- (id)gridView:(id)arg1 CellForItemAtIndexPath:(id)arg2 Reused:(_Bool)arg3;
- (_Bool)CustomRowOfGridView:(id)arg1;
- (long long)numberOfMaxColumnsWithGridView:(id)arg1;
- (double)gridView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)calculateHightOfGridViewWith:(id)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

