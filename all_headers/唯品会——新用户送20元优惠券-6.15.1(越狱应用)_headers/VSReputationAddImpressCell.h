//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "VSReputationTableViewCellProtocol-Protocol.h"

@class NSString, UILabel, VSReputationAddTagView;

@interface VSReputationAddImpressCell : UITableViewCell <VSReputationTableViewCellProtocol>
{
    UILabel *_impressTitleLabel;
    VSReputationAddTagView *_editTagView;
}

+ (double)estimatedCellHeightForSectionModel:(id)arg1 withCellWidth:(double)arg2 forRowAtIndexPath:(id)arg3;
@property(retain, nonatomic) VSReputationAddTagView *editTagView; // @synthesize editTagView=_editTagView;
@property(nonatomic) __weak UILabel *impressTitleLabel; // @synthesize impressTitleLabel=_impressTitleLabel;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 configureSectionModel:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

