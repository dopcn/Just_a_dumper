//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "MTPGCBaseModuleCellProtocol-Protocol.h"

@class NSString, TTKTPDetailFooterTableViewItem, UILabel;

@interface TTKTPDetailFooterTableViewCell : UITableViewCell <MTPGCBaseModuleCellProtocol>
{
    TTKTPDetailFooterTableViewItem *_item;
    UILabel *_footerNoticeLabel;
}

@property(retain, nonatomic) UILabel *footerNoticeLabel; // @synthesize footerNoticeLabel=_footerNoticeLabel;
@property(retain, nonatomic) TTKTPDetailFooterTableViewItem *item; // @synthesize item=_item;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)setupUI;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

