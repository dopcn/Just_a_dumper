//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "IfengData_RequestListener-Protocol.h"

@class IfengStockSegmentView, NSArray, NSString;

@interface IfengStockIndexSegmentCell : UITableViewCell <IfengData_RequestListener>
{
    IfengStockSegmentView *_segmentView;
    NSArray *_title;
    long long _section;
}

@property(nonatomic) long long section; // @synthesize section=_section;
@property(retain, nonatomic) NSArray *title; // @synthesize title=_title;
@property(retain, nonatomic) IfengStockSegmentView *segmentView; // @synthesize segmentView=_segmentView;
- (void).cxx_destruct;
- (void)requestStockIndexMoreWithIndex:(long long)arg1;
- (void)didSelecdtdSegment:(id)arg1;
- (void)updateCellWithTitleArray:(id)arg1 WithSection:(long long)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

