//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "MyUnicomFunctionCellItemDelegate-Protocol.h"

@class NSString;
@protocol MyUnicomFunctionCellDelegate;

@interface MyUnicomFunctionCell : UITableViewCell <MyUnicomFunctionCellItemDelegate>
{
    _Bool _messageBadge;
    _Bool _customServiceBadge;
    id <MyUnicomFunctionCellDelegate> _delegate;
}

@property(nonatomic) _Bool customServiceBadge; // @synthesize customServiceBadge=_customServiceBadge;
@property(nonatomic) _Bool messageBadge; // @synthesize messageBadge=_messageBadge;
@property(nonatomic) id <MyUnicomFunctionCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)notificationRefreshBadge;
- (void)itemClick:(id)arg1;
- (void)initView;
- (void)generateControl;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

