//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "NICell-Protocol.h"

@class FeedsSubscribeEntryObject, NSString, UIView;
@protocol FeedsSubscribeEntryCellDelegate;

@interface FeedsSubscribeEntryCell : UITableViewCell <NICell>
{
    FeedsSubscribeEntryObject *_object;
    id <FeedsSubscribeEntryCellDelegate> _delegate;
    UIView *_subscribeEntryView;
}

+ (double)heightForObject:(id)arg1 atIndexPath:(id)arg2 tableView:(id)arg3;
@property(retain, nonatomic) UIView *subscribeEntryView; // @synthesize subscribeEntryView=_subscribeEntryView;
@property(nonatomic) __weak id <FeedsSubscribeEntryCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) FeedsSubscribeEntryObject *object; // @synthesize object=_object;
- (void).cxx_destruct;
- (void)didTapCell;
- (void)initSubscribeEntryView;
- (_Bool)shouldUpdateCellWithObject:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

