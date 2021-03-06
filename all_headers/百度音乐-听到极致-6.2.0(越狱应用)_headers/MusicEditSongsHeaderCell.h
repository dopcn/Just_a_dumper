//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "MusicTableHeaderViewDelegate-Protocol.h"

@class MusicTableHeaderView, NSString;
@protocol MusicEditSongsHeaderCellDelegate;

@interface MusicEditSongsHeaderCell : UITableViewCell <MusicTableHeaderViewDelegate>
{
    _Bool _isSelected;
    id <MusicEditSongsHeaderCellDelegate> _delegate;
    MusicTableHeaderView *_headerView;
}

@property(nonatomic) __weak MusicTableHeaderView *headerView; // @synthesize headerView=_headerView;
@property(nonatomic) __weak id <MusicEditSongsHeaderCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
- (void).cxx_destruct;
- (void)musicTableHeaderViewClickOnMiddle:(id)arg1;
- (void)musicTableHeaderViewClickOnRight:(id)arg1;
- (void)musicTableHeaderViewClickOnLeft:(id)arg1;
- (void)p_initializeHeaderView;
- (void)p_initializeSelf;
- (void)p_initializeView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

