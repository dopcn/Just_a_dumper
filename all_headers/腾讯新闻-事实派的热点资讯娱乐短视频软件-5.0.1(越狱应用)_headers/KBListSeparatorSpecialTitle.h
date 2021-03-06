//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CListItemType, QNBaseLabel, QNEnlargeHitTestButton, QNRecommendUnlikeTipViewBase, UITableViewCell;

@interface KBListSeparatorSpecialTitle : UIView
{
    unsigned long long _colorHex;
    CDUnknownBlockType _operationBlock;
    UITableViewCell *_tableViewCell;
    CListItemType *_listItem;
    QNBaseLabel *_titleLabel;
    QNEnlargeHitTestButton *_unlikeBtn;
    QNRecommendUnlikeTipViewBase *_unlikeTipView;
}

@property(retain, nonatomic) QNRecommendUnlikeTipViewBase *unlikeTipView; // @synthesize unlikeTipView=_unlikeTipView;
@property(retain, nonatomic) QNEnlargeHitTestButton *unlikeBtn; // @synthesize unlikeBtn=_unlikeBtn;
@property(retain, nonatomic) QNBaseLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) CListItemType *listItem; // @synthesize listItem=_listItem;
@property(nonatomic) __weak UITableViewCell *tableViewCell; // @synthesize tableViewCell=_tableViewCell;
@property(copy, nonatomic) CDUnknownBlockType operationBlock; // @synthesize operationBlock=_operationBlock;
@property(nonatomic) unsigned long long colorHex; // @synthesize colorHex=_colorHex;
- (void).cxx_destruct;
- (void)_unlikeNews:(id)arg1;
- (void)configureWithTitle:(id)arg1 listItem:(id)arg2 callBackDelegate:(id)arg3 operationBlock:(CDUnknownBlockType)arg4;
- (id)initWithFrame:(struct CGRect)arg1;

@end

