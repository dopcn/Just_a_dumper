//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSMutableArray;
@protocol FTieZhiViewCellDelegate;

@interface FTieZhiViewListCell : UITableViewCell
{
    _Bool _bGroup;
    id <FTieZhiViewCellDelegate> _delegate;
    NSMutableArray *_items;
    double _itemW;
}

@property(nonatomic) double itemW; // @synthesize itemW=_itemW;
@property(retain, nonatomic) NSMutableArray *items; // @synthesize items=_items;
@property(nonatomic) id <FTieZhiViewCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool bGroup; // @synthesize bGroup=_bGroup;
- (void)dealloc;
- (void)handleData:(id)arg1 loadImage:(_Bool)arg2;
- (void)createVContentView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 size:(struct CGSize)arg3;

@end

